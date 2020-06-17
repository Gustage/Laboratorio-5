#include <iostream>
using namespace std;

int mcd(int n1, int n2, int r);
int main()
{
    int n1,n2,r;
    cout<<"Calcular el mcd de dos numeros, digite el numero mayor: \n";
    cin>>n1;
    cout<<"Digite el numero menor: \n";
    cin>>n2;
    cout<<"El mcd es: "<<mcd(n1,n2,r)<<endl;
}
int mcd(int n1, int n2, int r){
    do{
        r=n1%n2;
        if(r!=0){
            n1=n2;
            n2=r;
        }
    }while(r!=0);
    return n2;
}