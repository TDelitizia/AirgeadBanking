//Tiffiny DeLitizia
//8/1/25
//Airgead Banking Investment Calculator

#include <iostream>
#include "InvestmentCalculator.h" // Includes the created class
using namespace std;

int main() {
	//Declare variables that the user will input
	double initialInvestment;
	double monthlyDeposit;
	double annualInterest;
	int numYears;
	char runAgain = 'Y'; //Variable that will control the loop built

	//This is the loop that run as the user tries different values
	while (runAgain == 'Y' || runAgain == 'y') {
		cout << "**********************************" << endl;
		cout << "******** Airgead Banking *********" << endl;
		cout << "**********************************" << endl;

		//Collect all user inputs
		cout << "Enter Initial Investment Amount: $";
		cin >> initialInvestment;

		cout << "Enter Monthly Deposit: $";
		cin >> monthlyDeposit;

		cout << "Enter Annual Interest Rate (APY in %): ";
		cin >> annualInterest;

		cout << "Enter Number of Years: ";
		cin >> numYears;

		cout << endl;
		cout << "Press Enter to continue";
		cin.ignore(); //This will clear newline left from previous input
		cin.get(); //Allows the user to press enter

		//Object with user values
		InvestmentCalculator calculator(initialInvestment, monthlyDeposit, annualInterest, numYears);

		//Generate and display reports
		calculator.printReportWithoutDeposits();
		calculator.printReportWithDeposits();

		//Display question that will allow user to choose if they want to run the program again
		cout << "Would you like to try again with different values? (Y/N): ";
		cin >> runAgain;
		cout << endl;

	}
		//Display exit message
	cout << "Thank you for using Airgead Banking Investment Calculator. Have a nice day!" << endl;

	return 0;

}