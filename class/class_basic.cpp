// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
#include <bits/stdc++.h>
using namespace std;

class asmitclass
{
private:
    string name;
    void hello()
    {
        cout << "hi"
             << "\n";
    }

public: // main can use this only...
    void hi()
    {
        cout << "hi!"
             << "\n";
    }
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
};
int main()
{
    asmitclass asmitobj;
    asmitobj.hi();
    cout << "\n";
    asmitobj.setname("asmit");
    cout << asmitobj.getname();
    return 0;
}
