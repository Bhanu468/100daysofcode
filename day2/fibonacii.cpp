#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n==1){
        cout<<"0\n";
    }    
    else if(n==2){
        cout<<"1\n";
    }
    else{
        int a=0,b=1,curr=0,i=3;
        cout<<a<<"\n"<<b<<"\n";
        while(i<=n){
            curr=a+b;
            cout<<curr<<"\n";
            a=b;
            b=curr;
            i++;
        }
    }
        
    return 0;
}