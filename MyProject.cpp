#include <iostream>

using namespace std;

float paral_s(float a, float b, float c)
{
	return 2 * (a*b + a*c + b*c);
}

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "������� ��������� �������������� ���������������:\n";
	while (!(cin >> a) || !(cin >> b) || !(cin >> c))
	{
		cin.clear();
		cin.sync();
		while (cin.get() != '\n');
		cout << "������� �� �����!\n";
	}
	cout << "������� ������ �����������: " << paral_s(a, b, c) << " (��. ��.)" << endl;
	system("pause");
	return 0;
}