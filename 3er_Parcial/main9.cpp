#include <iostream>
#include <string>
using namespace std;
template<class T>
class Datos{
    public:
        Datos(T b, T p, T e){
            cout<<"Boleta: "<<b<<endl;
            cout<<"Promedio: "<<p<<endl;
            cout<<"Edad: "<<e<<endl;
        }
};
template<>
class Datos<string>{
    public:
    Datos(string n, string a){
    cout<<"Nombre: "<<n<<endl;
    cout<<"Apellido: "<<a<<endl;
    }
};
int main(){
    Datos<string>datos0("Carlos", "Herrera");
    Datos<int>datos1(2022301065, 7, 18);
    return 0;
}
