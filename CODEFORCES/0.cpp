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

    cout << input[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u' || v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O' || v[i] == 'U')
        {
            v.erase((v.begin() + i));
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    return 0;
}