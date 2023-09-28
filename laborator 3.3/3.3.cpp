#include<iostream>;
#include<locale>;
#include<cmath>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a = 1.2, b = 4.9,y;
	int x;
	cout << "x = ";
	cin >> x;
	if (2 < x < 5) {
		y = atan(b / (pow(x, 2) + 1));
	}
	if (x >= 5) {
		y = log(abs(x + pow(x * a, 0.5)));
	}
	if (x <= 2) {
		y = (a + x) / (1 + sqrt(x));
	}
	cout << "y = " << y;

}