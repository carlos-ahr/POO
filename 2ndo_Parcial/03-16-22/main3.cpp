#include <iostream>
using namespace std;
class Perros{
private:
    string raza;
public:
    Perros(string _raza){
        raza = _raza;
    }
    string mostrarc(){
        return raza;
    }
};
class Perrohijo : public Perros{
private:
    string id;
public:
    Perrohijo(string _raza, string _id) : Perros(_raza){
        id = _id;
    }
    string mostrar(){
        return id;
    }
};
class Perrotio : public Perros{
private:
    string edad;
public:
    Perrotio(string _raza, string _edad) : Perros(_raza){
        edad = _edad;
    }
    string mostrarp(){
        return edad;
    }
};
int main(){
    Perrohijo p1("Esnauzer", "252403");
    Perrotio pt1("Esnauzer", "5 años");
    cout << "El id del perro hijo es: " << p1.mostrar() << endl << "Y su raza es: " << p1.mostrarc() << endl;
    cout << "El id del perro tio es: " << pt1.mostrarp() << endl << "Y su raza es: " << p1.mostrarc() << endl;
};