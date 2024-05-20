# include <iostream>
#include <cstdlib>
using namespace std;
int main(){

int a=0;
int b=0;
int d= 0;
int u=0;
int l=0;

for (int s = 0; s < 3; s++)
{

 cout <<"-- Piedra_1, Papel_2 o tijera_3--\n";
 cout <<"selccione 1,2,3";
 cin >> a;
 b= 1 + rand()%3;
 cout << b; 

if (a==b){
    cout << " Es empate \n";
    d=d+1;
}else if ((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))
{
    cout << "Ganaste , felicidades :) \n";
    l=l+1;
}else {
    cout << "Perdiste ;(\n";
    u=u+1;
}
}
return 0; 
}