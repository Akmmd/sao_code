//
// Created by Sao on 2018/3/9.
//

#include <iostream>

using namespace std;
long long A[100005];
int main() {
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n = 0;
        cin >> n;
        int count2 = 0,count4 = 0;
        for (int j = 0; j < n; j++) {
            cin >> A[j];
            if (A[j] % 4 == 0) {
                count4++;
            } else if (A[j] % 2 == 0) {
                count2++;
            }
        }
        int countOdd = n - count4 - count2;
        if((n == 1 && count4) || (count4 >= countOdd - !count2)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
