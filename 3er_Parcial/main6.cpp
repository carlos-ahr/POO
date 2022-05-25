#include <iostream>
#include <string>
using namespace std;
template<class T>
class datos{
public:
    datos(T b, T p, T e){
        cout<<"Boleta: "<<b<<endl;
        cout<<"Promedio: "<<p<<endl;
        cout<<"Edad: "<<e<<endl;
    }
};
template<>
class datos<string>{
public:
    datos(string n, string a){cout<<"Nombre: "<<n<<endl<<"Apellido: "<<a<<endl;}
};
int main(){
    datos<string> obj1("Carlos", "Herrera");
    datos<long> obj2(2022301056, 8, 18);
    return 0;
}
