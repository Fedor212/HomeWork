/*Кратность прежде всего
В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел в диапазоне от 2 до 9.
Формат входных данных
Одно целое число N большее 2 и не превосходящее 10000
Формат результата
Все числа от 2 до 9 в формате: 2 количество чисел кратных 2 3 количество чисел кратных 3 4 количество чисел кратных 4 5 количество чисел кратных 5 6 количество чисел кратных 6 7 количество чисел кратных 7 8 количество чисел кратных 8 9 количество чисел кратных 9
Примеры
Входные данные
99
Результат работы
2  49
3  33
4  24
5  19
6  16 
7  14
8  12
9  11
Входные данные
9
Результат работы
2 4
3 3
4 2
5 1
6 1
7 1
8 1
9 1
*/

#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
//#include <locale.h>

#define SIZE 10
#define HALFSIZE 5

int m[SIZE] = {0};
int n[SIZE] = {0};
int hs[HALFSIZE] = {0};

int a;


int main(void)
{

        scanf ("%d", &a);
    //~ int oft;
    //~ int f = 0;
    for (int i = 2; i < 10; i++)
    {
            printf ("%d %d\n", i, a/i);
    }
    return 0;
}
