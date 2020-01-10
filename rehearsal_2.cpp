#include<iostream>

using namespace std;
int main(){
    double s=0,x;
    cout<<"Enter x: ";
    cin>>x;
    while(x!=0){
        if(x>0){
            s=s+x;
            cout<<"Enter x: ";
            cin>>x;
            }else{
            cout<<"Enter x: ";
            cin>>x;
        }
    }
    cout<<"sum = "<<s;
    }



