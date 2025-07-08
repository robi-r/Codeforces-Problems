#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int max_subsequence_length(int n,int m, string &a, string &b) {
    int i = 0, j = 0, ct = 0;
    while(i < n && j < m)
    {
        if(a[i] == b[j]){
            ct++;
            i++;
        }
        j++;
    }
    return ct;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        cout << max_subsequence_length(n, m, a, b) << endl;
    }

    return 0;
}
