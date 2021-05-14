#include<iostream>
using namespace std;

int fact(int n){
    int result=1;
    
  for(int i=1;i<=n;i++){
      result*=i;
  }
    return result;
}

int main(){

    int n;
    cin>>n;
    if(n==0){
        cout<<1;
    }else{
        cout<<fact(n);
    }
        
    return 0;
}