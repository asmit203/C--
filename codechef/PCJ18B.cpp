#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    long long result[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        long long sum = 0;
        int c = n;
        while (c > 0)
        {
            sum = sum + (c * c);
            c = c - 2;
        }
        result[i] = sum;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%lld \n",result[i]);
    }
    
    return 0;
}