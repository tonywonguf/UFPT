//
// Created by Tony on 9/8/2022.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    multiset<pair<long long, long long>> ms;

    while(n--) {
        string tpe;
        long long E, G, givenE;
        cin >> tpe;
        if (tpe == "add")
            cin >> E >> G;
        else
            cin >> givenE;

        if (tpe == "add")
            ms.insert({-E, -G});
        else{
            givenE = -givenE;
            long long sum = 0;
            auto it = ms.lower_bound({givenE,-1000000});
            while (it != ms.end()) {
                ms.erase(it);
                sum += it->second;
                givenE -= it->first;
                it = ms.lower_bound({givenE,-1000000});
            }
            cout << -sum << endl;
        }

    }
    return 0;
}
