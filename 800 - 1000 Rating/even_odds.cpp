#include <iostream>
using namespace std;

int main(){

long long n{},loc{},odd{},i{},j{},even{};
cin>>n>>loc;

loc = loc-1;

if(n%2==0){
odd = n/2;
even = n/2;
}else{
    odd = (n/2)+1;
    even = (n/2);
}
long long mainArr[n];


for(long long j = 1;j<=n;j+=2){
        mainArr[i++]=j;
        if(loc==(i-1)){
            cout<<mainArr[loc]<<endl;
            break;
        }
}


for(long long j = 2;j<=n;j+=2){ 
        mainArr[odd++]=j;
        if(loc==(odd-1)){
            cout<<mainArr[loc]<<endl;
            break;
        }
}
return 0;
}