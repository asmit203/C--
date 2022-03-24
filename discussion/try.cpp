#include <bits/stdc++.h>
using namespace std;
int fibo(int x);
class asmitclass
{
public:
    void hello()
    {
        cout << "hello" << endl;
    }
};
int main()
{
    // cout << "hi"
    //      << "\n";
    // printf("hello");
    // asmitclass amotobj;
    // amotobj.hello();
    cout<<fibo(2);
    return 0;
}

int fibo(int x)
{
    if (x <= 10)
    {
        x += 1;
        fibo(x);
    }
    else
    {
        return x;
    }
}