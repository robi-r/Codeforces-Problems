#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_set<char> m;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            if (x > 0) m.insert('R');
            else if (x < 0) m.insert('L');

            if (y > 0) m.insert('U');
            else if (y < 0) m.insert('D');
        }

        if (m.size() <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}