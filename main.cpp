#include <iostream>
#include <string>
using namespace std;
template<class T>
class Calculadora{
    public:
    virtual T res(){return 0;}
};
template<class T>
class Suma: public Calculadora<T>{
public:
    T x, y;
    Suma(T _x, T _y){x = _x, y = _y;}
    ~Suma(){cout<<"Limpiando y saliendo..."<<endl;}
    T res(){return x+y;}
};
template<class T>
class Resta: public Calculadora<T>{
T x, y;
public:
    Resta(T _x, T _y){x = _x, y = _y;}
    ~Resta(){cout<<"Limpiando y saliendo..."<<endl;}
    T res(){return x-y;}
};
template<class T>
class Multiplicacion: public Calculadora<T>{
T x, y;
public:
    Multiplicacion(T _x, T _y){x = _x, y = _y;}
    ~Multiplicacion(){cout<<"Limpiando y saliendo..."<<endl;}
    T res(){return x*y;}
};
template<class T>
class Division: public Calculadora<T>{
T x, y;
public:
    Division(T _x, T _y){x = _x, y = _y;}
    ~Division(){cout<<"Limpiando y saliendo..."<<endl;}
    T res(){return x/y;}
};
int main(){
    int tipo, op; 
    cout<<"Ingrese el tipo de datos:"<<endl;
    cout<<" 1) Entero"<<endl;
    cout<<" 2) Decimal"<<endl;
    cin>>tipo;
    if(tipo == 1){
        cout<<"Que tipo de operacion desea calcular?"<<endl;
        cout<<" 1) Suma"<<endl;
        cout<<" 2) Resta"<<endl;
        cout<<" 3) Multiplicacion"<<endl;
        cout<<" 4) Division"<<endl;
        cin>>op;
        if(op == 1){
            int x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Suma<int>obj(x,y);    
            cout<<"Resultado de la suma: "<<obj.res()<<endl;
        }
        else if (op == 2) {
            int x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Resta<int>obj(x,y);    
            cout<<"Resultado de la resta: "<<obj.res()<<endl;
        }
        else if (op == 3) {
            int x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Multiplicacion<int>obj(x,y);    
            cout<<"Resultado de la multiplicacion: "<<obj.res()<<endl;
        }
        else if (op == 4) {
            int x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Division<int>obj(x,y);    
            cout<<"Resultado de la divison: "<<obj.res()<<endl;
        }
        else{
            cout<<"Respuesta invalida."<<endl<<"Saliendo...";
        }
    }
    else if (tipo == 2) {
        cout<<"Que tipo de operacion desea calcular?"<<endl;
        cout<<" 1) Suma"<<endl;
        cout<<" 2) Resta"<<endl;
        cout<<" 3) Multiplicacion"<<endl;
        cout<<" 4) Division"<<endl;
        cin>>op;
        if(op == 1){
            float x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Suma<float>obj(x,y);    
            cout<<"Resultado de la suma: "<<obj.res()<<endl;
        }
        else if (op == 2) {
            float x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Resta<float>obj(x,y);    
            cout<<"Resultado de la resta: "<<obj.res()<<endl;
        }
        else if (op == 3) {
            float x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Multiplicacion<float>obj(x,y);    
            cout<<"Resultado de la multiplicacion: "<<obj.res()<<endl;
        }
        else if (op == 4) {
            float x, y;
            cout<<"Ingrese el primer valor: ";
            cin>>x;
            cout<<"Ingrese el segundo valor: ";
            cin>>y;
            Division<float>obj(x,y);    
            cout<<"Resultado de la divison: "<<obj.res()<<endl;
        }
        else{
            cout<<"Respuesta invalida."<<endl<<"Saliendo...";
        }          
    }
    return 0;
}
