#include <iostream>
using namespace std;
int main()
{
    int num;
    int i=1;
    int fact=1;

    cout<<"enter a number to find its factorial"<<endl;
    cin>>num;

    if(num>=0)
    {
        do
        {
            fact = fact * i;
            i++;
        }
        while(num>=i);
        cout<<"factorial of "<<num<<" is :"<<fact<<endl;
    }
    else
    {
        cout<<"Enter a positive integer";
    }

    return 0;
}
