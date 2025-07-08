#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void createMaximalPairing(string &input) {
    int length = input.size();
    unordered_map<char, int> charCount;
    for (char character : input) {
        charCount[character]++;
    }
    string output(length, ' ');
    int position = 0;

    while (true) {
        bool updated = false;
        for (auto &[character, count] : charCount) {
            if (count > 0) {
                output[position] = character;
                position++;
                count--;
                updated = true;
                if (position >= length) {
                    position = 1;
                }
            }
        }
        if (!updated) {
            break;
        }
    }
    cout << output << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int length;
        cin >> length;
        string input;
        cin >> input;
        
        createMaximalPairing(input);
    }
    
    return 0;
}
