#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <iostream>

int main(void) {
	setlocale(LC_ALL, "Rus");

	int minutes;

	printf("������� ���������� �����:\t");
	scanf_s("%d", &minutes);

	printf("------------------------------\n");
	printf("�������� �����\n");
	printf("%d\n", minutes);
	printf("------------------------------\n");

	system("pause");
	return 0;
}