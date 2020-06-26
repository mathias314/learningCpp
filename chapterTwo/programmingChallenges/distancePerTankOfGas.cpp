#include <iostream>
using namespace std;

int main() {

	int tankSize = 20;
	float townMPG = 21.5, highwayMPG = 26.8;

	float distanceInTown = tankSize * townMPG;
	float distanceOnHighway = tankSize * highwayMPG;

	cout << "Distance in town: " << distanceInTown << endl;
	cout << "Distance on highway: " << distanceOnHighway << endl;

	return 0;
}	
