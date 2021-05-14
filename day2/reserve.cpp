#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int lastdigit=0,sum=0,i=0;
    while(n>0){
        lastdigit=n%10;
        sum=sum*10+lastdigit;

        n/=10;
    }
    cout<<sum;

    
        
    return 0;
}