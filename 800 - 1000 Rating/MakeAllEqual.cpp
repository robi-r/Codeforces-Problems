#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

      unordered_map<int,int> num;
      for(int i = 0; i<n; i++){
        num[a[i]]++;
      }
      int freq = 0;

      for(const auto& [key, value]: num){
        freq = max(freq, value);
      }

      int minimum = n - freq;
      cout<<minimum<<endl;
    }

    return 0;
}