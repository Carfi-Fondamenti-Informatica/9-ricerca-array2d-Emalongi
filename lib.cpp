#include"lib.h"
int funzione(char lista[10][20],char nome[20]){
    for(int i=0;i<10;i++){
        bool t=true;
        for (int j=0;j<20;j++){
            if(lista[i][j]!=nome[j]) t=false;
        }
        if(t) return i;
    }
    return -1;

}

