#include <iostream>
using namespace std;
int main() {
    int a,i,count;
    cout<<"enter a number ";
    cin>>a;
    count=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0){
        count++;
        }
        
    }
    if(count==0){
        cout<<"prime number";
    
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}