/*Квадраты и кубы
Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100.
Формат входных данных
Одно целое число не превосходящее 100
Формат результата
Для каждого из чисел от 1 до введенного числа напечатать квадрат числа и его куб.
Примеры
Входные данные
3
Результат работы
1 1 1
2 4 8
3 9 27
Входные данные
5
Результат работы
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125  */
#include <math.h>
#include <stdio.h>
//#include <math.h>
#include <stdint.h>
//#include <locale.h>

int main(void)
{
    int n;

    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf ("%d %d %d\n", i, i*i, i*i*i);


    }
    return 0;

}