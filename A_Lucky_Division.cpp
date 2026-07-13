#include<iostream>
using namespace std;
bool ok=false;
int n;
void generator(int x){
    if(x>1000)
    {
        return;
    }
    if(n%x==0){
        ok=true;
    }
    generator(x*10+4);
    generator(x*10+7);
}
int main(){
    cin>>n;
    generator(4);
    generator(7);
    if(ok) cout<<"YES";
    else cout<<"NO";

}