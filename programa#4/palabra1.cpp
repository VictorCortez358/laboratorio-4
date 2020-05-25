#include "iostream"
#include "string.h"


using namespace std;

int main(void)
{
    char lenght;
    string input;
    cout<<"VERIFICAR SI LA PALABRA ES MAYOR A 1O CARACTERES O NO Y SI SU LONGITUD ES PAR O IMPAR"<<endl<<endl;
    cout<<"Digite una palabra:";
    cin >>input;
    lenght= input.length();
    

    if(lenght>9){
        cout<<"La palabra contiene mas de 10 caracteres"<<endl;
    }
    else{
        cout <<"La palabra contiene menos de 10 caracteres"<<endl;
    }

    bool condition = (lenght%2);
    if(condition)
    {
        cout <<"La longitud es impar";
    }
    else{
        cout <<"La longitud es par";
    }
    cout<<endl;
    

    
}