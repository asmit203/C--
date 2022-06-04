#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cout << "ele: ";
        cin >> t;
        vec.push_back(t);
    }
    // n = 3;
    // vec = {1, 2, 3, 4, 5};
    for (auto i : vec)
        cout << i << "\t";
    cout << "\n";

    printf("enter the num to search: ");
    int num;
    cin >> num;
    bool flag = true;
    int ans = -1;
    // if (num > *(vec.end()) or num < *(vec.begin()))
    // {
    //     flag = false;
    //     ans = -1;
    // }

    int size = vec.size();
    int size_ = vec.size();
    // size_ /= 2;
    size = size / 2;
    size_ = size_ / 2;
    int t = 0;
    for (int i = size; flag and t < log2(vec.size()); i = size)
    {
        t++;
        if (vec[i] == num)
        {
            ans = i;
            flag = false;
            // cout << "hi 1\n";
            break;
        }
        if (vec[i] < num)
        {
            // cout << "hi 2\n";
            size += (size_ / 2);
            size_ /= 2;
            if (size_ % 2 == 1 and (size_ / 2) == 0 and (size + 1) < vec.size())
            {
                size_++;
            }
        }
        if (vec[i] > num)
        {
            // cout << "hi 3\n";
            size -= (size_ / 2);
            size_ /= 2;
            if (size_ % 2 == 1 and (size_ / 2) == 0 and (size + 1) < vec.size())
            {
                size_++;
            }
        }
    }
    cout << "found at-> " << ans;
    return 0;
}