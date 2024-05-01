#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<int>suf(n,0), pref(n,0);
        set<char> str;
        for(int i = 0; i < n; i++)
        {
            str.insert(s[i]);
            pref[i] = str.size();
        }
        str.clear();
        for(int i = n - 1; i > -1; i--)
        {
            str.insert(s[i]);
            suf[i] = str.size();
        }
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
       ans = max(ans, pref[i] + suf[i + 1]);
        }
        cout<<ans<<endl;
    }

return 0;    
}