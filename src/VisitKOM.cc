//
// Created by Sao on 2018/3/9.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0, l = 0;
    while(cin >> n) {
        cin >> l;
        vector<int> parent(n,0);
        //求最大深度
        parent[0] = 1;
        int tmp = 0;
        int sum = 1;
        for(int i = 0;i < n - 1;i++) {
            cin >> tmp;
            parent[i+1] = parent[tmp] + 1;
            if(sum < parent[i+1]){ //最长路径的深度
                sum = parent[i+1];
            }
        }
        if(sum < l + 1) {
            int res = (l + 1 - sum)/2 + sum; //走l步可以到达的点数
            if(res > n){
                cout << n << endl;
            } else {
                cout << res << endl;
            }
        } else {
            cout << l + 1 << endl;
        }
    }
    return 0;
}