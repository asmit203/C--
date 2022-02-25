// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;

    string input;
    cin >> input;
    // v.push_back(input);
    for (int i = 0; i < input.length(); i++)
    {
        v.push_back(input[i]);
    }
    int leng = v.size();
    int r = 0;
    // cout << input[0];
    for (int i = 0; i < leng; i++)
    {
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u' || v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O' || v[i] == 'U')
        {
            v.erase((v.begin() + i));
            // cout<<"1\n";
            r++;
            // cout<<v[i]<<"\n";
        }

        // cout<<"\\"<<v[i]<<"\n";
    }
    leng = leng - r;
    cout<<leng<<"\n";
    for (int i = 0; i < leng; i++)
    {

        v.insert((v.begin() + (2*i)), '.');
        // printf("1\n");
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << char(tolower((v[i])));
    }

    return 0;
}