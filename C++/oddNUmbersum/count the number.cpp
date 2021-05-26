#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Hello world!" << endl;
    cout<<"Enter the number" << endl;
    cin>>n;
    int count=0;



    while( n!=0 ){
    n=n/10;
    ++count;
    }

    cout <<"Number In the interger are"<< count;




    return 0;
}
