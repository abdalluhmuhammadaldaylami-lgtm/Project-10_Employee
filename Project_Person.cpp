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
	
	clsPerson(int ID, string FristName, string LastName, string Phon, string Email) {
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
		cout << "ID        :" << _ID << endl;
		cout << "Frist Name:" << _FristName << endl;
		cout << "Last Name :" << _LastName << endl;
		cout << "Email     :" << _Email << endl;
		cout << "Phon      :" << _phon << endl;
		cout << "-----------------------------\n";
	}
	void SendEmail(string Subject,string Body) {
		cout << "The following massage send to :" << _Email << endl;
		cout << "Subject :" << Subject << endl;
		cout << "Body :" << Body << endl;
	}
	void SendSMS(string Subject, string Body) {
		cout << "The following massage send to :" << _phon << endl;
		cout << "Subject :" << Subject << endl;
		cout << "Body :" << Body << endl;
	}
};

class clsEmploy:public clsPerson {
private:

	string _Tital;

public:
	clsEmploy(int ID, string FristName, string LastName, string Phon, string Email,string tital)
		:clsPerson( ID, FristName, LastName, Phon, Email)
	{
		_Tital = tital;
	}

	void SetTital(string tital) {
		_Tital = tital;
	}
	string getTital() {
		return _Tital;
	}
	_declspec(property(get = getTital, put = SetTital))string tital;

	
	void Print() {
		 cout << "-----------------------------\n";
		cout << "ID        :" << ID() << endl;
		cout << "Frist Name:" << FristName << endl;
		cout << "Last Name :" << LastName << endl;
		cout << "Email     :" << Email << endl;
		cout << "Phon      :" << Phon << endl;
		cout << "-----------------------------\n";
		cout << "Tital       :" << _Tital << endl;
	}
};


int main() {

	clsEmploy em(10, "Abdalluh", "Muhammad", "Abdal@12", "776341236","234234");
 

	em.Print();


}