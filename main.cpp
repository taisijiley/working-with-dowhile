#include <iostream>
using namespace std;

// ��������� ����������� � ��� ��������� ������� �������� ����� � ����� ��������� 

int main()
{
	int rangeBegin, rangeEnd, sum = 0;
	cout << "������� �������� ��� ��������� ����� =  "; cin >> rangeBegin;
	cout << "������� �������� ��� �������� ����� =  "; cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0) 
		{
			sum += rangeBegin;
		}
		rangeBegin++;
	} while (rangeBegin <= rangeEnd);
	cout << "����� ���� ����� �������� ����� � �������� ��������� = " << sum << endl;
}