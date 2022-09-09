//
// Created by Tony on 9/8/2022.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool works = true;
    if (s.substr(s.size()/2-1,2) != "()")
        works = false;
    int count = 0, count1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '|')
            count++;
        if (i == s.size()/2){
            count1 = count;
            count = 0;
        }
    }

    if (count1 != count)
        works = false;

    if (works)
        cout << "correct";
    else
        cout << "fix";

    return 0;
}
