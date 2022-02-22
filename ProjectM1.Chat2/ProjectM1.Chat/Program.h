#pragma once
#include "User.h"
#include "Chat.h"
#include "Message.h"
#include <string>
#include <iostream>
using namespace std;


class Program : public User
{
private:

	User* _currentUser = nullptr;
	User* _users;
	int _programLength = 3;
	bool _chatIsON = true;

public:

								///������������

	Program();
	//~Program();

								/// �������

	void setUser(string log, string pas, string name, int index);
	void setStatusOFF();

								/// �������

	User* getUserByLogin(string login);
	User* getCurrentUser();
	bool getProgramStatus();

								///����������

	void addMessage(string from, string to, string message, int index);
	void printUsers();
	void print(int index);
	void printUser(int index);
	void login();
	void registration();
	void mainMenu();
	void userMenu();
	void addUser();

	                              //manual

	void registrationM(string log, string pas, string name);
	void loginM(string login);

};

