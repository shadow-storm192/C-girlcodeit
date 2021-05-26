#include <iostream>

using namespace std;

int main()
{
    int u,i,sum=0;
    cout << "Hello world!" << endl;
    cout<<  "Enter the Upper Limit" << endl;
    cin>>u;

    for (i=1; i<=u; i++){
    sum=sum+i;
    }
    cout<<sum;



    return 0;
}
