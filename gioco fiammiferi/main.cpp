#include <iostream>

using namespace std;

int main()
{
    int n,n1,n2,k,i=0;
    cout<<"con quanti fiammiferi vuoi giocare?"<< endl;
    cin>>n;
    do{
    cout<<"quanti per turno ne vuoi togliere?"<< endl;
    cin>>n1;
    }while (n1>n);
    do
    {
     i++;
     do
     {
     cout<<"tocca al giocatore "<<i<< endl;
     cin>>n2;
     }while (n2>n1);
     n=n-n2;
     if (i==2) i=0;
    }while (n>=1);
    cout<<"vince il giocatore "<<i+1<< endl;
    return 0;
}
