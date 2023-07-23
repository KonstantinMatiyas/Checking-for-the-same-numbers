#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Введите третье число" << endl;
	cin >> c;
	
	if (a==b||b==c||a==c)
	{
		if (a == b && a != c) {
			cout << "Есть одинаковые числа" << endl;
			cout << "Это первое и второе число" << endl;
		}
		if (a != b && b == c) {
			cout << "Есть одинаковые числа" << endl;
			cout << "Это второе и третье число" << endl;
		}
		if (a == c && a != b) {
			cout << "Есть одинаковые числа" << endl;
			cout << "Это превое и третье число" << endl;
		}
		if (a == b == c) {
			cout << "Есть одинаковые числа" << endl;
			cout << "Они все одинаковые" << endl;
		}
	}	
	else
	{
		cout << "Нет одинаковых чисел" << endl;
	}
}