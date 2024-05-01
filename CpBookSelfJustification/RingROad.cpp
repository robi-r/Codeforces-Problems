#include<iostream>
#define f(i,a) for(int i = 0; i < (a); i++)
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i = 0; i < m; i++){
        cin>>arr[i];
    }
    long long count = arr[0] - 1;
    for(int i = 0; i < m - 1; i++){
        if(arr[i] > arr[i+1])
        {
            count += n - (arr[i] - arr[i+1]);
        }
        else if(arr[i] < arr[i+1]){
            count += (arr[i+1] - arr[i]);
        }
    }
    cout<<count<<endl;


return 0;    
}