
#include<bits/stdc++.h>
using namespace std;
const int max_n = 100005;
int i, j, k, m, n, P, Q, R;
string s[max_n], vas;
int p[max_n], q[max_n];
vector<int> v;
int main() {
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s[i];
        scanf("%d", &p[i]);
    }
    cin >> m;
    for (i = 0; i < m; i++) {
        scanf("%d", &q[i]);
        q[i] *= 10;
    }
    cin >> vas;
    for (i = 0; i < n; i++) {
        if (s[i] < vas) v.push_back(10 * p[i] + 1);
        else if (s[i] == vas) {
            m = 10 * p[i];
        } else v.push_back(10 * p[i]);
    }
    sort(v.begin(), v.end());
    sort(q, q+n);
    P = 0; Q = n-1;
    while (P < Q) {
        R = (P + Q) / 2;

        for (i = 0; i < n-1-R; i++)
            if (v[i] + q[n-1-R-1-i] > m + q[n-1]) break;
        if (i == n-1-R)
            Q = R;
        else P = R + 1;
    }
    cout << P + 1 << " ";

    P = 0; Q = n-1;
    while (P < Q) {
        R = (P + Q + 1) / 2;

        for (i = 0; i < R; i++)
            if (v[n-2-i] + q[n-R+i] <= m + q[0]) break;
        if (i == R)
            P = R;
        else Q = R - 1;
    }
    cout << P + 1 << endl;
}


