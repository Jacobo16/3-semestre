#include<iostream>
int fibonacci(int x);
int factorial_recursivo(int x);
using namespace std;
int main () {
    int n,n2, res;

    cout<<"Ingresa el numero de la serie"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        res=fibonacci(i);
        cout<<res<<",";
    }

    cout<<endl;
    cout<<"Ingrese un numero entero para el factorial:"<<endl;
    cin>>n2;

    cout<<factorial_recursivo(n2)<<endl;



    return 0;
}

int fibonacci(int x)
{
    if(x==0 || x==1)
    {
        return x;
    }
    else
    {
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

int factorial_recursivo(int x)
{
    if(x==1)

        return 1;

    else
        return x*factorial_recursivo(x-1);
}



