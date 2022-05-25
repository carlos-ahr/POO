#include <iostream>
using namespace std;
class Circulo{
    double radio;
    public:
    Circulo(double r){radio = r;};
    double circumferencia(){return 2* radio * 3.1416;};
};
int main(){
    Circulo circ(10.0);
    Circulo circ1 = 20;
    Circulo circ2 (20);
    Circulo circ3 = (10); 
    cout<<"Circunferencia: "<<circ.circumferencia()<<endl;
    cout<<"Circunferencia: "<<circ1.circumferencia()<<endl;
    cout<<"Circunferencia: "<<circ2.circumferencia()<<endl;
    cout<<"Circunferencia: "<<circ3.circumferencia()<<endl;
    return 0;
}