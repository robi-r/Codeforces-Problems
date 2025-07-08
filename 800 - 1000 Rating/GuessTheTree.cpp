#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> parent(n + 1);
        vector<vector<int>> children(n + 1);
        parent[1] = 0;
        for (int i = 2; i <= n; i++) {
            cout << "? 1 " << i << endl;
            int p;
            cin >> p;
            parent[i] = p;
            children[p].push_back(i);
        }
        for (int i = 2; i <= n; i++) {
            if (children[i].size() == 0) continue;
            int j = children[i][0];
            for (int k = 1; k < children[i].size(); k++) {
                cout << "? " << j << " " << children[i][k] << endl;
                int p;
                cin >> p;
                if (p != j) {
                    j = children[i][k];
                }
            }
            for (int k = 0; k < children[i].size(); k++) {
                if (children[i][k] != j) {
                    cout << "? " << j << " " << children[i][k] << endl;
                    int p;
                    cin >> p;
                }
            }
        }
        cout << "!";
        for (int i = 2; i <= n; i++) {
            cout << " " << parent[i] << " " << i;
        }
        cout << endl;
    }
    return 0;
}