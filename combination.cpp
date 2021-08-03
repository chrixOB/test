#include <iostream>
using namespace std;
int fact(int x);


int main()
{
    int n=0,r=0   ;
    cout<<"syntax is n-combinaton-r"<<endl;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter r"<<endl;
    cin>>r;
    int n_r = n - r;


    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_n_r = fact(n_r);

    int  result = fact_n/(fact_r * fact_n_r);
    cout<<n<<" combination "<<r<<" is "<<result<<endl;



    return 0;
}

int fact(int x)
{
    int i = 1;
    int Q=1;
    if(x>=0)
    {
        do
        {
            Q = Q * i;
            i++;
        }
        while(x>=i);

    }
    return Q;
}




