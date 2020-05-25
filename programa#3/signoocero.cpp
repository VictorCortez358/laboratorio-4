#include "iostream"

using namespace std;
int main(void)
{
    int n;
    cout<<"DETERMINAR SI UN NUMERO ES POSITIVO,NEGATIVO O CERO"<<endl<<endl;

    cout <<"Digite un numero:";
    cin >> n;

    if(n<0)
    {
        
        cout <<"El numero "<< n << " es negativo"<<endl;

    }
    else if(n==0)
    {
        cout << "El numero "<< n << " es cero"<<endl;
    }
    else
    {
        cout << "El numero "<< n << " es positivo"<<endl;
    }
    
    
    cout << endl;

    
 }
    

   