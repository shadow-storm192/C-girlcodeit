#include <iostream>

using namespace std;

int main()
{
    int n,first,last_digit,sum,c;

    cout<<"Enter the Input" << endl;
    cin >> n;


    last_digit=n%10;
    cout <<"Last Digit Of a Number" << "=" << last_digit <<endl;
     first=n;
    while(first>=10){

    first=first/10;

    }

    cout<<"First Digit of A number"<<"="<<first<<endl;

    first=c;
    first=last_digit;
    last_digit=c;
    cout<< first<<endl;
    cout<< last_digit <<endl;


    return 0;
}
