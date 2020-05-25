#include "iostream"
#include "string.h"
using namespace std;

int main(void)
{
 char palabra;
 string imput;
 cout <<"VERIFICAR SI LA PALABRA INGRESADA INICIA Y FINALIZA CON LA MISMA LETRA"<<endl<<endl;

 cout<<"Ingrese una palabra:";
 cin >>imput;

 palabra= imput.length()-1;
 if(imput[0]==imput[palabra]){
     cout<<"La palabra si inicia y finaliza con la misma letra"<<endl;
 }
 else{
     cout <<"La palabra no inicia y finaliza con la misma letra"<<endl;
 }
 
 cout <<endl;



}