#include <iostream>

using namespace std;
#include <cmath>

int main()
{
    int n, first,last,digits,swappednumber;

    cout<< "Enter the Number " << endl;

    cin >> n;

    digits=(log10(n));

    last=n%10;

    first=n/pow(10,digits);


    cout<<first<<endl;
    cout<<digits<<endl;
    cout<<last<<endl;



    swappednumber=last* ( pow(10,digits) );
    swappednumber=swappednumber+n% (int)  pow(10,digits)  ;
    swappednumber=swappednumber-last;
    swappednumber=swappednumber+first;

    cout << swappednumber << endl;



    return 0;
}
