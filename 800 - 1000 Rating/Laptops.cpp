#include <iostream>
#include <vector>
#include<algorithm>
#include<utility>
using namespace std;
    
int main() {
int n;
cin>>n;
vector<pair<int,int>>laptop(n);
for(int i = 0; i < n; i++){
    cin>>laptop[i].first>>laptop[i].second;    
}
sort(laptop.begin(), laptop.end());

for(int i = 1; i < n; i++)
{
    if(laptop[i].second < laptop[i - 1].second){
        cout<<"Happy Alex"<<endl;
        return 0;
    }
}
cout<<"Poor Alex"<<endl;
return 0;
}
