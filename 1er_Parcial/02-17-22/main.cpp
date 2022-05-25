#include <iostream>
using namespace std;
class poligono{
    public:
    int n, l;
    void calcular(int, int);
    int perimetro(){return n * l;}
};
void poligono::calcular(int lado, int numLados){
    n = numLados;
    l = lado;
}
int main()
{
    poligono pol;
    pol.calcular(5,10);
    cout<<"El area es: "<<pol.perimetro();
    return 0;
}