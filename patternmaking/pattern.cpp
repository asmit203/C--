// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
#include <bits/stdc++.h>
using namespace std;
void spacegiv(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
}
int main()
{
    int m;
    cin >> m;
    int n = m;
    int a = 1;
    int b = 1;
    int c = 0;
    // for (int i = 0; i < n+1; i++)
    // {
    //     spacegiv(n-i);
    //     cout<<1<<" ";
    //     for (int j = 0; j < i; j++)
    //     {
    //         if((i+j)%2==0)cout<<" ";
    //         else{cout<<1;}
    //     }

    //     cout<<" "<<1<<endl;
    // }
    for (int i = 0; i < n+1; i++)
    {
        // if (i == 0)
        // {
        //     for (int k = 0; k < (2 * n) ; k++)
        //     {
        //         cout << 1;
        //     }
        // }
        spacegiv(i);

        // for (int j = 0; j < n-(i); j++)
        // {
        // if(i==0){cout<<" ";}
        // cout<<n-i;
        cout << 1;
        // if (i != n - 1)
        {
            spacegiv(2*n-c);
        }

        c += 2;
        if (/*i != 0 and*/ i!=n)
        { /*cout<<n-i;*/
            cout << 1;
        }
        // }
        if (i != n)
        {
            cout << endl;
        }
        
    }

    return 0;
}