#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define ll long long

int main()
{
    int n, m; cin>>n>>m;
    string s[n + 5];
    int len[n + 5];
    int a[m + 5];

    set<int>st;

    for(int i = 0; i < n; i++)
    {
        cin>>s[i];
        len[i] = s[i].length();
    }
    for(int i = 0; i < m; i++)
    {
        cin>>a[i];
        st.insert(len[a[i]]);
    }
    if(st.size() > 1){
        cout<<"NO"<<endl; return 0;
    }
    int sz = len[a[1]];
    string x  = s[a[1]];

    for(int i = 2; i < m ; i++)
    {
        int y = a[i];

        for(int j = 0; j < sz; j++)
        {
            if(x[j] != s[y][j])
            {
            x[j] = '?';
            }
        }
    }

    int ct = 0;
    for(int i = 1; i <= n; i++)
    {
        if(x.size() != s[i].size())
        continue;

        string t = s[i];
        int y = 0;
        for(int j = 0; j < x.size(); j++)
        {
            if(t[j] == x[j] || x[j] == '?')
            y++;
        }
        if(y == x.size())
        ct++;
    }
    if(ct == m)
    {
        cout<<"Yes\n"<<x;
    }else cout<<"No";
return 0;
}