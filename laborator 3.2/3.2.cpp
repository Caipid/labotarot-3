#include<iostream>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int c1, c2, c3, max, min;
	cout << "Введите 3 числа: ";
	cin >> c1 >> c2 >> c3;
	if (c1 > c3 && c1 > c2) {
		max = c1;
	}
		else if (c2 > c3) {
			max = c2;
			}
		else {
			max = c3;
			}
	if (c1 < c3 && c1 < c2) {
		min = c1;
	}
		else if (c2 < c3) {
				min = c2;
			}
		else {
			min = c3;
			}
	int v = max - min;
	cout << "Расстояние = " << v;
}

