#include <stdio.h>
#include <stdlib.h>

void fill_buff(FILE *fp, char *str);
void erase_buff(FILE *fp, char *str, unsigned int size);
void open_file(FILE *fp);
void open_bin_file(FILE *fp);
double f(double x);