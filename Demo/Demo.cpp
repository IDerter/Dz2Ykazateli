
#include "Ex1.h"
using namespace std;
int summas(int* mas, unsigned size)
{
    int sum = 0;
    for (int i = 1; i < size; i++)
    {
        sum += mas[i];
    }
    return sum;
}

void (*actionsmas(int* mas, unsigned size))(int*, unsigned)
{
    int sum = summas(mas, size);
    if (sum == mas[0])
    {
        return inverse; 
        //инвертировать массив(вызов этой функции)
    }
    else if (sum > mas[0])
    {
        return vozrast; //по возврастанию
    }
    else
    {
        return ybiv; //по убыванию
    }
}

int main()
{
   /* 
   int a[10] = { 45,2,6,3,4,1,5,7,8,9 };
   print(a, 10);
    map(a, 10, antimod);
    print(a, 10);
   // map(a, 10, ran);
    print(a, 10);
    inverse(a, 10);
    print(a, 10);
    vozrast(a, 10);
    print(a, 10);
    */
    int a[10] = { 45,2,6,3,4,1,5,7,8,9 };
    print(a, 10);
    void (*ykazfunc)(int* a, unsigned size);
    ykazfunc = actionsmas(a,10);
    ykazfunc(a, 10);
    print(a, 10);
}

