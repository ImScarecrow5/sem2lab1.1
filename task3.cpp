#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
	int n, j = 1;
	cin >> n;
	while (j <= n)
	{ 
		if (n % j == 0) cout << j << endl;
		++j;
	}

}


/*
7 ������: Main ������ ���������� ��������
7 ������: ���������� ����� ��� Main
9 ������: ������������� "Int" �� ��������� 
10 ������: ������������� "Cout" �� ���������
10 ������: ����������� �������� ">>", ��������������� ���� ���������
10 ������: "cout" �� �������� �����������
11 ����������� �������� ">>", ��������������� ���� ���������
11 ������: ������������� "Cin" �� ���������
12 ������: ������������� "While" �� ���������
12 ������: ��������� ������� ������
13 ������: ������������� "i" �� ���������
14 ������: ��������� ������ ���� ���������� ��� ��������� ������������� ���������
14 ������: ��������� ���������
14 ������: ��������� ����� � ������� ";"
16 ������: ��� ���������� �� �������� ����� �������� ��� ������������ ����
16 ������: ��������� ����� � ������� ";"
17 ������: ��������� ����������






*/