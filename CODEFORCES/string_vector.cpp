// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    scanf("%d", &w);
    vector<string> v;
    for (int i = 0; i < w; i++)
    {
        string input;
        cin >> input;
        v.push_back(input);
    }
    // cout << v[0].length() << " \n" ;
    // cout << v[0][0] << " \n" ;
    //SO BASICALLY VECTOR CAN BE TREATED LIKE IDIOTIC MATRIX
    for (int i = 0; i < w; i++)
    {
        if (v[i].length()<=10 )
        {
            cout << v[i]<<"\n";
        }
        else{
            int x = v[i].length();
            cout<<v[i][0]<<(x-2)<<v[i][(x-1)]<<"\n";
        }
    }
    

        return 0;
}