//
// Created by Tony on 9/8/2022.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> heights(n,0);
    vector<long long> diff(n,0);
    vector<long long> prefix(n,0);
    vector<long long> rprefix(n,0);
    long long sum = 0;
    long long zero = 0;
    for (int i = 0; i < n; i++) cin >> heights[i];

    for (int i = 0; i < n-1; i++) {
        diff[i] = max(heights[i] - heights[i + 1], zero);
        sum += diff[i];
        prefix[i+1] = sum;
    }
    sum = 0;
    for (int i = 0; i < n-1; i++) {
        diff[i] = max(heights[i+1] - heights[i], zero);
        sum += diff[i];
        rprefix[i+1] = sum;
    }

    while (m--) {
        long long a, b;
        cin >> a >> b;
        if (a < b){
            cout << prefix[b - 1] - prefix[a - 1] << endl;
        }
        else {
            cout << rprefix[a - 1] - rprefix[b - 1] << endl;
        }
    }

    return 0;
}
