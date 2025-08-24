//Tiffiny DeLitizia
//8/1/25
//Airgead Banking Investment Calculator

#include <iostream>
#include <iomanip> //For the setprecision code below
#include "InvestmentCalculator.h"
using namespace std;

//Contructor setting intial values
InvestmentCalculator::InvestmentCalculator(double i, double m, double a, int y) {
	initialInvestment = i;
	monthlyDeposit = m;
	annualInterest = a;
	numYears = y;
}

//Calculates and displayes report without monthly deposits
void InvestmentCalculator::printReportWithoutDeposits() {
	double balance = initialInvestment;

	//Print header
	cout << "   Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "==============================================================" << endl;
	cout << "  Year      Year End Balance      Year End Earned Interest" << endl;
	cout << "--------------------------------------------------------------" << endl;

	//Loop for each year
	for (int year = 1; year <= numYears; ++year) {
		double yearlyInterest = 0.0;

		//Loop for each month
		for (int month = 1; month <= 12; ++month) {
			double monthlyInterest = balance * (annualInterest / 100.00 / 12.0);
			yearlyInterest += monthlyInterest;
			balance += monthlyInterest;
		}

		//Print results
		cout << fixed << setprecision(2);
		cout << "   ";
		cout << year;

		if (year < 10) {
			cout << "         $";
		}
		else {
			cout << "         $";
		}

		cout << balance;

		if (balance < 10000) {
			cout << "               $";
		}
		else {
			cout << "               $";
		}

		cout << yearlyInterest << endl;
		cout << endl;
	}

	cout << endl;
}

//Calculates and displays report with monthly deposits
void InvestmentCalculator::printReportWithDeposits() {
	double balance = initialInvestment;

	//Print header
	cout << "  Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "===========================================================" << endl;
	cout << "  Year      Year End Balance      Year End Earned Interest" << endl;
	cout << "-----------------------------------------------------------" << endl;

	//Loop for each year
	for (int year = 1; year <= numYears; ++year) {
		double yearlyInterest = 0.0;

		//Loop for each month
		for (int month = 1; month <= 12; ++month) {
			balance += monthlyDeposit;
			double monthlyInterest = balance * (annualInterest / 100.0 / 12.0);
			yearlyInterest += monthlyInterest;
			balance += monthlyInterest;
		}
		//Print results
		cout << fixed << setprecision(2);

		cout << "   ";
		cout << year;

		if (year < 10) {
			cout << "         $";
		}
		else {
			cout << "         $";
		}

		cout << balance;

		if (balance < 10000) {
			cout << "               $";
		}
		else {
			cout << "               $";
		}

		cout << yearlyInterest << endl;
		cout << endl;
	}

	
}

