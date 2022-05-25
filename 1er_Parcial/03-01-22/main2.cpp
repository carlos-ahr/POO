#include <iostream>
using namespace std;
class Circunferencia{
    double radio;
    public:
    Circunferencia(double r){radio = r;}
    double area(){return (radio * radio) * 3.1416;}
    double perimetro(){return 2 * radio * 3.1416;}
    double volumen(){return 4/3*(3.1416)*(radio * radio * radio);}
};
int main(){
    Circunferencia cir0(10.0);
    cout<<"Area: "<<cir0.area()<<endl<<"Perimetro: "<<cir0.perimetro()<<endl<<"Volumen: "<<cir0.volumen()<<endl;
    return 0;
}