#include <iostream>

using namespace std;

int main()
{

    cout<<"-------------------------------------"<<endl;
    int n,rev=0,lastdigit;
    cout << "Hello world!" << endl;
    cout<<"Enter the input " << endl;
    cin >> n;

    while(n!=0){

    lastdigit=n%10;


    rev=rev*10+lastdigit;



    n=n/10;

    }
    cout<< ""<<rev << endl;
    cout<<"------------------------------------"<<endl;


    return 0;
}
