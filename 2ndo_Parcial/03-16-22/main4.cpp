#include <iostream>
#include <math.h>
using namespace std;
class Circulos{
protected:
    double radio, altura;
public:
    double pi = 3.141592;
    Circulos(double r, double h) : radio(r), altura(h) {}
};
class Salida{
public:
    static double imprimir(double i);
};
double Salida::imprimir(double i){
    cout << i << endl;
}
class Cono : public Circulos, public Salida{
public:
    Cono(int r, int h) : Circulos(r, h) {}
    double volumen() { return (pow(radio, 2) * altura * pi) / 3; }
};
class Cilindro : public Circulos, public Salida{
public:
    Cilindro(int r, int h) : Circulos(r, h) {}
    double volumen() { return pow(radio, 2) * altura * pi; }
};
int main(){
    Cono co(3, 5);
    Cilindro cili(3, 5);
    co.imprimir(co.volumen());
    Cilindro::imprimir(cili.volumen());
    return 0;
}