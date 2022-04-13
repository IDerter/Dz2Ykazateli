#pragma once
#ifndef Ex1_H
#define Ex1_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <random>
using namespace std;
int antimod(int k);
int ran(int b);
int vozr(int* mas, unsigned size);
void ybiv(int* mas, unsigned size);
void vozrast(int* mas, unsigned size);
//void map(int*arr,unsigned size, int (*change)(int));
void inverse(int* mas, unsigned size);
//int mastr(int* mas, unsigned size, int (*ssilk)(int));
void print(int* arr, unsigned size);


//void check(char* str1, char* str2, int(*func)(const char*, const char*))
//void check();

#endif // ! Ex1_H