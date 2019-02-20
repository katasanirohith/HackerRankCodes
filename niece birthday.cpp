#include <iostream>
using namespace std;
int main()
{
    unsigned long int n;
    cin>>n;
    unsigned long int a[n];
    int maxi=0;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(maxi<a[i])
    maxi=a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(maxi==a[i])
        count++;
    }
    cout<<count;
    
}
