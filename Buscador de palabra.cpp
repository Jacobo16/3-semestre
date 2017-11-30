#include<iostream>
#include<string.h>
int buscar(char texto[], char palabra[]);
using namespace std;
int main ()
{
    char texto[30], palabra[30];
    int posicion;

    cout<<"Ingrese cualquier texto"<<endl;
    cin.getline(texto,30);

    cout<<"Ingrese la palabra a buscar"<<endl;
    cin>>palabra;

    posicion=buscar(texto,palabra);

    if(posicion==1)
    {
        cout<<"La palabra no existe en el texto"<<endl;
    }
    else
        cout<<"La palabra comienza en la posicion:"<<posicion<<endl;

    return 0;

}

int buscar(char texto[], char palabra[])
{
    int contador=0, contador2=0;

    for(;contador<=strlen(texto);)
    {
        if(palabra[contador2]==texto[contador])
        {
            contador++, contador2++;
            if(contador2==strlen(palabra))
                return (contador-contador2);
        }


        else
        {
            if(contador2==0)
            {
                contador++;
            }
            else
                contador+=contador2-1, contador2=0;
        }
    }
    return 1;

}
