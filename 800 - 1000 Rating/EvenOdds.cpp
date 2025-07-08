#include<iostream>
#include<vector>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  ll n,k; cin>>n>>k;
   
  ll oddn = (n + 1) / 2;

  if(k <= oddn){
    cout<< 2 * k - 1<<endl;
  }else cout<<2 * (k - oddn)<<endl;


return 0;
}