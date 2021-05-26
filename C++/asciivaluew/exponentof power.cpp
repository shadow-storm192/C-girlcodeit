#include <iostream>

using namespace std;

int main()
{
    int i,power=1,exponent,base;
    cout<<"Hello World";

    cout<<"Enter the base";
    cin>> base;
    cout<<"enter the exponent";
    cin>>exponent;
    for(i=1; i<=exponent; i++){

      power=power*base;
    }
    cout<<power;



    return 0;
}
