#include<iostream>
using namespace std;
class Rec{
    int base, altura, ancho;
    public:
    Rec(int b, int h, int a){base = b, altura = h, ancho = a;}
    ~Rec(){cout << "Objeto destuido";}
    int area(){return base * altura;}
    int perimetro(){return 2 * (base) + 2 * (altura);}
    int volumen(){return base * altura * ancho;}
};
int main(){
    Rec *rec;
    rec = new Rec(2, 4, 6);
    cout<<"Area: "<<rec->area()<<endl<<"Perimetro: "<<rec->perimetro()<<endl<<"Volumen: "<<rec->volumen()<<endl;
    delete rec;
    return 0;
}
