#include <iostream>
using namespace std;

int main() {

	float purchase = 52;
	float stateTax = .04, countyTax = .02;

	float totalTax = purchase * (stateTax + countyTax);

	cout << "the total tax is: " << totalTax << endl;

	return 0;

}
