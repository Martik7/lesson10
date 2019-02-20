#include <iostream>
#include <ctime>
#include <clocale>
#include <cstdlib>
#include <iomanip>
#include <Windows.h> 
using namespace std;

void FillArray(int *a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 100;
	}
}

void printArray(int *a, int n)
{
	for (int* p = a; p < a + n; p++)
	{
		cout << *p << " " << endl;
	}
	cout << endl;
}

void task2()
{
	int a[10], sum = 0, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -25 + rand() % 35;
		sum += a[i];
		p = &sum;
	}
	printArray(a, 10);
	cout << *p << endl;
}

void task3()
{
	int a[10], proizv = 1, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -44 + rand() % 76;
		proizv *= a[i];
		p = &proizv;
	}
	printArray(a, 10);
	cout << *p << endl;
}

void task4()
{
	int a[10], sum = 0, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -44 + rand() % 76;
		sum = (sum + a[i]) / 10;
		p = &sum;
	}
	printArray(a, 10);
	cout << *p << endl;
}

void task5()
{
	int a[10], sum, *p, neg = 0, pos = 0, *k;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -40 + rand() % 50;
		if (a[i] < 0)
			neg = neg + 1;
		else if (a[i] > 0)
				pos = pos + 1;
		p = &neg;
		k = &pos;
	}
	printArray(a, 10);
	cout << *p << endl;
	cout << *k << endl;
}

void task6()
{
	int a[10], sum = 0, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -25 + rand() % 35;
		if (i % 2 == 0)
		{
			sum += a[i];
		}
		p = &sum;
	}
	printArray(a, 10);
	cout << *p << endl;
}

void task7()
{
	int a[10], sum = 0, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -25 + rand() % 35;
		if (a[i] % 2 != 0)
		{
			sum += a[i];
		}
		p = &sum;
	}
	printArray(a, 10);
	cout << *p << endl;
}

void task8()
{
	int a[10], sum = 0, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -25 + rand() % 35;
		if (a[i] % 3)
		{
			sum += a[i];
		}
		p = &sum;
	}
	printArray(a, 10);
	cout << *p << endl;
}

void task9()
{
	int a[10], sum = 0, *p;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -25 + rand() % 35;
		if (a[i] % 7)
		{
			sum += a[i];
		}
		p = &sum;
	}
	printArray(a, 10);
	cout << *p << endl;
}

int task10()
{
	int size = 20;
	int *array = new int[size];
	cout << "12nt ss:" << endl;
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 12 + 1;
		cout << array[i] << " ";
		array[i] = array[i] >= 1 && array[i] <= 3 ? 2 :
			(array[i] >= 4 && array[i] <= 6 ? 3 :
			(array[i] >= 7 && array[i] <= 9 ? 4 : 5));
	}
	cout << endl << "5nt ss: " << endl;
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
	cout << "5: " << 100.0 * (float)count(array, array + size, 5) / (float)size << endl
		<< "4: " << 100.0 * (float)count(array, array + size, 4) / (float)size << endl
		<< "3: " << 100.0 * (float)count(array, array + size, 3) / (float)size << endl
		<< "2: " << 100.0 * (float)count(array, array + size, 2) / (float)size << endl;
	delete[] array;
	return 0;
}

int task11()
{
	int size;
	cout << "Size: ";
	cin >> size;
	int *array = new int[size];
	cout << "12nt ss:" << endl;
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 12 + 1;
		cout << array[i] << " ";
		array[i] = array[i] >= 1 && array[i] <= 3 ? 2 :
			(array[i] >= 4 && array[i] <= 6 ? 3 :
			(array[i] >= 7 && array[i] <= 9 ? 4 : 5));
	}
	cout << endl << "5nt ss: " << endl;
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
	cout << "5: " << 100.0 * (float)count(array, array + size, 5) / (float)size << endl
		<< "4: " << 100.0 * (float)count(array, array + size, 4) / (float)size << endl
		<< "3: " << 100.0 * (float)count(array, array + size, 3) / (float)size << endl
		<< "2: " << 100.0 * (float)count(array, array + size, 2) / (float)size << endl;
	delete[] array;
	return 0;
}

//задача в классе
void sortOddPosPositive(int *a, int n) {
	int k = 0;
	int *bp = 0;
	int *tmp = 0;
	for (int* p = a; p < a + n; p++) {
		if ((p - a) % 2 && *p > 0) {
			k++;
			if (k == 1) {
				tmp = p;
				cout << "pos=" << (tmp - a) << endl;
			}
		}
	}
	cout << "amount=" << k << endl;
	if (k == 0) { return; }

	for (int i = 0; i < k; i++)
	{
		bp = tmp;
		for (int* p = a; p < a + n; p++) {
			if ((p - a) % 2 && *p > 0) {
				if (*bp >= *p) {
					swap(*bp, *p);
				}
				bp = p;
			}
		}
	}
}

int minArray(int a[5], int n)
{
	int min = 1;
	for (int index = 0; index < n; index++)
	{
		if (a[index] < a[min])
			min = index;
	}
	return min;
}

int* proverca(int* A, int* B, int size1, int size2) {
	int* ptr;
	int i = 0;
	for (i = 0; i < size1; i++) {
		int j = i, k = 0;
		while (j < size1 && k < size2 && B[k] == A[j]) {
			j++;
			k++;
		}if (k == size2)
			return ptr = A + i;

	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	//1
	/*
	Дан массив чисел, 
	необходимо ввести в него и вывести из него числа с помощью указателей.
	*/
	/*int a[5];
	FillArray(a, 5);
	printArray(a, 5);*/

	//2
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом в диапазоне от -25 до 35. 
	Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива.
	*/
	/*task2();*/

	//3
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом в диапазоне от -44 до 76. 
	Пользуясь указателем на массив целых чисел, посчитать произведение элементов массива.
	*/
	/*task3();*/

	//4
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом в диапазоне от -15 до 105. 
	Пользуясь указателем на массив целых чисел, 
	посчитать среднее арифметическое элементов массива.
	*/
	/*task4();*/

	//5
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом в диапазоне от -45 до 45. 
	Пользуясь указателем(и) на массив целых чисел, 
	посчитать процент положительных и отрицательных элементов массива.
	*/
	/*task5();*/

	//6
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом. 
	Пользуясь указателем на массив целых чисел,
	посчитать сумму элементов массива с четными номерами.
	*/
	/*task6();*/

	//7
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом. 
	Пользуясь указателем на массив целых чисел, 
	посчитать сумму элементов массива с нечетными номерами.
	*/
	/*task7();*/

	//8
	/*
	Создать массив из 10 целых чисел.
	Заполнить массив случайным образом. 
	Пользуясь указателем на массив целых чисел, 
	посчитать сумму элементов массива с номерами кратными трем.
	*/
	/*task8();*/

	//9
	/*
	Создать массив из 10 целых чисел. 
	Заполнить массив случайным образом. 
	Пользуясь указателем на массив целых чисел, 
	посчитать сумму элементов массива с номерами кратными 7.
	*/
	/*task9();*/

	//10
	/*
	Создать массив из 20 целых чисел.
	Заполнить массив случайным образом в диапазоне от 1 до 12. 
	Каждое число это оценка по 12 бальной системе.
	Пользуясь указателем на массив целых чисел, посчитать процент двоек, 
	троек, четверок и пятерок. Двойка от 1 до 3 включительно, тройка от 4 до 6, 
	четверка от 7 до 9, пятерка от 10 до 12.
	*/
	/*task10();*/

	//11
	/*
	Создать массив из N целых чисел, N  вводит пользователь. 
	Заполнить массив случайным образом в диапазоне от 1 до 12.
	Каждое число это оценка по 12 бальной системе. 
	Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок. 
	Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12.
	*/
	/*task11();*/

	/*int a[16] = { 1, 2, -2, 4, -4, 1, 2, 3, 2, -2, 1, -3, -4, -2, -4, 1 };
	printArray(a, 16);
	sortOddPosPositive(a, 16);
	printArray(a, 16);*/
	
	//38
	/*
	Написать программу,
	которая осуществляет поиск введенного пользователем числа, 
	используя ДВА указателя на массив целых чисел. 
	Первый указатель двигается с начала массива, второй – с конца.
	*/
	/*int a[10], *p1 = a, *p2 = a+10-1;
	int key;
	FillArray(a, 10);
	printArray(a, 10);
	cin >> key;
	for (; p1 <= p2; p1++, p2--)
	{
		if (*p1 == key)
		{
			cout << p1 - a << endl;
			break;
		}
		if (*p2 == key)
		{
			cout << p2 - a << endl;
			break;
		}
	}*/

	//28
	/*
	Создать 2 целые переменные и определить «расстояние» между ними в памяти.
	*/
	/*int a[10];
	FillArray(a, 10);
	int *p1 = a + 2;
	int *p2 = a + 6;
	cout << (char*)(p2) - (char*)(p1) << endl;*/
	
	//29
	/*
	Написать функцию, 
	которая принимает указатель на массив 
	и количество элементов и возвращает минимальный элемент массива 
	(значение и номер элемента). 
	*/
	/*int a[5];
	FillArray(a, 5);
	printArray(a, 5);
	minArray(a, 5);*/
	
	//36
	/*
	Написать программу, 
	которая содержит функцию, 
	принимающую в качестве аргумента, 
	указатели на два массива (А и В) и размеры массивов.
	Функция проверяет, 
	является ли массив В подмножеством массива А 
	и возвращает указатель на начало найденного фрагмента, 
	если элемента нет, возвращает 0.
	*/
	/*int size1, size2;
	cout << "Введите размер массива A: ";
	cin >> size1;
	int* A = new int[size1 + 1];
	cout << "Заполните массив: ";
	for (int i = 0; i < size1; i++)
		cin >> A[i];
	cout << "Введите размер массива B: ";
	cin >> size2;
	int* B = new int[size2];
	cout << "Заполните массив: ";
	for (int i = 0; i < size2; i++)
		cin >> B[i];
	cout << "Элемент должен стоять на позиции " << *proverca(A, B, size1, size2) << endl;
	delete[]A;
	delete[]B;*/

	system("pause");
	return 0;
}