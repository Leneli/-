/*
 ���������� �����

 ���������� � ������������� �������, ������� ������ ������� true, ���� ����� ����������, � false ���� ���. 
 ���������� �������� �������� ������ ���������� ���������� ������ 10.

 ������� ����������� ������� ��, ������� � ���������� ���� �������������� ���� "����� ��������� ����" ����������� � �������. 
 
 ��������:
 7 => 7^2 = 49, 49 => 4^2 + 9^2 = 16 + 81 = 97, 97 => 9^2 + 7^2 = 81 + 49 = 130, 130 => 1^2 + 3^2 + 0^2 = 10, 10 => 1^2 + 0^2 = 1.
 �����: �������� ����� 7 - ����������.

 ����������: ��-�� ��������� ���� � ��������� ������������ ���� �������, ���� ������������� ������ ����� �� 1 �� 99.

*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int Separator(int*);

int main(void) {
	setlocale(LC_ALL, "Rus");

	int N; //�����, ������� ���� ��������� �� "������������". ����������� �������������
	int Sum;//����� ��������� ����
	int i; //������������ ���������� ��������
	int container; //��������� ����������, ���� ���������� ���������� �� ����� N �����

	i = 10;
	Sum = 0;

	//������������ ������ ������ ����� N, ������� ����� ����� ����������� �� "������������"
	//���� ������������ ����� ����� ��� ��������� [1; 99], �� ��������� ��� ������ ����� �����
	printf("������� ����� ����� ����� �� 1 �� 99: ");
	scanf_s("%d", &N);
	if ((N < 1) || (N > 99)) {
		while ((N < 1) || (N > 99)) {
			printf("�� ����� ����������� ��������. ����������, ������� ����� ����� �� ��������� �� 1 �� 99: ");
			scanf_s("%d", &N);
		}
	}

	do
	{
		while (N > 0)
		{
			container = Separator(&N);
			Sum += container * container;
		}

		N = Sum;
		Sum = 0;
		i--;

	} while ((N != 1) && (i != 0));

	if (N == 1) {
		printf("�����������! �� ����� ���������� �����! :)\n");
	}
	else
	{
		printf("���, ��� �� ���������� ����� :(\n");
	}

	system("pause");
	return 0;
}


//������� ��������� ����� �� �����, ��������������� "��������" �� ����� ����� � �����
int Separator(int *N)
{
	int X;
	X = *N % 10;
	*N = *N / 10;
	return X;
}