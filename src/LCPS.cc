//
// Created by Sao on 2018/3/9.
//

#include <iostream>
#include <set>
using namespace std;

string str;

//判合法：实际上就是括号匹配的平衡性。
bool test(const string &s){
    int tmp = 0;
    for(int i = 0; i < s.length(); i++) {
        s[i] == '(' ? ++tmp : --tmp;
        if(tmp < 0) return false;
    }
    return true;
}

int main(){
    while(cin >> str){
        set<string> record;
        //左右两边一定是左右括号，不用移动它们。
        for(int i = 1; i < str.length() - 1; i++) {
            string s(str);
            s.erase(i, 1);
            cout << s << endl;
            //但字符却可以插到它们的后面。
            for(int j = 0; j < str.length(); j++) {
                if(str[i] == str[j]) continue;
                string s1(s);
                s1.insert(j, 1, str[i]);
                if(test(s1)) {
                    record.insert(s1);
                }
            }
        }
        cout << record.size() << endl;
    }
    return 0;
}
