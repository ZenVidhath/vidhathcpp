#include<iostream>
#include<random>
#include<time.h>
using namespace std;

int main()
{
   int snum,input;
   srand(time(nullptr));
   snum=rand() % 100 +1;
   cout<<snum;
   cout<<"Enter the number";
   cin>>input;
   while(snum!=input)
   {
    if(input<snum)
    {
        cout<<"The secret number is greater than your guess";
        cin>>input;
    }
    else{
    cout<<"The secret number is smaller than your guess";
    cin>>input;
    }
    }
    cout<<"won he game"<<endl;
    return 0;
   }
   
}