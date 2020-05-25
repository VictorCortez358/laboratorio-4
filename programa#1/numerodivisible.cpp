#include "iostream"

using namespace std;

int main(void)
{
 
 int n,d,x;
    cout << "DETERMINAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO NUMERO"<<endl<<endl;
    cout<<"Digite un numero:";
    cin >> n;
    cout <<"Digite otro numero:";
    cin >> d;
    x = n%d;

    if (x==0)
    {
        cout<<" el numero "<< x <<" si es divisible "<<endl;

    }
    else 
    
    {
       cout <<" el numero "<< x <<" no es divisible "<<endl;
    }
    cout << endl;
    
    


}