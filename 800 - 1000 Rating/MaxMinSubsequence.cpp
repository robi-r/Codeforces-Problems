#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Use a set to keep track of unique elements
        set<int> seen;
        vector<int> result;

        // Traverse the list from right to left
        for (int i = n - 1; i >= 0; --i) {
            if (seen.find(a[i]) == seen.end()) {
                result.push_back(a[i]);
                seen.insert(a[i]);
            }
        }

        // Reverse the result to maintain the original order
        reverse(result.begin(), result.end());

        // Output the result
        cout << result.size() << endl;
        for (int num : result) {
            cout << num << ' ';
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
