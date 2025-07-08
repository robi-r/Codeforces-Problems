#include<bits/stdc++.h>
using namespace std;

long countBit(long res){
   int ct = 0;
    while(res){
        ct += res & 1;
        res >>= 1;
    }
    return ct;
}
int main()
{
    int n,m,k,ct; cin >>n>>m>>k;
    long army[m+1];
    for(int i = 0; i <= m; i++){
        cin>>army[i];
    }
    ct = 0;
    long res = 0;
    for(int i = 0; i < m; i++){
        res = army[i]^army[m];
        if(countBit(res) <= k){
            ct++;
        }  
    }
    cout<<ct<<endl;
}

