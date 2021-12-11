#include <iostream>
#include "lib.h"

using namespace std;
int funzione(char nomi[10][20],char nome[]);
int main() {
    char lista[10][20]={0};
    char nome[20]={0};
    cout<<"l'utente scelga dieci nomi:"<<endl;

    for(size_t i=0;i<10;i++) cin >> lista[i];

    cout<<"ancora uno:";
    for(int j=0;j<20;j++) nome[j];
    cin >> nome;

    int posizione = funzione(lista ,nome);
    if(posizione>=0){
        cout<< posizione << endl;
    }else{
        cout <<"non presente"<< endl;
    }
}


