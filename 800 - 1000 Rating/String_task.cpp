#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
string s, res;
cin>>s;

transform(s.begin(), s.end(), s.begin(), ::tolower);

for(int i = 0; i < s.length(); i++){
    if(s[i] == 'a' || s[i] == 'i' || s[i] == 'y' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e'){
        continue;
    }
    res += '.';
    res += s[i];
}
cout<<res<<endl;

return 0;    
}