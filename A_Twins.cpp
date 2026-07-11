#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<int> a(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int mysum=0,cnt=0;
    for(int i=0;i<n;i++){
        mysum+=a[i];
        cnt++;
    if(mysum>total-mysum){
        cout<<cnt<<endl;
        break;
    }
 }
}