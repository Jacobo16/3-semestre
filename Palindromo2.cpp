#include<iostream>
#include<string.h>
int espalindromo(char palabra[], int inicio, int fin);
using namespace std;
int main ()
{
   char palabra[]="anita lava la tina";
   int largo;
   largo=strlen(palabra);
   int respuesta;



    respuesta=espalindromo(palabra,0,largo-1);

    if(respuesta==1)
    {
        cout<<"Es palindromo"<<endl;
    }
    else
    {
        cout<<"No es palindromo"<<endl;
    }


   return 0;


}

int espalindromo(char palabra[], int inicio, int fin)
{
    if(inicio<fin)
    {
        if(palabra[inicio]==' ')
            return espalindromo(palabra, ++inicio, fin);

        else if(palabra[fin]==' ')
            return espalindromo(palabra,inicio, --fin);

        else if(palabra[inicio]==palabra[fin])

            return espalindromo(palabra, ++inicio, --fin);

        else

            return 0;

    }
    else

        return 1;
}
