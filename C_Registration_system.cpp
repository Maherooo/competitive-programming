#include<iostream>
#include<string>
#include<vector>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        string name;
        cin>> name;
        if(mp[name]==0){
            cout<<"OK\n";
            mp[name]=1;
        }
        else {
            string newname=name+to_string(mp[name]);
            cout<<newname<<endl;
            mp[name]++;
        }
    }
}