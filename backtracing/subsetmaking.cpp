// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> sub;
int search(int x)
{
    if (x == n)
    {
        return x;
    }
    search(x++);
    sub.push_back(x);
    search(x++);
    sub.pop_back();
}
int main()
{
    n = 5;
    cout << search(3);

    return 0;
}