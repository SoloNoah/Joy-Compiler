#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <time.h>
#include <regex>

typedef enum access { ADMIN, USER, CONPROMOTER } permission;
typedef enum string_cmp { LEFT, RIGHT };

namespace JoyCompiler {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	extern string globalUsername;

	/// =================================== Date Struct ================================
	typedef struct Date {
		int day, month, year;
	}Date;

	///============================== Function Declarations ============================
	Date getDate(string);
	int cmpDates(Date, Date); //If return is -1 => not good
	bool writeToWatchList(string); //If true => good, false => not good
	string currentDateTime();
	string printAllFile(string);
	void createLogFile(string);
	void writeToUserSearch(string);
	bool checkIfEventExist(string, string);
	bool checkIfFileEmpty(const char*);
	string findContentByName(string, string);
	string removeLastWord(string);
	string findContentByCatAndGen(string, string, string);
	void deleteLine(string, string);
	bool editPermission(String^, string); //If true => good, false => not good
	bool findUser(string, string); //If true => good, false => not good
	void moveUser(string, string);
	bool checkIfBelongToUser(string); //If true => good, false => not good
	bool deleteEvent(string, string, string); //If true => good, false => not good
	void writeToDataBase(String^, String^, String^, String^, string);
	int getNumberOfLines(char*);
	int findUserName(string); //If return value is -1 => not good
	int loginCheck(string, string); //If return value is -1 => not good

	///============================== Struct functions =================================
	Date getDate(string line) {
		const char* a = line.c_str();
		int counter = 0, i = 0;
		string temp;
		Date date;
		while (counter < 4) {
			if (a[i] == ' ') {
				counter++;
				i++;
			}
			if (counter == 3) {
				if (a[i] != '.')
					temp += a[i];
			}
			i++;
		}
		i = 0;
		counter = stoi(temp);
		date.day = counter / 1000000;
		counter -= date.day * 1000000;
		date.month = counter / 10000;
		counter -= date.month * 10000;
		date.year = counter;
		return date;
	}

	Date convertDate(string date) {
		string tempStr;
		for (int i = 0; i < date.length(); i++)
			if (date[i] != '.')
				tempStr += date[i];
		int temp = stoi(tempStr);
		Date todayDate;
		todayDate.day = temp / 1000000;
		temp -= todayDate.day * 1000000;
		todayDate.month = temp / 10000;
		temp -= todayDate.month * 10000;
		todayDate.year = temp;
		return todayDate;
	}

	int cmpDates(Date date1, Date date2) {
		if (date1.year > date2.year)
			return LEFT;
		else if (date1.year < date2.year)
			return RIGHT;
		else if (date1.year == date2.year) {
			if (date1.month > date2.month)
				return LEFT;
			else if (date1.month < date2.month)
				return RIGHT;
			else if (date1.month == date2.month) {
				if (date1.day >= date2.day)
					return LEFT;
				else if (date1.day < date2.day)
					return RIGHT;
			}
		}
	}

	bool isGoodDate(int day, int month, int year) {
		if (year > 2200 || year < 1900 ||
			month < 1 || month > 12 ||
			day < 1 || day > 31)
			return false;
		if (month == 2) {
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				return (day <= 29);
			return (day <= 28);
		}
		if (month == 4 || month == 6 || month == 9 || month == 11)
			return (day <= 30);
		return true;
	}

	bool writeToWatchList(string line) {
		if (checkIfEventExist(line, "WatchList") == false) {
			int val = 0;
			bool flagOfEmptyFile;
			flagOfEmptyFile = checkIfFileEmpty((globalUsername + "Watchlist.txt").c_str());
			ifstream fromFile(globalUsername + "Watchlist.txt");
			ofstream toFile("temp.txt");
			string identifier = globalUsername + "Watchlist.txt";
			char* fileName = new char[identifier.length()];
			strcpy(fileName, identifier.c_str());
			fileName[identifier.length()] = '\0';
			string strHolder, allText;
			Date date;
			date = getDate(line);
			if (flagOfEmptyFile == true) {
				while (getline(fromFile, strHolder)) {
					val = cmpDates(getDate(strHolder), date);
					if (val == LEFT)
						break;
					else if (val == RIGHT) {
						allText.append(strHolder + "\n");
					}
				}
				allText.append(line + "\n");
				if (val == LEFT) { //If file is still not empty
					allText.append(strHolder + "\n");
					if (!toFile.eof()) {
						while (getline(fromFile, strHolder)) {
							allText.append(strHolder + "\n");
						}
					}
				}
				allText.erase(allText.length() - 1, allText.length());
				toFile << allText;
			}
			else
				toFile << line;
			fromFile.close();
			toFile.close();
			remove(fileName);
			rename("temp.txt", fileName);
			return true;
		}
		return false;
	}

	bool checkIfEventExist(string line, string identifier) {
		if (identifier == "WatchList") {
			ifstream fromFile(globalUsername + "Watchlist.txt");
			string temp;
			while (getline(fromFile, temp)) {
				if (temp == line) {
					fromFile.close();
					return true;
				}
			}
			fromFile.close();
		}
		else if (identifier == "Content") {
			ifstream fromFile("Content.txt");
			string temp;
			while (getline(fromFile, temp)) {
				if (temp == line) {
					fromFile.close();
					return true;
				}
			}
			fromFile.close();
		}
		return false;
	}

	bool checkIfFileEmpty(const char* fileName) {
		fstream file(fileName, ios::in);
		file.seekg(0, file.end);
		int length = file.tellg();
		file.clear();
		file.seekg(0, ios::beg);
		file.close();
		if (length > 0)
			return false;
		else
			return true;
	}

	void removeOutdatedEvents() {
		if (checkIfFileEmpty("Content.txt") == false) {
			string tempStr, totalStr;
			Date today = convertDate(currentDateTime());
			fstream file("Content.txt"), tempFile("temp.txt", ios::out);
			while (getline(file, tempStr)) {
				if (cmpDates(getDate(tempStr), today) == LEFT)
					totalStr.append(tempStr + "\n");
			}
			if (totalStr.length() != 0) {
				totalStr.erase(totalStr.length() - 1, totalStr.length());
				tempFile << totalStr;
			}
			file.close();
			tempFile.close();
			remove("Content.txt");
			rename("temp.txt", "Content.txt");
		}
		else
			cout << "Content is empty.";
	}

	string currentDateTime() {
		time_t now = time(0);
		struct tm tstruct;
		char buf[80];
		tstruct = *localtime(&now);
		strftime(buf, sizeof(buf), "%d.%m.%Y", &tstruct);
		return buf;
	}

	string printAllFile(string identifier) {
		string text, alltext;
		ifstream readFile;
		readFile.open(identifier + ".txt", ios::in);
		while (getline(readFile, text)) {
			alltext.append(text);
			alltext.append("\n");
		}
		readFile.close();
		return alltext;
	}

	void createLogFile(string identifier) {
		ofstream toFile;
		int counter = 0;
		string temp = identifier + "_log_" + currentDateTime() + ".txt";
		toFile.open(temp.c_str());
		ifstream fromFile;
		fromFile.open(identifier + ".txt");
		string read;
		while (getline(fromFile, read)) {
			toFile << read;
			counter++;
			if (!fromFile.eof() && counter >= 1)
				toFile << "\n";
		}
	}

	void writeToUserSearch(string cont) {
		ofstream file;
		file.open("UserSearch.txt", ios::out | ios::trunc);
		file << cont;
		file.close();
	}

	string findAllContent() {
		int i = 0;
		string returnString, readLine;
		ifstream content;
		content.open("Content.txt", ios::in);
		while (getline(content, readLine))
			returnString.append(removeLastWord(readLine) + "\n");
		content.close();
		return returnString;
	}

	string findContentByName(string eventName, string identifier) {
		int i = 0;
		string readEvent, temp, returnString;
		ifstream content;
		content.open("Content.txt", ios::in);
		while (content.good()) {
			getline(content, readEvent); //reading from file to variable
			while (readEvent[i] != '\n') {
				temp += readEvent[i];
				if (readEvent[i] == ' ') {
					temp = temp.substr(0, temp.size() - 1);
					if (temp.compare(eventName) == 0) {
						returnString.append(removeLastWord(readEvent));
						returnString.append("\n");
					}
					break;
				}
				i++;
			}
			i = 0;
			temp.clear();
		}
		return returnString;
	}

	string removeLastWord(string line) {
		const auto pos = line.find_last_of(" \t\n");
		line = line.substr(0, pos);
		return line;
	}

	string findContentByCatAndGen(string genre, string category, string identifier) {
		int i = 0, counter = 0;
		string readEvent, temp, returnString;
		ifstream content;
		String^ d;
		content.open("Content.txt", ios::in);
		while (content.good()) {
			getline(content, readEvent);
			while (counter < 3) {
				if (readEvent[i] == ' ') {
					counter++;
					i++;
				}
				if (counter >= 1)
					temp += readEvent[i];
				if (counter == 3) {
					temp = temp.substr(0, temp.size() - 1);
					if (temp.compare(category + genre) == 0) {
						returnString.append(removeLastWord(readEvent));
						returnString.append("\n");
					}
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
		}
		return returnString;
	}

	void deleteLine(string deleteLine, string identifier) {
		ifstream fromFile;
		ofstream toFile;
		string line, writeToFile;
		identifier = identifier + ".txt";
		char* fileName = new char[identifier.length()];
		strcpy(fileName, identifier.c_str());
		fileName[identifier.length()] = '\0';
		fromFile.open(identifier);
		toFile.open("temp.txt");
		while (getline(fromFile, line)) {
			if (line != deleteLine)
				writeToFile += line + "\n";
		}
		writeToFile.erase(writeToFile.length() - 1, writeToFile.length());
		toFile << writeToFile;
		fromFile.close();
		toFile.close();
		remove(fileName);
		rename("temp.txt", fileName);
	}

	bool editPermission(String^ username, string identifier) {
		int val = findUserName(marshal_as<string>(username));
		if (val == CONPROMOTER) {
			if (identifier == "Remove") {
				if (findUser(marshal_as<string>(username), "ContentPromoters"))
					return true;
			}
			else
				MessageBox::Show("You cant grant another permission to\ncontent promoter.");
		}
		else if (val == USER) {
			if (identifier == "Grant") {
				if (findUser(marshal_as<string>(username), "Users"))
					return true;
			}
			else
				MessageBox::Show("You cant remove another permission to\na user.");
		}
		else if (val == ADMIN)
			MessageBox::Show("You cant edit permission to this user.");
		else
			MessageBox::Show("No user exist with this username");
		return false;
	}

	bool findUser(string username, string identifier) {
		string temp, readLine;
		int counter = 0, i = 0;
		ifstream users(identifier + ".txt", ios::app);
		while (users.good()) {
			getline(users, readLine);
			if (readLine.length() < 3)
				break;
			while (counter < 1) {
				temp += readLine[i];
				if (readLine[i] == ' ') {
					counter++;
					temp = temp.substr(0, temp.size() - 1);
					if (temp.compare(username) == 0) {
						users.close();
						moveUser(readLine, identifier);
						return true;
					}
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
		}
		return false;
	}

	void moveUser(string userLine, string identifier) {
		ifstream fromFile;
		fstream toTempFile, toOtherFile;
		string line, temp;
		int len = 0;
		identifier = identifier + ".txt";
		char* fileName = new char[identifier.length()];
		strcpy(fileName, identifier.c_str());
		fileName[identifier.length()] = '\0';
		fromFile.open(identifier);
		toTempFile.open("temp.txt", ios::out);
		if (identifier == "ContentPromoters.txt")
			toOtherFile.open("Users.txt", ios::app);
		else
			toOtherFile.open("ContentPromoters.txt", ios::app);
		while (getline(fromFile, line)) {
			if (line != userLine) {
				temp.append(line);
				temp.append("\n");
			}
			else {
				toOtherFile.seekg(0, toOtherFile.end);
				int length = toOtherFile.tellg();
				if (length == 0) {
					toOtherFile << userLine;
				}
				else
					toOtherFile << "\n" << userLine;
			}
		}
		temp.erase(temp.length() - 1, temp.length());
		toTempFile << temp;
		fromFile.close();
		toOtherFile.close();
		toTempFile.close();
		remove(fileName);
		rename("temp.txt", fileName);
	}

	bool checkIfBelongToUser(string lineToCheck) {
		if (lineToCheck == globalUsername)
			return true;
		return false;
	}

	bool deleteEvent(string name, string cat, string gen, string date) {
		string temp, readEvent;
		int counter = 0, i = 0;
		ifstream content("Content.txt", ios::app);
		while (getline(content, readEvent)) {
			while (counter < 4) {
				temp += readEvent[i];
				if (readEvent[i] == ' ')
					counter++;
				if (counter == 4) {
					i++;
					temp = temp.substr(0, temp.size() - 1);
					if (temp.compare(name + " " + cat + " " + gen + " " + date) == 0) {
						content.close();
						temp = readEvent;
						if (checkIfBelongToUser(readEvent.erase(0, i))) {
							deleteLine(temp, "Content");
							return true;
						}
						else
							MessageBox::Show("You cant delete other's events.");
					}
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
		}
		return false;
	}

	void writeToDataBase(String^ text1, String^ text2, String^ text3, String^ text4, string identifier) {
		if (identifier == "Bugs") {
			fstream file(identifier + ".txt", ios::app);
			if (!file.eof())
				file << "\n" << marshal_as<string>(text1) + "\0";
			else
				file << marshal_as<string>(text1) + "\0";
			file.close();
		}
		else if (identifier == "Ads") {
			fstream file(identifier + ".txt", ios::app);
			string temp = marshal_as<string>(text3);
			fstream totalAdsFile("TotalAds.txt", ios::app);
			int stop = stoi(temp);
			totalAdsFile.seekg(0, totalAdsFile.end);
			int length = totalAdsFile.tellg();
			if (length != 0)
				totalAdsFile << "\n" << globalUsername + "\n" + marshal_as<string>(text1) + "\n" + marshal_as<string>(text2);
			else
				totalAdsFile << globalUsername + "\n" + marshal_as<string>(text1) + "\n" + marshal_as<string>(text2);
			for (int i = 0; i < stop; i++) {
				file.seekg(0, file.end);
				length = file.tellg();
				if (length != 0)
					file << "\n" << marshal_as<string>(text1) + "\n" + marshal_as<string>(text2);
				else
					file << marshal_as<string>(text1) + "\n" + marshal_as<string>(text2);
			}
			file.close();
		}
		else if (identifier == "Content") {
			string line = marshal_as<string>(text1) + " " + marshal_as<string>(text2) + " " + marshal_as<string>(text3) +
				" " + marshal_as<string>(text4) + " " + globalUsername;
			if (checkIfEventExist(line, "Content") == false) {
				int val = 0;
				if (checkIfFileEmpty("Content.txt") == false) {
					fstream fromFile("Content.txt");
					fstream toFile("temp.txt", ios::out);
					string strHolder, allText;
					Date date;
					date = getDate(line);
					while (getline(fromFile, strHolder)) {
						val = cmpDates(getDate(strHolder), date);
						if (val == LEFT)
							break;
						else if (val == RIGHT) {
							allText.append(strHolder + "\n");
						}
					}
					allText.append(line + "\n");
					if (val == LEFT) { //If file is still not empty
						allText.append(strHolder + "\n");
						while (getline(fromFile, strHolder)) {
							allText.append(strHolder + "\n");
						}
					}
					allText.erase(allText.length() - 1, allText.length());
					toFile << allText;
					fromFile.close();
					toFile.close();
					remove("Content.txt");
					rename("temp.txt", "Content.txt");
				}
				else {
					ofstream toFile("Content.txt");
					toFile << line;
					toFile.close();
				}
			}
		}
		else {
			fstream file(identifier + ".txt", ios::app);
			if (!file.eof())
				file << "\n" << marshal_as<string>(text1) + " " + marshal_as<string>(text2) + " " + marshal_as<string>(text3) +
				" " + marshal_as<string>(text4) + " " + globalUsername + "\0";
			else
				file << marshal_as<string>(text1) + " " + marshal_as<string>(text2) + " " + marshal_as<string>(text3) +
				" " + marshal_as<string>(text4) + " " + globalUsername + "\0";
			file.close();
		}


	}

	int getNumberOfLines(char* fileName) {
		ifstream fromFile;
		string holder;
		int counter = 0;
		fromFile.open(fileName);
		while (getline(fromFile, holder)) {
			counter++;
		}
		fromFile.close();
		return counter;
	}

	int findUserName(string username) {
		string readUserAndPassword, temp;
		ifstream admin, userf, coprom;
		int i = 0, counter = 0;
		admin.open("Admins.txt", ios::in);
		while (getline(admin, readUserAndPassword)) {
			while (counter < 1) {
				temp += readUserAndPassword[i];
				if (readUserAndPassword[i] == ' ') {
					counter++;
					temp = temp.substr(0, temp.size() - 1);
					if (temp == username)
						return ADMIN;
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
		}
		admin.close();
		userf.open("Users.txt", ios::in);
		readUserAndPassword.clear();
		i = counter = 0;
		temp.clear();
		while (getline(userf, readUserAndPassword)) {
			while (counter < 1) {
				temp += readUserAndPassword[i];
				if (readUserAndPassword[i] == ' ') {
					counter++;
					temp = temp.substr(0, temp.size() - 1);
					if (temp == username)
						return USER;
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
		}
		userf.close();
		coprom.open("ContentPromoters.txt", ios::in);
		i = counter = 0;
		readUserAndPassword.clear();
		temp.clear();
		while (getline(coprom, readUserAndPassword)) {
			while (counter < 1) {
				temp += readUserAndPassword[i];
				if (readUserAndPassword[i] == ' ') {
					counter++;
					temp = temp.substr(0, temp.size() - 1);
					if (temp == username)
						return CONPROMOTER;
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
		}
		coprom.close();
		return -1;
	}

	int loginCheck(string username, string password) {
		string readUserAndPassword, temp;
		ifstream admin, userf, coprom;
		admin.open("Admins.txt", ios::in);
		int i = 0, j = 0, counter = 0;
		while (admin.good()) {
			getline(admin, readUserAndPassword);
			while (counter < 2) {
				temp += readUserAndPassword[i];
				if (readUserAndPassword[i] == ' ') {
					counter++;
					if (counter == 2)
						temp = temp.substr(0, temp.size() - 1);
					if (temp == username + " " + password)
						return ADMIN;
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
			readUserAndPassword.clear();
		}
		admin.close();
		userf.open("Users.txt", ios::in);
		i = counter = 0;
		temp.clear();
		while (userf.good()) {
			getline(userf, readUserAndPassword);
			while (counter < 2) {
				temp += readUserAndPassword[i];
				if (readUserAndPassword[i] == ' ') {
					counter++;
					if (counter == 2)
						temp = temp.substr(0, temp.size() - 1);
					if (temp == username + " " + password)
						return USER;
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
			readUserAndPassword.clear();
		}
		userf.close();
		coprom.open("ContentPromoters.txt", ios::in);
		i = counter = 0;
		temp.clear();
		while (coprom.good()) {
			getline(coprom, readUserAndPassword);
			while (counter < 2) {
				temp += readUserAndPassword[i];
				if (readUserAndPassword[i] == ' ') {
					counter++;
					if (counter == 2)
						temp = temp.substr(0, temp.size() - 1);
					if (temp == username + " " + password)
						return CONPROMOTER;
				}
				i++;
			}
			i = counter = 0;
			temp.clear();
			readUserAndPassword.clear();
		}
		return -1;
	}
}