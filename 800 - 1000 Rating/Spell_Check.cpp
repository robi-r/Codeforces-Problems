#include <iostream>
#include <algorithm>f
using namespace std;

int main()
{
    int t;
    cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string test = "Timur";

    sort(s.begin(), s.end());
    sort(test.begin(), test.end());

if(test == s){
      cout<< "Yes\n";
}else cout<< "No\n";
}
return 0;
}