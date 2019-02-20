#include <iostream>
using namespace std;
int main()
{
    long int year;
    cin>>year;
    if(year==1800||year==1900||year==1700)
    {
    cout<<"12.09."<<year;
    return 0;
}
    if(year%100!=0)
    {
    
    if(year%4==0)
    cout<<"12.09."<<year;
    else
    cout<<"13.09."<<year;
    }
    else
    {
        if(year%400==0)
        {
        cout<<"12.09."<<year;    
        }
        else
        cout<<"13.09."<<year;
    }
}
