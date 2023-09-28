#include<iostream>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int chiclo;
	cout << "\n Введите число: ";
	cin >> chiclo;
	int d1 = chiclo / 1000;
	int d2 = chiclo / 100 % 10;
	if (d1 == d2) {
		cout << "Условие выполнилось - <<истина>>";
	}
	else {
		cout << "Условие не выполнилось - <<ложь>>";

	}
}