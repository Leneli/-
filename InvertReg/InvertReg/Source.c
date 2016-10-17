/*
���������� � ������������� �������, ������� ������ � ������ ������� ������ �����, �� ���������������.

��� ��������� ������, ������ ����� ������ ����������, � ���� ����� ���������, ��� ��� ���� � ���������� ������ �������������� ����� � ������� �� ��������.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char str[] = "Hello, World!";
	int code, i;

	//code = (int)(str) - 32;
	//str = (char)(code);

	for (i = 0; i < sizeof(str); i++) {
		code = (int)(str[i]);

		if ((code >= 65 & code <= 90) || (code >= 97 & code <= 122)) {
			//if [A - Z]
			if ((code >= 65) & (code <= 90)) {
				putchar(code + 32);
			}
			//if [a - z]
			else {
				putchar(code - 32);
			}
		}
		//if other symbols
		else {
			putchar(code);
		}
	}

	printf("\n");

	system("pause");
	return 0;
}