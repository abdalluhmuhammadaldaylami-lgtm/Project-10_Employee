#pragma once
#include<iostream>
using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FristName;
	string _LastName;
	string _phon;
	string _Email;

public:
	clsPerson(int ID,string FristName, string LastName, string Phon, string Email) {
		_FristName = FristName;
		_LastName = LastName;
		_phon = Phon;
		_Email = Email;
		_ID = ID;
	}
	int ID() {
		return _ID;
	}
	void SetFristName(string fristname) {
		_FristName = fristname;
	}
	string getFristName() {
		return _FristName;
	}
	_declspec(property(get = getFristName, put = SetFristName))string FristName;

	void SetLastName(string lastname) {
		_LastName = lastname;
	}
	string getLastName() {
		return _LastName;
	}
	_declspec(property(get = getLastName, put = SetLastName))string LastName;

	void SetPhonNumber(string phon) {
		_phon = phon;
	}
	string getPhonNumber() {
		return _phon;
	}
	_declspec(property(get = getPhonNumber, put = SetPhonNumber))string Phon;

	void SetEmail(string email) {
		_Email = email;
	}
	string getEmail() {
		return _Email;
	}
	_declspec(property(get = getEmail, put = SetEmail))string Email;

	void Print() {
		cout << "-----------------------------\n";
		cout << "ID :" << _ID << endl;
		cout << "Frist Name :" << _ID << endl;
		cout << "Last Name :" << _ID << endl;
		cout << "Email :" << _ID << endl;
		cout << "Phon :" << _ID << endl;
		cout << "-----------------------------\n";
	}
};



