#include <iostream>
using namespace std;

int main()
{

    int x, x1;

    cout << "give the amount to be paid: ";
    cin >> x;
    x1 = x;
    int dem[3] = {0, 0, 0};
    int curr[3] = {100, 50, 10};
    for (int i = 0; i < 3; i++)
    {
        dem[i] = x1 / curr[i];

        x1 = x1 % curr[i];
    }

    cout << dem[0] << " " << dem[1] << " " << dem[2] << endl;

    return 0;
}