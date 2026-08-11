#pragma once
#include <iostream>
#include "Clients.h"
class clsLoans :public clsClients
{
	double _LoanAmount;
	double _MonthlyInstallment;
public:
	clsLoans(string Name, double Salary, double Balance, string UserName, string Pasword, double LoanAmount, double MonthlyInstallment)
		:clsClients(Name, Salary, Balance, UserName, Pasword) {
		_MonthlyInstallment = Salary * 0.33;
		_LoanAmount = _MonthlyInstallment*60;
	};
	
	// Set & Get Monthly Installment
	void SetMonthlyInstallment(double MonthlyInstallment) {
		_MonthlyInstallment = MonthlyInstallment;
	}
	double MonthlyInstallment() {
		return Salary()*0.33;
	}
	// Set & Get Loan Amount
	void SetLoanAmount(double LoanAmount) {
		_LoanAmount = LoanAmount;
	}
	double LoanAmount() {
		return MonthlyInstallment() * 60;;
	}
	void Print() {
		cout << "\t\t Main Loans \n";
		cout << "================================\n";
		cout << " Name                    : " << Name() << endl;
		cout << " Salary                  : " << Salary() << endl;
		cout << " Balance                 : " << Balance() << endl;
		cout << " User Name               : " << UserName() << endl;
		cout << " Pasword                 : " << Pasword() << endl;
		cout << " Loan Amount             : " << LoanAmount() << endl;
		cout << " Monthly Installment     : " << MonthlyInstallment()<< endl;
		cout << "================================\n";
	}
};

