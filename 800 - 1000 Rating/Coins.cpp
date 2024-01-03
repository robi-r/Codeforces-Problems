#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    vector<int>coin(n);
    for(int i = 0; i < n; i++){
        cin>>coin[i];
    }
    sort(coin.rbegin(), coin.rend());
    int cnt = 0, minSum = 0;
    for(auto coins:coin){
        sum += coins;
    }
    for(int i = 0; i < n; i++)
    {
        minSum += coin[i];
        cnt++;
        if(minSum > sum / 2) break; 
    }
    cout<<cnt<<endl;

return 0;    
}