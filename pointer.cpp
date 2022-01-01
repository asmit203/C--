
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // more pointers

    int numbers[5];
    int *p;
    p = numbers;     //assigning the first blocks address to the pointer
    *p = 10;         //attributing value to it
    p++;             //getting the next value of the block of address in the array
    *p = 20;         //again assigning value
    p = &numbers[2]; //another way of fetching the third elements address
    *p = 30;
    p = numbers + 3;
    *p = 40;
    *p++;   // same as *(p++): increment pointer, and dereference unincremented address
    *++p;   // same as *(++p): increment pointer, and dereference incremented address
    ++*p;   // same as ++(*p): dereference pointer, and increment the value it points to
    (*p)++; // dereference pointer, and post-increment the value it points to
    p = numbers;
    *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";

    return 0;
}