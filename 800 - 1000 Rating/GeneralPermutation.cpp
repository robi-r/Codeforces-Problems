#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
       
        cout << -1 << '\n';
    } else {
       
        int left = 1;
        int right = n;

        vector<int> permutation(n);

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
               
                permutation[i] = right--;
            } else {
                permutation[i] = left++;
            }
        }

        for (int num : permutation) {
            cout << num << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
