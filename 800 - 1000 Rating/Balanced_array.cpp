#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, t;
    cin >> t;
    while(t--){
    cin>>a;
    int sum1 = 0, sum2 = 0;
    vector<int> num;
    if(a % 2 == 0){
        if(a % 4 == 0){
            cout<<"YES"<<endl;
    for(int i = 1; i <= a; i++)
    {
        if(i % 2 == 0)
        {
            num.push_back(i);
            sum1 += i;
        }
    }
    for(int i = 1; i <= a; i++)
        {
            if(i % 2 != 0)
            {
                num.push_back(i);
                sum2 += i;
            }
        }
int sum = sum1 - sum2;
int last = num.back();
num.back() = last + sum;
for(int out:num)
{
    cout<<out<<" ";
}
        }
    else{
            cout<<"NO"<<endl;
        }
}
 else{
    cout<<"NO"<<endl;
    }
    }
   
return 0;    
}

