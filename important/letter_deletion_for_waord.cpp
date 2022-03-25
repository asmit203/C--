#include <bits/stdc++.h>
using namespace std;

int main()
{
    char hello[5] = {'h', 'e', 'l', 'l', 'o'};
    string s;
    cin >> s;
    int t = 0, length = s.length();
    if (s.length() == 5)
    {
        bool flag = true;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] != hello[i])
            {
                flag = false;
                break;
            }
            else flag = true;
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }
    else if(s.length()<5)
    {
        cout<<"NO";
    }
    else
    {
        for (int i = 0; i < s.length() and length >=5; i++)
        {
            if (s[i]!=hello[t])
            {
                length--;
            }
            else{
                t++;
            }
            
        }
        if(t==5)cout<<"YES";
        else cout<<"NO";
        
    }
    
    
    // cout<<s.length();

    return 0;
}