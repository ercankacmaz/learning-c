#pragma once

#define isleap(y)                ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))

#define randomize()              srand((unsigned) time(NULL))


void set_array_random(int* p, int size);
void print_array(const int* p, int size);