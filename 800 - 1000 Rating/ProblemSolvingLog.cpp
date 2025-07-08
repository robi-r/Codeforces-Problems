#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string log;
        cin>>log;

        unordered_map<char, int> task;
        for(char problem: log){
            task[problem]++;
        }
        int solved = 0;

        for(char i = 'A'; i <= 'Z'; i++){
            if(task[i] >= (i - 'A' + 1)){
                solved++;
            }
        }
        cout<<solved<<endl;

    }
return 0;
}