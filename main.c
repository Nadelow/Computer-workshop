// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <stdio.h>
#include <locale.h>

#include "functions.h"

int main()
{
   setlocale(LC_ALL, "Russian");

   int x = 0;

   printf("������� �����: ");
   scanf_s("%d", &x);

   //printf("������� FI(%d) = %d", x, FI(x));

   //printf("������� Fact(%d) = %llu\n", x, Fact(x));

   //printf("������� DFact(%d) = %llu\n", x, DFact(x));

   //printf("������ ������ �2 ��� ������� ��������� %d ����� %llu\n", x, Euler_2(x));

   //printf("%d-� ���� ���� ��������� ����� %llu", x, Fib(x));

   return 0;
}

/*
   �������� �������:

   ������� FI(x) - ������� ������. ����� � ���������!

   ������������ ���������� ����� ������� ������� � x.

   ����� "X" � "Y" ������� �������, ���� ���(X, Y) = 1 (��� - ���������� ����� ��������).

*/

/*
* � / �:
* ��� ��� ���������.
* ����� ����� ���� ������ ��������� ���� ���������,
* ������� �� ��������� 4 ��������.
*/

/*
* � / �:
* ������� �������� ����� 13195 - ��� 5, 7, 13 � 29.
* ����� ����� ������� �������� ����� 600851475143, ���������� ������� ������?
*/