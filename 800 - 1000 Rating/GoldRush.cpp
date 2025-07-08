#include<iostream>
#include<map>
using namespace std;

bool num(int n, int m){

    if(n == m) return true;
    if(n % 3 != 0) return false;
    return(num(n/3, m) || num(2 * (n/3), m));
}


int main()
{
 int t; cin>>t;
 while(t--)
 {
    int n, m;
    cin>>n>>m;
    if(num(n,m)){
        cout<<"YES\n";
    }else cout<<"No\n";
 }

return 0;
}