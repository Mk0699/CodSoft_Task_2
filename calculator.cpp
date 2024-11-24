#include <iostream>
using namespace std;
int main(){
     double a,b;
     int x;
     cout <<"\nEnter 1 st number a : ";
     cin>>a;
     cout <<"\nEnter 2 st number b : ";
     cin>>b;
     cout <<"\nChoose operation to perform between a and b :-\n1.Addition\n2.Subtraction\n3.Multiplication\n4.division\n";
     cin>>x;
     switch(x){
          case 1:
               cout <<"\nSum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
               break;
          case 2:
               cout <<"\nDifference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
               break;
          case 3:
               cout <<"\nProduct of "<<a<<" and "<<b<<" is "<<a*b<<endl;
               break;
          case 4:
               if(b==0){
                    cout<<"\nDivision by 0 is not possible"<<endl;
                    break;
               }
               cout <<"\nDividing  "<<a<<" with "<<b<<" we get "<<a/b<<endl;
               break;
          default:
               cout <<"\nPlease select valid operation";
     }
     return 0;
}