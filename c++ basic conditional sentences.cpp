

                              
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter a valid number";
    cin>>a;
    cout<<"enter sec number";
    cin>>b;
    int sum;
    sum = a+ b;
    if(sum < 10){
    cout<<"number is less than 10";
    }
    else if(sum>10){
    cout<<"number greater than 10";
    }
    else{
        cout<<"number is 10";
    }
    
    return 0;
}
    
    
    
    
