#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        unordered_set<char>m;
        int ct = 0;
        for(int i = 0; i < s.size(); i++){         
            m.insert(s[i]);
            if(m.size() > 3){
                ct++;
                m.clear();
                m.insert(s[i]);
            }
        }
        if(!m.empty()){
            ct++;
        }
        cout<<ct<<endl;
    }
     
return 0;    
}