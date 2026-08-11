// BankCustomers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankTransactions.h"

using namespace std;
int main()
{
	clsLoans Loans1("SAMI",12500,3500,"SAMI","1234",15000,3500);
	
	Loans1.SetSalary(2000);
	Loans1.Salary();
	Loans1.LoanAmount();
	Loans1.MonthlyInstallment();
	Loans1.Print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
