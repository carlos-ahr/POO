#include<iostream>
#include<cstdlib>
#include<cmath>
#define PI 3.1416
using namespace std;
template<class circulo>
circulo areacir(circulo r){
	return PI*(pow(r, 2));}
template<class triangulo>
triangulo areatri(triangulo b, triangulo h){
    return (b*h/2);}
template <class cuadrado>
cuadrado areacua(cuadrado l){
	return (pow(l,2));}
template <class trapecio>
trapecio areatra(trapecio b, trapecio B, trapecio h){
	return (B+b)*h/2;}
template <class rombo>
rombo arearom(rombo D, rombo d){
	return (D*d/2);}
int main(){
	float radio=5, btri=4, htri=3, lcua=6, btra=6, Btra=10, htra=3, Drom=8, drom=6, arearombo, areacirculo, areacuadrado, areatrapecio, areatriangulo;
	areacirculo=areacir(radio);
	areatriangulo=areatri(btri, htri);
	areacuadrado=areacua(lcua);
	areatrapecio=areatra(btra, Btra, htra);
	arearombo=arearom(Drom, drom);
	cout<<"El area del circulo es: "<<areacirculo<<" cm^2"<<endl;
	cout<<"El area del triangulo es: "<<areatriangulo<<" cm^2"<<endl;
	cout<<"El area del cuadrado es: "<<areacuadrado<<" cm^2"<<endl;
	cout<<"El area del trapecio es: "<<areatrapecio<<" cm^2"<<endl;
	cout<<"El area del rombo es: "<<arearombo<<" cm^2"<<endl;
	system ("pause"); return 0;}
