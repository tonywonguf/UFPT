//
// Created by Tony on 9/8/2022.
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;
        vector<int> deck(s,0);
        vector<bool> used(100005,false);
        stack<int> q;
        vector<int> ans;
        for (int i = 0; i < s; i++) cin >> deck[i];

        for (int i = s-1; i >= 0; i--) {
            used[deck[i]] = true;
            q.push(deck[i]);
            if(used[s] || i == 0){
                while (!q.empty()) {
                    ans.emplace_back(q.top());
                    q.pop();
                }
                while(used[s]) {s--;}
            }
        }

        for (int i : ans)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}
