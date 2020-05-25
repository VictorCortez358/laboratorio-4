#include "iostream"

using namespace std;

int main(void)
{
    int n;
    cout<<endl;
    cout <<"VERIFICAR SI UN NUMERO ES PAR O IMPAR"<<endl<<endl;

    cout<<"Digite un numero:";
    cin >> n;

    if(n%2 ==0)
    {
        cout <<"El numero " << n << " es par"<<endl;

    }
    else
    {
        cout <<"El numero " << n << " es impar"<<endl;
    }
    cout<<endl;

    
}