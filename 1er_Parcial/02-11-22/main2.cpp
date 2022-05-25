
#include <iostream>
using namespace std;
class rectangulo{
    int altura, largo, ancho;
    public:
    void mostrar(int, int, int);
    int volumen(){return altura * largo * ancho;}
};
void rectangulo::mostrar(int h, int l, int w){
    altura = h;
    largo = h;
    ancho = w;
}
int main(){
    rectangulo rec0, rec1, rec2;
    rec0.mostrar(4,4,4);
    rec1.mostrar(5,5,5);
    rec2.mostrar(6,6,6);    
    cout<<"El volumen 0 es: "<<rec0.volumen()<<endl<<"El volumen 1 es: "<<rec1.volumen()<<endl<<"El volumen 2 es: "<<rec2.volumen();
    return 0;
}