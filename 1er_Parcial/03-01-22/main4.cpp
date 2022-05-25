#include<iostream>
using namespace std;
class Rec{
    int base, altura, ancho;
    public:
    Rec(int b, int h, int a){base = b, altura = h, ancho = a;}
    ~Rec(){cout << "Objeto destuido \n";}
    int area(){return base * altura;}
    int perimetro(){return 2 * (base) + 2 * (altura);}
    int volumen(){return base * altura * ancho;}
};
int main(){
    Rec obj(2,3,4);
    Rec *foo, *bar, *baz;
    foo = &obj;
    bar = new Rec(1, 2, 3);
    baz = new Rec[2]{{4, 5, 6},{7, 8, 9}};
    cout<<"AREAS: "<<endl<<"Foo: "<<foo->area()<<"\t"<<"Bar: "<<bar->area()<<"\t"<<"Baz: "<<baz->area()<<endl;
    cout<<"PERIMETRO: "<<endl<<"Foo: "<<foo->perimetro()<<"\t"<<"Bar: "<<bar->perimetro()<<"\t"<<"Baz: "<<baz->perimetro()<<endl;
    cout<<"VOLUMEN: "<<endl<<"Foo: "<<foo->volumen()<<"\t"<<"Bar: "<<bar->volumen()<<"\t"<<"Baz: "<<baz->volumen()<<endl;
    foo->~Rec();
    bar->~Rec();
    baz->~Rec();
    return 0;
}
