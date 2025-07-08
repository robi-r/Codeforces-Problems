#include <bits/stdc++.h>
using namespace std;
#define int long long

int computeSum(int num) {
    return num * (num + 1) / 2;
}
int rangeSum(int start, int end) {
    return computeSum(end) - computeSum(start - 1);
}
void processInput() {
    int numIntervals, maxValue, maxFound = 0;
    cin >> numIntervals >> maxValue;

    for (int i = 0; i < numIntervals; ++i) {
        int count;
        cin >> count;
        set<int> uniqueValues;
        for (int j = 0, value; j < count; ++j) {
            cin >> value;
            uniqueValues.insert(value);
        }
        bool isFindingGap = true;
        for (int k = 0; ; ++k) {
            if (!uniqueValues.count(k)) {
                if (isFindingGap) isFindingGap = false;
                else {
                    maxFound= max(maxFound, k);
                    break;
                }
            }
        }
    }

    if (maxValue <= maxFound) {
        cout <<maxFound * (maxValue+ 1) << endl;
    } else {
        cout <<maxFound * (maxFound + 1) + rangeSum(maxFound + 1, maxValue) << endl;
    }
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int testCases =1;
    cin >>testCases;
    while (testCases--) processInput();
}
