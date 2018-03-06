#include <iostream>
using namespace std;

const int N = 100;
pair<int, int> a[N];

bool cmp(const pair<int, int>& x, const pair<int, int>& y) {
    return x.second < y.second;
}

int main(){
    int n = 0;
    long long r = 0, avg = 0, sum = 0, target = 0;
    cin >> n >> r >> avg;
    target = avg * n;
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
        target -= a[i].first;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        if(target <= 0) break;
        long long dis = r - a[i].first;
        if(target > dis){
            sum += dis * a[i].second;
            target -= dis;
        }else {
            sum += target * a[i].second;
            break;
        }
    }
    cout << sum << endl;
    return 0;
}