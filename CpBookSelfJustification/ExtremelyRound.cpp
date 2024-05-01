#include<iostream>
using namespace std;

void solve(){
    int t, n, c = 0;
    cin>>n;
    t = n;

    while(t > 9)
    {
        t /= 10;
        c++;
    }
    int res = c * 10 + t - c;
    cout<<res<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
return 0;
}