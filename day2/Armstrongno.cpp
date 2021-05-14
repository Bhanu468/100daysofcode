#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int org_num=n;
    int sum=0,rem;
    while(n>0){
        rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }

    if(org_num==sum) cout<<"armstrong";
    else cout<<"not armstrong";
    
        
    return 0;
}