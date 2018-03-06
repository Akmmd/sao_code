#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef long long LL;

const int N = 1005;
LL a[N];

int main()
{
    int n = 0;
    
    long long l = 0;
    while (cin >> n >> l)   //解决多组输入到文件结尾
    {
        double d = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (d < a[i] - a[i - 1])
            {
                d = a[i] - a[i - 1];
            }
        }
        d = d / 2;
        if(d < a[0]) d = a[0];
        if(d < l - a[n-1]) d = l - a[n-1];
        printf("%.2f\n", d);
    }
    return 0;
}