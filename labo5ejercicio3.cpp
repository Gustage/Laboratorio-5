#include <iostream>
using namespace std;
bool bisiesto (int anio){
    if((anio%400==0)||(anio%4==0)&&(anio%100!=0)){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int anio;
    bool resp=0;
    cout<<"Digite un anio: \n";
    cin>>anio;
    resp=bisiesto(anio);
    if(resp==true){
        cout<<"Es bisiesto";
    }
    else{
        cout<<"No es bisiesto";
    }
    return 0;
}