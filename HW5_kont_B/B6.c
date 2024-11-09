/*Две одинаковые цифры рядом
Ввести целое число и определить, верно ли, что в его записи есть   две одинаковые цифры, стоящие рядом.
Формат входных данных
Одно целое число
Формат результата
Единственное слов: YES или NO
Примеры
Входные данные
1232
Результат работы
NO
Входные данные
1224
Результат работы
YES
  */
#include <math.h>
#include <stdio.h>
//#include <math.h>
#include <stdint.h>
//#include <locale.h>

int main(void)
{
    int a, sum=0;

    scanf ("%d", &a);
    for (; ((a%10)|(a/10)) != 0;)
    {
        sum += (a%10 == (a%100)/10) ? 1 : 0;
        a /= 10;

    }

    sum ? printf ("YES") : printf ("NO");

    return 0;

}