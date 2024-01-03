#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
while(t--)
{
    cin>>n;

    vector<int> round_n;
    int d = 1;
    while(n > 0)
    {
        int mod = n % 10;
        if(mod != 0)
        {
            round_n.push_back(mod * d);
        }
        n /= 10;
        d *= 10;
    }

cout<<round_n.size()<<endl;    
for(int i = 0; i < round_n.size(); i++)
{
    cout<<round_n[i] <<" ";
}
cout<<endl;
}
return 0;
}