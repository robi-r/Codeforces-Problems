#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int n,m;
cin>>n;
vector<int>boy(n);
for(int i =0; i < n; i++)
{
    cin>>boy[i];
}
cin>>m;
vector<int> girl(m);
for(int i = 0; i < m; i++)
{
    cin>>girl[i];
}
sort(boy.begin(), boy.end());
sort(girl.begin(), girl.end());
int ct = 0, bi = 0, gi = 0;
while(bi < n && gi < m){
    if(abs(boy[bi] - girl[gi]) <= 1){
        ct++;
        bi++;
        gi++;
    }else if(boy[bi] < girl[gi]){
        bi++;
    }else{
        gi++;
    }
}
cout<<ct<<endl;






return 0;
}


