#include <iostream>
#include <cmath>
using namespace std;


double TriArea(double a, double b, double c) {

	double s;
	s = (a + b + c) / 2;

	return sqrt(s * (s - a) * (s - b) * (s - c));

}
int main() {

	double a, b, c;

	cout << "Enter length of three sides of a triangle: " << endl;
	cin >> a >> b >> c;

	cout << "The area is equal to " << TriArea(a, b, c);
	cout << endl;

	return 0;
}
