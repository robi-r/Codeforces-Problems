#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int ct = 0;
for(int i = 1; i <= n/2;i++){
    if( n % i == 0){
        ct++;
    }
}

cout<<ct<<endl;

return 0;    
}