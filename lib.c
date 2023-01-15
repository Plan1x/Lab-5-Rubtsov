#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

void erase_buff(FILE *fp, char *str, unsigned int size)
{
    for (int i = 0; i < size; i++)
        str[i] = '\0';
}

void open_file(FILE *fp)
{
    remove("out.txt");
    fp = fopen("out.txt", "w");
}

void open_bin_file(FILE *fp)
{
    remove("out.bin");
    fp = fopen("out.bin", "wb");
}

double f(double x)
{
    return pow(x + 125, 3) -45 - 18;
}