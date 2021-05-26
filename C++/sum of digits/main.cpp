#include <iostream>

using namespace std;

int main()
{


    int n,lastdigit;
    long long sum=1;

    cout<< "Enter the Input" << endl;
    cin >> n ;


    while(n!=0){
    sum=sum*(n%10);
    n=n/10;

    }


    cout<<sum<<endl;
    return 0;


}
