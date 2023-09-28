#include<iostream>;
#include<locale>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int day;
	cout << "Введите номер дня недели: ";
	cin >> day;
	switch (day)
	{
	case 1: cout << "Понедельник";
		break;
	case 2: cout << "Вторник";
		break;
	case 3: cout << "Среда";
		break;
	case 4: cout << "Четверг";
		break;
	case 5: cout << "Птяница";
		break;
	case 6: cout << "Суббота";
		break;
	case 7: cout << "Воскресенье";
		break;
	default:
		cout << "В неделе только 7 дней";

	}
}
