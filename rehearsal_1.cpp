#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    double g;
    cout<<"What is your name?: ";
    cin>>n;
    cout<<"What is your GPA?: ";
    cin>>g;
    if(g>=3.50){
        cout<<n<<" Inw Jrim Jrim!!!";
    }else{
        cout<<"Try harder, "<<n<<"!!!"<<endl;
    }
}


