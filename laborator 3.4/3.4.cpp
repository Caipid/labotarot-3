#include<iostream>;
#include<locale>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int day;
	cout << "Введите день недели: ";
	cin >> day;
	switch (day)
	{
	case 1: cout << "Ďîíĺäĺëüíčę";
		break;
	case 2: cout << "Âňîđíčę";
		break;
	case 3: cout << "Ńđĺäŕ";
		break;
	case 4: cout << "×ĺňâĺđă";
		break;
	case 5: cout << "Ďň˙íčöŕ";
		break;
	case 6: cout << "Ńóááîňŕ";
		break;
	case 7: cout << "Âîńęđĺńĺíüĺ";
		break;
	default:
		cout << "Â íĺäĺëĺ ňîëüęî 7 äíĺé";

	}
}
