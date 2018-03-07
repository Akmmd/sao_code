#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n = 0;
    while (cin >> n)
    {
        string str;
        int t = 0;
        if (n == 1)
        {
            str += '1';
        }
        else
        {
            while (n)
            {
                t = n % 2;
                if (t == 0)
                {
                    n = (n - 2) / 2;
                    str += '2';
                }
                else
                {
                    n = (n - 1) / 2;
                    str += '1';
                }
            }
        }
        for (int i = str.length() - 1; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << endl;
    }

    return 0;
}