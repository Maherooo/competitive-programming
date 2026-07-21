#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y[x];
    int ans[x+1];
    for(int i=0;i<x;i++){
        cin>>y[i];
        ans[y[i]]=i+1;
    }
    for(int i=1;i<=x;i++){
        cout<<ans[i]<<" ";
    }

}