#include "iostream"
#include "conio.h"
using namespace std;
float prom(int&,int&);
int main()
{
    int a;
    int suma=0;
    float promedio=0;
    cout<<endl<<"Ingrese el tamanho de su arreglo: "<<endl; cin>>a;
    int numeros[a];
    cout<<endl<<"Ingrese los numeros: "<<endl;
        for (int i = 0; i < a; i++)
    {
        cin>>numeros[i];
    }
    cout<<"Su arreglo es: "<<endl; 
    for (int i = 0; i < a; i++)
    {
        cout<<numeros[i]<<endl;
    }
    for (int i = 0; i < a; i++)
    {
        //la suma es importante para sacar promedio
        suma+=numeros[i];
    }
    prom(a,suma);
       
    getch();
return 0;
}
float prom(int& numx, int& numy)
{
    float promedio;
  for (int i = 0; i < numx; i++)
        {
        promedio= numy/numx;
        }
        cout<<endl<<"el promedio es: "<<endl<<promedio;
        //el promedio solo da entero
}
