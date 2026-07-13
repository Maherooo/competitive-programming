#include<iostream>
using namespace std;
int main(){
    int Cost,Money,Need;
    cin>>Cost>>Money>>Need;
    int total=0;
    for(int i=1;i<=Need;i++){
        total+=i*Cost;
    }
    if(Money>total){
        cout<<0;
    }
    else{
            cout<<abs(Money-total)<<endl;
    }
}