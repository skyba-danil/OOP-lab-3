/*5. Перевантажити операції < (порівняння прямокутників за площею),
–= (зменшення довжин сторін на n),
відсортувати масив екземплярів класу прямокутників за зростанням площ з використанням алгоритму сортування вибором,
зменшити довжини сторін прямокутників у масиві на задане значення, 
перевірити, чи прямокутники у масиві далі будуть впорядковані.*/

#include <iostream>
#include "Priamokutnyk.h"

#define MAX 3

using namespace std;

void PrintPriam(Priamokutnyk);
void sortZrostSqur(Priamokutnyk*);

int main()
{
	setlocale(LC_CTYPE, "ukr");
	Priamokutnyk pr[MAX];
	cin >> pr[0];
	cin >> pr[1];
	cin >> pr[2];
	sortZrostSqur(pr);
	for (int i = 0; i < MAX;i++)
	{
		cout << pr[i] << "Squre = " << pr[i].Squr() << endl;
	}
	pr[0] -= 2;
	pr[1] -= 2;
	pr[2] -= 2;
	for (int i = 0; i < MAX;i++)
	{
		cout << pr[i] << "Squre = " << pr[i].Squr() << endl;
	}
}

void sortZrostSqur(Priamokutnyk* pr)
{
	for (int i = 0; i < MAX - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < MAX; ++j)
		{
			if (pr[j] < pr[min])
				min = j;
		}
		swap(pr[i], pr[min]);
	}
}

void PrintPriam(Priamokutnyk obj)
{
	cout << "Висота: " << obj.GetVysot() << " Ширина: " << obj.GetShyr();
	cout << " Периметр: " << obj.Perimetr() << " Площа: " << obj.Squr() << endl;
}