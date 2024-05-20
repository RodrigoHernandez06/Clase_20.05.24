#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int mano=0, pc=0, w=0, l=0, d=0, t=0;
    cout<<"Bienvenido a piedra papel o tijera\n";
    do{
    cout<<"Selecione que opcion quiere \n"
        <<"1 - Piedra\n"
        <<"2 - Papel\n"
        <<"3 - Tijera\n";
    cin>>mano;
    t=time(NULL);
    srand(t);
    pc=rand()%3+1;
    cout<<pc<<"\n";
    
    switch(mano){
            case 1:
            if(pc==1){
                cout<<"Empate";
                d=d+1;
            }
            else if(pc==2){
                cout<<"Ganaste";
                w=w+1;
            }
            else if(pc==3){
                cout<<"Perdiste";
                l=l+1;
            }
            break;
     
            case 2:
            if(pc==1){
                cout<<"Ganaste";
                w=w+1;
            }
            else if(pc==2){
                cout<<"Empate";
                d=d+1;
            }
            else if(pc==3){
                cout<<"Perdiste";
                l=l+1;
            }
            break;
            
            case 3:
            if(pc==1){
                cout<<"Perdiste";
                l=l+1;
            }
            else if(pc==2){
                cout<<"Ganaste";
                w=w+1;
            }
            else if(pc==3){
                cout<<"Empate";
                l=l+1;
            }
            else{
                cout<<"No es un numero valido";
            }
            break;
     }
    }
    while (mano!=0);
    cout<<"GRACIAS POR JUGAR!!!\n"
        <<"El resultado es:\n"
        <<"Victorias: "<<w<<"\n"
        <<"Derrotas: "<<l<<"\n"
        <<"Empates: "<<d<<"\n";
    return 0;
}