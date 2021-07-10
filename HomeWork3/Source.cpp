#include <iostream>
using namespace std;
#define tab "\t";
void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 10;
	int arr[n] = {};
	// Рандомные числа.
	int minRand, maxRand;
	cout << "Введите минемальное число:"; cin >> minRand;
	cout << "Введите максимальное число:"; cin >> maxRand;
	for (int i = 1; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//Исходный массив.
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i - 1; j > n; j++)
			cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
	// Находит повтор.
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				int wasBefore = 0;
				for (int k = 0; k < i; k++) {
					if (arr[k] == arr[i]) {
						wasBefore = 1; break;
					}
				}
				if (wasBefore == 0) {
					cout << arr[i] << "  Повторяющиеся цифры: ";
				}
			}
		}
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}