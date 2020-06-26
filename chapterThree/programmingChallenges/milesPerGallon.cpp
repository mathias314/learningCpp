#include <iostream>
using namespace std;

int main() {

	float tankSize, milesOnFullTank, milesPerGallon;

	cout << "Enter number of gallons car can hold: ";
	cin >> tankSize;

	cout << "Enter how far the car can travel on a full tank: ";
	cin >> milesOnFullTank;

	milesPerGallon = milesOnFullTank / tankSize;

	cout << "MPG = " << milesPerGallon << endl;

}
