#include<iostream>;
#include<locale>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int day;
	cout << "������� ����� ��� ������: ";
	cin >> day;
	switch (day)
	{
	case 1: cout << "�����������";
		break;
	case 2: cout << "�������";
		break;
	case 3: cout << "�����";
		break;
	case 4: cout << "�������";
		break;
	case 5: cout << "�������";
		break;
	case 6: cout << "�������";
		break;
	case 7: cout << "�����������";
		break;
	default:
		cout << "� ������ ������ 7 ����";

	}
}