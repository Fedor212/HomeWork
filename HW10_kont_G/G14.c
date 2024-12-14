/*Hello name
В файле input.txt в одной строке фамилию, имя и отчество. 
Сформировать файл приветствие output.txt, где останутся имя и фамилия
Формат входных данных
Строка состоящая из английских букв и пробелов не более 100 символов. Формат: Фамилия Имя Отчество
Формат результата
Строка состоящая из английских букв и пробелов
Примеры
Входные данные в файле input.txt
Pupkin Vasiliy Ivanovich
Результат работы в файле output.txt
Hello, Vasiliy Pupkin! */
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define SIZE 1000
#include <stdio.h>

int main(void)
{

    // файл чтения
    char *filename1 = "input.txt";
    char *filename2 = "output.txt";
    char origstring[SIZE]; //строка из первого файла
    //char lastsymb;

    long n=0;

    FILE *fp = fopen(filename1, "r");
    FILE *fp2 = fopen(filename2, "w");

    while ((fscanf(fp, "%[^\n]", origstring)) != 1) {}//считываем в массив, пока не дойдем до переноса строки
    while (origstring[n]!=0)//пока символ строки не равен 0, считаем
    {
        n++; //количество символов в строке
    }
    printf("origstring is: %s\n", origstring);
    printf("Mass lenth is: %ld\n", n);
    printf("Last symbol is: %c\n", origstring[n-1]);
    fclose(fp);
    int slash_place;
    int dot_place=0;
    //~ int max=0;
    //~ char temp[n];

    for (int i = n-1; i >= 0; i--)  //slash_place search
    {
        //printf("i is: %d\n", i);
        if (origstring[i]=='/')
        {
            slash_place = i;
            break;
        }
    }
    printf("slash_place is: %d\n", slash_place);


    for (int i = n-1; i >= slash_place; i--)  //dot_place search
    {
        //printf("i is: %d\n", i);
        if (origstring[i]=='.')
        {
            dot_place = i;
            break;
        }
    }
    printf("dot_place is: %d\n", dot_place);

    if (dot_place != 0)
    {
        origstring[dot_place+1] = 'h';
        origstring[dot_place+2] = 't';
        origstring[dot_place+3] = 'm';
        origstring[dot_place+4] = 'l';
        origstring[dot_place+5] = 0;
    }
    
    if (dot_place == 0)
    {
		origstring[n] = '.';
        origstring[n+1] = 'h';
        origstring[n+2] = 't';
        origstring[n+3] = 'm';
        origstring[n+4] = 'l';
        origstring[n+5] = 0;
    }




    fprintf(fp2, "%s", origstring);
    fclose(fp2);
    return 0;
}
