#include <iostream>
using namespace std;
int main(){

    int h,m,s;
    cout<<"Digite la hora: \n";
    cin>>h;
    cout<<"Digite los minutos: \n";
    cin>>m;
    cout<<"Digite los segundos: \n";
    cin>>s;
    if((h>=0 && h<=23)&&(m>=0 &&m<=59)&&(s>=0&&s<=59)){

{
s++;
if(s==60){
    s=00;
    m++;
}
else if(m==60){
    m=00;
    h++;
}
else if(h==24){
    h=00;
}
cout<<"Un segundo despues de la hora digitada es: "<<h<<" :"<<m<<" :"<<s;
}
}else{
    cout<<"Digite una hora correcta";

}
    }