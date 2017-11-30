#include<iostream>
#include<string.h>
int espalindromo(char cadena[], int inicio, int f);
using namespace std;
int main ()
{
    char palabra[50];
    int largo;
    largo=strlen(palabra);
    int respuesta;

    cout<<"Ingrese la palabra deseada para saber si es palindromo"<<endl;
    cin.getline(palabra,50,'\n');

    cout<<espalindromo(palabra,0,largo-1);

    return 0;
}

int espalindromo(char cadena[], int inicio, int fin)
{
    if(inicio<fin)
    {
        if(cadena[inicio]==' ')

            return espalindromo(cadena, ++inicio, fin);

        else if(cadena[fin]==' ')

            return espalindromo(cadena,inicio,--fin);

        else if(cadena[inicio]==cadena[fin])

            return espalindromo(cadena, ++inicio,--fin);

        else
            return 0;
    }
    else

        return 1;

}
