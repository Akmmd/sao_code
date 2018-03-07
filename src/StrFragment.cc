#include <iostream>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        int t = 0, tmp = 0;
        double sum = 0;
        for (int i = 1; i < str.length(); i++)
        {
            if (i == str.length() - 1)
            {
                if (str[i] == str[i - 1])
                {
                    sum += i - t + 1;
                    tmp++;
                }
                else
                {
                    sum += i - t + 1;
                    tmp += 2;
                }
            }
            else
            {
                if (str[i] != str[i - 1])
                {
                    sum += i - t;
                    t = i;
                    tmp++;
                }
            }
        }
        sum = sum / tmp;
        printf("%.2f\n", sum);
    }
    return 0;
}