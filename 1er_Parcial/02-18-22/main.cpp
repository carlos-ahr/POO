#include <iostream>
using namespace std;
class poligono{
    int perimetro, apotema;
    public:
    void calcular(int, int);
    int area(){return perimetro * apotema;};
};
void poligono::calcular(int p, int a){
    perimetro = p;
    apotema = a;
}
int main(){
    poligono pol;
    pol.calcular(67, 6);
    cout<<"El area es: "<<pol.area();
    return 0;
}