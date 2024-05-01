#include<iostream>
using namespace std;

void String(){
    string s;
    cin>>s;
    string m = "";
    for(int i = 0 ; i <= 100; i++){
        m = m + "Yes";
    }
    bool valid = false;
    for(int i = 0; i < m.size(); i++){
        if(m.substr(i,s.size()) == s){
            valid = true;
            break;
        }
    }
    if(valid){
        cout<<"YES\n";
    }else cout<<"NO\n";
}

int main()
{
int t;
cin>>t;
while(t--){
    String();
}

return 0;    
}