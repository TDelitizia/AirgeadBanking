//Tiffiny DeLitizia
//8/1/25
//Airgead Banking Investment Calculator

#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

//Class that handles the logic for the investment inputs and printing reports
class InvestmentCalculator {
private:
	double initialInvestment; //Starting investment amount
	double monthlyDeposit;	  //Amount deposited monthly
	double annualInterest;    //Annual interest rate
	int numYears;			  //Total number of years

public:
	//Contructor to initialize all values
	InvestmentCalculator(double i, double m, double a, int y);

	void printReportWithoutDeposits(); //Report without monthly deposits
	void printReportWithDeposits();    //Report with monthly deposits

};
#endif
