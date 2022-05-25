#include <iostream>
using namespace std;
class triangulo{
    public:
    int lado, altura, per;
    void calcularPerimetro(int);
    int perimetro(){return lado * 3;};
    void calcularArea(int , int);
    int area(){return (lado * altura)/2;};
};
void triangulo::calcularPerimetro(int l){
    lado = l;
}
void triangulo::calcularArea(int l, int h){
    lado = l;
    altura = h;
}
int main(){
    triangulo tri0;
    tri0.calcularPerimetro(3);
    tri0.calcularArea(3, 2);
    cout<<"El perimetro del triangulo es: "<<tri0.perimetro()<<endl<<"El area del triangulo es: "<<tri0.area()<<endl;
    return 0;
}