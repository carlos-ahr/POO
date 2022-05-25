/*
* 29/03/22
*/
#include <iostream>
#include <string>
using namespace std;
template<class T>
class Datos{
T nom, dir, tel, bol, prom;
public:
    Datos(T n, T d, T t, T b, T p){nom = n, dir = d, tel = t, bol = b, prom = p;}
    void res(){
        cout<<"Nombre: "<<nom<<endl;
        cout<<"Direccion: "<<dir<<endl;
        cout<<"Telefono: "<<tel<<endl;
        cout<<"Boleta: "<<bol<<endl;
        cout<<"Promedio: "<<prom<<endl;
        }
};
int main(){
    Datos<string>obj("Carlos", "Coatzacoalcos", "9212035140", "2022301065", "8");
    obj.res();
    return 0;
}
