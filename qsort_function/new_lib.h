#pragma once
#include <stdio.h>

#define isleap(y)                ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))

#define randomize()              srand((unsigned) time(NULL))
#define asize(x)                 (sizeof(x) / sizeof(x[0]))


void set_array_random(int *p, int size);
void print_array(const int *p, int size);
void sgets(char *p);
void bubble_sort(int* p, int length);
int* get_min_adress(int* p, int length);
int* get_max_adress(int* p, int length);
void swap(int* a, int* b);
void selection_sort(int* p, int length);
void gswap(void* p1, void* p2, size_t size);
