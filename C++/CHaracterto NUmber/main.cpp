#include <iostream>

using namespace std;

int main()
{
    int n,num=0,reversed,lastdigit;
    cout << "Hello world!" << endl;
    cout<< "Enter the input" << endl;
    cin >> n;


     while (n!=0){
     lastdigit=n%10;
     num=num*10+lastdigit;
     n=n/10;

     }

     while(num!=0){

     switch(num%10)
     {

     case 0:
        cout<<"zero";
     break;
     case 1:
        cout<<"one";
     break;
     case 2:
         cout<<"two";
     break;
     case 3:
         cout<<"three";
     break;
     case 4:
         cout<<"Four";
     break;
     case 5:
     cout<<"Five";
     break;
     case 6:
     cout <<"Six";
     break;
     case 7:
     cout << "seven";
     break;
     case 8:
     cout << "Eight";
     break;
     case 9:
     cout<< "Nine";
     break ;
     }
     num=num/10;
     }
   return 0;
}
