/*Среднее арифметическое чисел
Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
int middle(int a, int b)
Формат входных данных
Два целых не отрицательных числа
Формат результата
Одно целое число
Примеры
Входные данные
5 7
Результат работы
6
Входные данные
10 20
Результат работы
15
 */

//#include <math.h>
#include <stdio.h>
#include <stdint.h>
//#include <locale.h>

int a, b, s;

int power (int a, int b)
{    
        return (a+b)/2;    
}

int main(void)
{
    scanf ("%d%d", &a, &b);
    s = power(a, b);
    printf ("%d", s);
    return 0;
}