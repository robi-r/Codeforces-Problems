#include<iostream>
using namespace std;

int main(){
    int n, c = 0, p = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        
        if(arr[i] > 0){
            p += arr[i];
        }
        else{
            if(p < 1){
                c++;
            }
            else{
                p--;
            }
        }
    }
cout<<c<<endl;
return 0;    
}