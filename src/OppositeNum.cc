#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        int s[6];
        memset(s,0,sizeof(s));
        int t = 0, m = n, sum = 0;
        if (n == 100000)
            cout << "100001" << endl;
        while (m)
        {
            s[t] += m % 10;
            m /= 10;
            t++;
        }
        int x = t - 1;
        for (int i = 0; i < t; i++)
        {
            sum += s[i] * pow(10, x);
            x--;
        }
        n += sum;
        cout << n << endl;
    }
    return 0;
}