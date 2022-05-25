#include <iostream>
using namespace std;
template<class T, int N>
T Cuadrado(T l){
    return l*N;
}
template<class T, int N>
T Triangulo(T val){
    return(val*N)/2; 
}
template<class T, int N, int G>
T Hexagono(T val){
    return((N*val)*G)/2;
}
template<class T, int N>
T Rectangulo(T val){
    return val*N;
}
template<class T, int N, int G>
T Pentagono(T val){
    return((N*val)*G)/2;
}
int main(){
    cout<<"IPN PROYECTO"<<endl;
    cout<<"HRCA"<<endl;
    cout<<"Area del cuadrado: "<<Cuadrado<int, 34>(10)<<endl;
    cout<<"Area del triangulo: "<<Triangulo<int, 2>(10)<<endl;
    cout<<"Area del hexagono: "<<Hexagono<int, 2, 43>(19)<<endl;
    cout<<"Area del rectangulo: "<<Rectangulo<int,67>(10)<<endl;
    cout<<"Area del pentagono: "<<Pentagono<int,2,28>(10)<<endl;
    return 0;
}
