#include <iostream>
#include <string>
#define pi 3.1416
using namespace std;
int main(){
    float area, radio;
    cout<<"Ingrese el radio: ";
    cin>>radio;
    area = (radio * radio) * pi;
    cout<<"El area es: "<<area;
    return 0;
}