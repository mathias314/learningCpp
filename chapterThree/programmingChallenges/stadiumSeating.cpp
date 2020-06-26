#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float classA = 15, classB = 12, classC = 9;
	short classASales, classBSales, classCSales;
	float income;

	cout << "How many class A tickets? ";
	cin >> classASales;
	cout << "How many class B tickets? ";
	cin >> classBSales;
	cout << "How many class C tickets? ";
	cin >> classCSales;

	income = (classA * classASales) + (classB * classBSales) + (classC * classCSales);

	cout << setprecision(2) << fixed;
	cout << "The income generated is: $" << income << endl;

}
