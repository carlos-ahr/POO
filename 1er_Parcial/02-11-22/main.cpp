#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct pelicula{
    string titulo;
    int fecha;
}mia, suya;
void imprimirPelicula(pelicula miPelicula);
int main(){
    string miString;
    mia.titulo = "interestelar";
    mia.fecha = 2015;
    cout<<"Introduzca el titulo: ";
    cin>>miString;
    stringstream(miString)>>suya.titulo;
    miString = "";
    cout<<"Introduzca la fecha: ";
    cin>>miString;
    stringstream(miString)>>suya.fecha;
    cout<<mia.titulo<<"\n"<<mia.fecha<<"\n"<<suya.titulo<<"\n"<<suya.fecha<<endl;
}