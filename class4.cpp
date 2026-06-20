#include <iostream>
using namespace std;
int main()
{
    cout<<"**welcome to calculator proggram**\n";
    cout<<"\nEnter two number";
    float n1,n2;
    cout<<"\nEnter the value for number 1:";
    cin>>n1;
    cout<<"\nEnter the value for number 2:";
    cin>>n2;
    float sum, sub, mul, division;
    sum=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    division=n1/n2;
    cout<<"\nthe sum of n1 and n2 ="<<sum;
    cout<<"\nthe difrence of n1 and n2 ="<<sub;
    cout<<"\nthe multiplication of n1 and n2 ="<<mul;
    cout<<"\nthe division of n1 and n2 ="<<division;
      

    return 0;

}