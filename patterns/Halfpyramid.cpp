#include<iostream>
using namespace std;
int main(){

    int rows;
    cin>>rows;
    //int columns;
    //cin>>columns;


    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i>=j){
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}