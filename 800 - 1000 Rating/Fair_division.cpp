#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0,sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            if (a==1)
            sum1++;
            if (a==2)
            sum2++;
        }
        if (sum%2==0)
        {
            if((sum/2)%2==0)
            cout<<"YES"<<endl;
            else 
            {
                if(sum1)
                cout<<"YES"<<endl;
                else 
                cout<<"NO"<<endl;
            }
            
        }
        else {
            cout<<"NO"<<endl;
        }
    }

}