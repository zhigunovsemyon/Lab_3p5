//Задание 3.*5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b; //Добавляем нужные переменные
	printf("a = "); scanf("%d", &a); //Вводим значение переменной

	//Проводим расчёты
	b = a * a;	//a^2
	a = b * a;	//a^3
	b = b * a;	//a^5
	b = b * b;	//a^10

	//Вывод полученных значений
	printf("\na в степени 3 равно %d\n", a);
	printf("a в степени 10 равно %d\n", b);

	return 0;
}
