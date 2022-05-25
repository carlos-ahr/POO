#include <iostream>
#include <string>
using namespace std;
class Figura{
    int numLados;
    double longLado, per, apotema, altura;
    string tipo;
    public:
    Figura();
    Figura(double, int, double, double, double);
    double perimetro(void);
    double area(void);
};
Figura::Figura(){
    longLado = 0;
    numLados =0;
    per = 0;
    apotema = 0;
    altura = 0;
}
Figura::Figura(double l, int nl, double p, double a, double h){
    longLado = l;
    numLados = nl;
    per = p;
    apotema = a;
    altura = h;
    if (nl == 3){
        tipo = "triangulo";
    }
    else if (nl == 4){
        tipo = "cuadrado";
    }
    else if (nl > 4){
        tipo = "poligono";
    }
    else{
        tipo = "invalido";
    }
}
double Figura::perimetro(void){
    if (tipo == "invalido"){
        return 0;
    }
    else{
        return longLado * numLados;
    }
}
double Figura::area(void){
    if (tipo == "triangulo"){
        return (longLado * altura) / 2;
    }
    else if (tipo == "cuadrado"){
        return longLado * longLado;
    }
    else if (tipo == "poligono"){
        return per * apotema;
    }
    else{
        return 0;
    }
}
int main(){
        double l, p, a, h;
    int nl;
    cout<<"Longitud del lado: " << endl;
    cin>>l;
    cout<<"Numero de lados: " << endl;
    cin>>nl;
    cout<<"Perimetro: " << endl;
    cin>>p;
    cout<<"Apotema: " << endl;
    cin>>a;
    cout<<"Altura: " << endl;
    cin>>h;
    Figura figura(l, nl, p, a, h);
    Figura triagulo (3, 3, 9, 0, 4);
    Figura cuadrado (2, 4, 8, 0, 2);
    Figura pentagono (3, 5, 15, 4, 8);
    cout<<"Figura:"<<endl<<"Perimetro: "<<figura.perimetro()<<endl<<"Area: "<<figura.area()<<endl<<endl;
    cout<<"TRIANGULO:"<<endl<<"Perimetro: "<<triagulo.perimetro()<<endl<<"Area: "<<triagulo.area()<<endl<<endl;
    cout<<"CUADRADO:"<<endl<<"Perimetro: "<<cuadrado.perimetro()<<endl<<"Area: "<<cuadrado.area()<<endl<<endl;
    cout<<"POLIGONO:"<<endl<<"Perimetro: "<<pentagono.perimetro()<<endl<<"Area: "<<pentagono.area()<<endl<<endl;
    return 0;
}