#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin >>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            int m = arr[i];
            for(int j = i + 1; j < n; j++)
            {
                m  = max(m, arr[j]);
                    cout<< m <<" ";
            }    
        }
        cout<<endl;
    }
return 0;
}
