#include <iostream>
using namespace std;

int main() {

	float item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;

	float subtotal = item1 + item2 + item3 + item4 + item5;

	float salesTax = subtotal * .06;

	float totalPrice = subtotal + salesTax;

	cout << "The subtotal is: " << subtotal << endl;
	cout << "The tax is: " << salesTax << endl;
	cout << "The total price is: " << totalPrice << endl;

	return 0;
}
