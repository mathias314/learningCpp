#include <iostream>
using namespace std;

int main() {

	float mealCharge = 44.50, tax = .0675, tipPercentage = .15;

	float taxAmount = mealCharge * tax;
	
	float mealChargeWithTax = mealCharge + taxAmount;

	float tipAmount = mealChargeWithTax * tipPercentage;

	float totalCharge = tipAmount + mealChargeWithTax;

	cout << "The meal cost is: " << mealCharge << endl;
	cout << "The tax amount is: " << taxAmount << endl;
	cout << "The tip amount is: " << tipAmount << endl;
	cout << "The total bill is: " << totalCharge << endl;

}

