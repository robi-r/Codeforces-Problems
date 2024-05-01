#include <iostream>
#include <string>
using namespace std;
    
int main() {
    string s;
    cin>>s;
    string str = "hello";
    int j = 0;
    for(int i = 0; i < s.length();i++){
        if(s[i] == str[j]){
            j++;
            if(j == str.length()){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

return 0;
}
