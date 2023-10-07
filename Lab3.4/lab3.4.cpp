#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if ((y <= sqrt(pow(R, 2) - pow(x, 2)) && y >= pow(x - 1, 2)) || (y <= 0 && y >= sqrt(pow(R, 2) - pow(x, 2)))) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl; 
	}

	cin.get();
	return 0; 
}