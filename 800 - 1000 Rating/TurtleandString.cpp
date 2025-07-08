#include<iostream>

using namespace std;


int main()
{
int t;cin>>t;
while(t--){
    int n;cin>>n;
    string s;cin>>s;
    if(s.length() > 2){
        if(s[0] != s[n -1]){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

return 0;
}