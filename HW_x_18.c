/*
Above, less, equal
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.
Формат входных данных
Два целых числа
Формат результата
Одно единственное слово: Above, Less, Equal
Примеры
Входные данные
24 24
Результат работы
Equal
Входные данные
100 0
Результат работы
Above
*/

#include <stdio.h>
#include <math.h>
//#include <locale.h>

int main(void)
{
	int a, b;
	
	scanf ("%d%d", &a, &b);
	
	if(a>b)
	{
		printf ("Above");	
	}
	
	if(a<b)
	{
		printf ("Less");	
	}
	if(a==b)
	{
		printf ("Equal");	
	}
	
	return 0;
}

