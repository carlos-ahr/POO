#include <iostream>
using namespace std;
class poligono{
    public:
    int per, apotema, lado, numLados;
    void calcularperimetroimetro(int, int);
    int perimetro(){return lado * numLados;};
    void calcularArea(int,int);
    int area(){return per * apotema;};
};
void poligono::calcularperimetroimetro(int l, int nl){
    lado = l;
    numLados = nl;
}
void poligono::calcularArea(int p, int a){
    per = p;
    apotema = a;
}
int main(){
    poligono pol;
    pol.calcularperimetroimetro(10, 6);
    pol.calcularArea(10,2);
    cout<<"El perimetro es: "<<pol.perimetro()<<endl<<"El area es: "<<pol.area();
    return 0;
}