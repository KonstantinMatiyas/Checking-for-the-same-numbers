#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "������� ������ �����" << endl;
	cin >> a;
	cout << "������� ������ �����" << endl;
	cin >> b;
	cout << "������� ������ �����" << endl;
	cin >> c;
	
	if (a==b||b==c||a==c)
	{
		if (a == b && a != c) {
			cout << "���� ���������� �����" << endl;
			cout << "��� ������ � ������ �����" << endl;
		}
		if (a != b && b == c) {
			cout << "���� ���������� �����" << endl;
			cout << "��� ������ � ������ �����" << endl;
		}
		if (a == c && a != b) {
			cout << "���� ���������� �����" << endl;
			cout << "��� ������ � ������ �����" << endl;
		}
		if (a == b == c) {
			cout << "���� ���������� �����" << endl;
			cout << "��� ��� ����������" << endl;
		}
	}	
	else
	{
		cout << "��� ���������� �����" << endl;
	}
}