﻿// lb2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Введите номер необходимого задания:\n 1 - Задание 1\n 2 - Задание 2\n");
	float x, y;
	switch (_getch())
	{
	 case '1':
		printf("Задание 1\nEnter x:\n");
		scanf_s("%f", &x);
		printf("Enter y:\n");
		scanf_s("%f", &y);
		isInArea(x, y) ? printf("Входит в область.\n") : printf("Не входит в область.\n");
		break;
	 case '2':
		printf("Задание 2\nEnter x:\n");
		scanf_s("%f", &x);
		printf("%f", f(x));
		break;
	 default:
		printf("Неверно введенные данные(");
		break;
	}
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
