#include <iostream>
using namespace std;
class Figura{
    int lado, numLados, per, apotema;
    public:
    Figura(int l, int nl, int p, int a){lado = l, numLados = nl, per = p, apotema = a;}
    int perimetro(){return lado * numLados;}
    int area(){return per * apotema;}
};
int main(){
    Figura pentagono(10, 5, 50, 6);
    cout<<"Perimetro: "<<pentagono.perimetro()<<endl<<"Area: "<<pentagono.area();
}