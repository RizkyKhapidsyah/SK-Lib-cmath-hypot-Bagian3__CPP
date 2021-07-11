
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float x = 2.5362, y = 3.8726, res;

	res = hypotf(x, y);

	cout << "Nilai x = " << x << endl;
	cout << "Nilai y = " << y << endl;
	cout << "hypotf(x, y) = " << res << endl;

	_getch();
	return 0;
}
