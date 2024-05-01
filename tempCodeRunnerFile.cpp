#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s.size() == 1){
        if(s[0] == 'Y' || s[0] == 'e' || s[0] == 's'){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
        return;
    }


for(int i = 0; i < s.size(); i++){
    if(s[i] == 'e' && s[i+1] == 's'){
        continue;
    }
    else if(s[i] == 'Y' && s[i + 1] == 'e'){
        continue;
    }
    else if(s[i] == 's' && s[i+1] == 'Y'){
        continue;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    cout<<"YES"<<endl;
}

return 0;    
}