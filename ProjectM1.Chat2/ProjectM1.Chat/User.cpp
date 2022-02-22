#include "User.h"
#include <string>
using namespace std;

								/// ������������

User::User() :_login("defLog"), _pasword("defPas"), _name("defName")
{
	_chats = new Chat[_UserLength];

}

User::User(string log, string pas, string name) :_login(log), _pasword(pas), _name(name)
{
	_chats = new Chat[_UserLength];

}

//User::~User()
//{
//	delete[] _chats;
//}

							   /// �������

void User::setUser(string log, string pas, string name)
{
	_login = log;
	_pasword = pas;
	_name = name;

}

void User::setLogin(string login){ _login = login; }
void User::setPasword(string pasword) { _pasword = pasword; }
void User::setName(string name) { _name = name; }
	
                              /// �������

string User::getLogin() { return _login; }
string User::getPassword(){ return _pasword; }
string User::getName(){ return _name; }

void User::printUser()
{
	cout << _login << endl;
	cout << _pasword << endl;
	cout << _name << endl;

}

void User::print()
{

	_chats[0].print();

}

void User::addMessage(string from, string to, string message)
{
	_chats[0].addMessage(from, to, message);

}

void User::addChat()
{
	Chat new_m;

	Chat* n_d = new Chat[_UserLength + 1];

	for (int i = 0; i < _UserLength; ++i)
	{
		n_d[i] = _chats[i];
	}

	n_d[_UserLength] = new_m;

	delete[] _chats;
	_chats = n_d;
	++_UserLength;

}

/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
void User::addMessageTo(string from, string to, string message, int index)
{
	_chats[index].addMessage(from, to, message);


}

void User::printChat(int index)
{
	cout << "Chat index is:  " << index << endl;

	_chats[index].print();

}

//User& User::operator= (User old)
//{
//	this->_UserLength = old._UserLength;
//	for (int i = 0; i < _UserLength; ++i)
//	{
//		this->_chats[i] = old._chats[i];
//
//	}
//
//	return *this;
//}