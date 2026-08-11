#pragma once
#include <iostream>
using namespace std;
class clsClients
{
private:
	string _UserName;
	string _Paswoord;
protected:
	string _Name;
	double _Salary;
	double _Balance;
public:
	clsClients(string Name, double Salary, double Balance, string UserName, string Pasword)
	{
		_Name = Name;
		_Salary = Salary;
		_Balance = Balance;
		_UserName = UserName;
		_Paswoord = Pasword;
	};
	//Set & Get Name
	void SetName(string Name) {
		_Name = Name;
	}
	string Name() {
		return _Name;
	}
	//Set & Get Salary
	void SetSalary(double Salary) {
		_Salary = Salary;
	}
	double Salary() {
		return _Salary;
	}
	//Set & Get Balance
	void SetBalance(double Balance) {
		_Balance = Balance;
	}
	double Balance() {
		return _Balance;
	}
	//Set & Get User Name
	void SetUserName(string UserName) {
		_UserName = UserName;
	}
	string UserName() {
		return _UserName;
	}
	//Set & Get Pasword
	void SetPasword(string Pasword) {
		_Paswoord = Pasword;
	}
	string Pasword() {
		return _Paswoord;
	}

	virtual void Print() {
		cout << "\t\t Main Clients \n";
		cout << "================================\n";
		cout << " Name        : " << Name()<<endl;
		cout << " Salary     : " << Salary()<<endl;
		cout << " Balance     : " << Balance()<<endl;
		cout << " User Name   : " << UserName()<<endl;
		cout << " Pasword     : " << Pasword()<<endl;
		cout << "================================\n";

	}


};

