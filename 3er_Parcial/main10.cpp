#include <iostream>
#include <string>
using namespace std;
template<class T>
class Datos{
    T nom, bol, prom, dir;
    public:
        Datos(T n, T b, T p, T d){nom = n, bol = b, prom = p, dir = d;}
        void res(){
            cout<<"Nombre: "<<nom<<endl;
            cout<<"Boleta: "<<bol<<endl;
            cout<<"Promedio: "<<prom<<endl;
            cout<<"Direccion: "<<dir<<endl;
        }
};
int main(){
    Datos<string>obj1("Carlos Herrera", "2022301065", "7", "Coatzacoalcos");
    obj1.res();
    return 0;
}
