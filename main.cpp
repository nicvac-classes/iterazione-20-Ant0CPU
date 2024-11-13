#include <iostream>
using namespace std;

int main() {
    int b, bA, h, somma, rimanente, hp;

    //Inizializzione variabili
    bA=0;
    somma=0;
    h=0;

    cout<<"Inserire il numero di blocchi"<<endl;
    cin>>b;

    while (somma<b)
    {
        bA=bA+1;

        somma=somma+bA;

        h=bA
    }

    //Verifica se i blocchi bastano

    if (somma>b)
    {
        cout<<"Non ci sono abbastanza blocchi"<<endl;

        h=h-1;
    }

    cout<<"L'altezza è "<<h<<endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
