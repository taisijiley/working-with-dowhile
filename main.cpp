#include <iostream>
using namespace std;

// программа высчитывает в опр диапозоне сколько нечетных чисел и затем суммирует 

int main()
{
	int rangeBegin, rangeEnd, sum = 0;
	cout << "¬ведите значение дл€ начальной точки =  "; cin >> rangeBegin;
	cout << "¬ведите значение дл€ конечной точки =  "; cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0) 
		{
			sum += rangeBegin;
		}
		rangeBegin++;
	} while (rangeBegin <= rangeEnd);
	cout << "—умма всех целых нечетных чисел в указаном диапозоне = " << sum << endl;
}