/*
 *  INSTITUTO POLITECNICO NACIONAL
 *  ESCUELA SUPERIOR DE INGENIERIA MECANICA Y ELECTRICA UNIDAD ZACATENCO
 *  PROGRAMACION ORIENTADA A OBJETOS
 *  "PROYECTO FINAL"
 *  2AM2
 *  HERRERA RANGEL CARLOS ALBERTO
 *  2022301065
 */

 //   L I B R E R I A S   //
#include <iostream>

//   C O N F I G U R A C I O N   //
using namespace std;

//   C L A S E S   B A S E   //
// CLASE PARA POLIGONOS
template <class T>
class Poligono
{
public:
    // INICIALIZACION DEL METODO PARA PERIMETROS
    virtual T perimetro()
    {
        return 0;
    };
    // INICIALIZACION DEL METODO PARA AREAS
    virtual T area()
    {
        return 0;
    };
};
// CLASE PARA PRISMAS
template <class T>
class Prisma
{
public:
    // INICIALIZACION DEL METODO PARA VOLUMENES
    virtual T volumen()
    {
        return 0;
    };
};

//   P O L I G O N O S   //
// CLASE DE UN TRIANGULO
template <class T>
class Triangulo : public Poligono<T>
{
    T base, altura;

public:
    // CONSTRUCTOR DE UN TRIANGULO
    Triangulo(T b, T h)
    {
        base = b;
        altura = h;
        cout << "[+] Triangulo creado.\n";
    }
    // DESTRUCTOR DE UN TRIANGULO
    ~Triangulo()
    {
        cout << "[-]Triangulo eliminado.\n";
    }
    // DEFINICION DE METODO PERIMETRO PARA EL TRIANGULO
    virtual T perimetro()
    {
        return base * 3;
    }
    // DEFINICION DEL METODO AREA PARA EL TRIANGULO
    virtual T area()
    {
        return (base * altura) / 2;
    }
};
// CLASE DE UN CUADRADO
template <class T>
class Cuadrado : public Poligono<T>
{
    T lado;

public:
    // CONSTRUCTOR DEL CUADRADO
    Cuadrado(T l)
    {
        lado = l;
        cout << "[+]Cuadrado creado.\n";
    }
    // DESTRUCTOR DE UN CUADRADO
    ~Cuadrado()
    {
        cout << "[-]Cuadrado eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL CUADRADO
    T perimetro()
    {
        return lado * 4;
    }
    // DEFINICION DEL METODO AREA PARA EL CUADRADO
    T area()
    {
        return lado * lado;
    }
};
// CLASE DE UN RECTANGULO
template <class T>
class Rectangulo : public Poligono<T>
{
    T base, altura;

public:
    // CONSTRUCTOR DE UN RECTANGULO
    Rectangulo(T b, T h)
    {
        base = b;
        altura = h;
        cout << "[+]Rectangulo creado.\n";
    }
    // DESTRUCTOR DE UN RECTANGULO
    ~Rectangulo()
    {
        cout << "[-]Rectangulo eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL RECTANGULO
    T perimetro()
    {
        return (base * 2) + (altura * 2);
    }
    // DEFINICION DEL METODO AREA PARA EL RECTANGULO
    T area()
    {
        return base * altura;
    }
};
// CLASE DE UN PENTAGONO
template <class T>
class Pentagono : public Poligono<T>
{
    T base, apotema;

public:
    // CONSTRUCTOR DE UN PENTAGONO
    Pentagono(T b, T a)
    {
        base = b;
        apotema = a;
        cout << "[+]Pentagono creado.\n";
    }
    // DESTRUCTOR DE UN PENTAGONO
    ~Pentagono()
    {
        cout << "[-]Pentagono eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL PENTAGONO
    T perimetro()
    {
        return base * 5;
    }
    // DEFINICION DEL METODO AREA PARA EL PENTAGONO
    T area()
    {
        return ((base * 5) * apotema) / 2;
    }
};
// CLASE DE UN HEXAGONO
template <class T>
class Hexagono : public Poligono<T>
{
    T base, apotema;

public:
    // CONSTRUCTOR DE UN HEXAGONO
    Hexagono(T b, T a)
    {
        base = b;
        apotema = a;
        cout << "[+]Hexagono creado.\n";
    }
    // DESTRUCTOR DE UN HEXAGONO
    ~Hexagono()
    {
        cout << "[-]Hexagono eliminado.\n";
    }
    // DEFINICION DE METODO PERIMETRO PARA EL PENTAGONO
    T perimetro()
    {
        return base * 6;
    }
    // DEFINICION DEL METODO AREA PARA EL PENTAGONO
    T area()
    {
        return ((base * 6) * apotema) / 2;
    }
};
// CLASE DE UN HEPTAGONO
template <class T>
class Heptagono : public Poligono<T>
{
    T base, apotema;

public:
    // CONSTRUCTOR DE UN HEPTAGONO
    Heptagono(T b, T a)
    {
        base = b;
        apotema = a;
        cout << "[+]Heptagono creado.\n";
    }
    // DESTRUCTOR DE UN HEPTAGONO
    ~Heptagono()
    {
        cout << "[-]Heptagono eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL HEPTAGONO
    T perimetro()
    {
        return base * 7;
    }
    // DEFINICION DEL METODO AREA PARA EL HEPTAGONO
    T area()
    {
        return ((base * 7) * apotema) / 2;
    }
};
// CLASE DE UN ROMBO
template <class T>
class Rombo : public Poligono<T>
{
    T dMayor, dMenor, lado;

public:
    // CONSTRUCTOR DE UN ROMBO
    Rombo(T dM, T dm, T l)
    {
        dMayor = dM;
        dMenor = dm;
        lado = l;
        cout << "[+]Rombo creado.\n";
    }
    // DESTRUCTOR DE UN ROMBO
    ~Rombo()
    {
        cout << "[-]Rombo eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL ROMBO
    T perimetro()
    {
        return lado * 4;
    }
    // DEFINICION DEL METODO AREA PARA EL ROMBO
    T area()
    {
        return (dMayor * dMenor) / 2;
    }
};
// CLASE DE UN TRAPECIO
template <class T>
class Trapecio : public Poligono<T>
{
    T bMayor, bMenor, altura, longLados;

public:
    // CONSTRUCTOR DE UN TRAPECIO
    Trapecio(T B, T b, T h, T l)
    {
        bMenor = B;
        bMenor = b;
        altura = h;
        longLados = l;
        cout << "[+]Trapecio creado.\n";
    }
    // DESTRUCTOR DE UN TRAPECIO
    ~Trapecio()
    {
        cout << "[-]Trapecio eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL TRAPECIO
    T perimetro()
    {
        return (longLados * 2) + bMayor + bMenor;
    }
    // DEFINICION DEL METODO AREA PARA EL TRAPECIO
    T area()
    {
        return ((bMayor + bMenor) * altura) / 2;
    }
};
// CLASE DE UN CIRCULO
template <class T>
class Circulo : public Poligono<T>
{
    T radio;

public:
    // CONSTRUCTOR DE UN CIRCULO
    Circulo(T r)
    {
        radio = r;
        cout << "[+]Circulo creado.\n";
    }
    // DESTRUCTOR DE UN CIRCULO
    ~Circulo()
    {
        cout << "[-]Circulo eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA EL CIRCULO
    T perimetro()
    {
        return 2 * 3.1416 * radio;
    }
    // DEFINICION DEL METODO AREA PARA EL CIRCULO
    T area()
    {
        return (radio * radio) * 3.1416;
    }
};

//   P R I S M A S   //
// CLASE DE UN PRISMA TRIANGULAR
template <class T>
class PrismaTriangular : public Poligono<T>, Prisma<T>
{
    T base, altura, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA TRIANGULAR
    PrismaTriangular(T b, T h, T a)
    {
        base = b;
        altura = h;
        ancho = a;
        cout << "[+]Prisma Triangular creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA TRIANGULAR
    ~PrismaTriangular()
    {
        cout << "[-]Prisma Triangular eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA TRIANGULAR
    T perimetro()
    {
        return base * 3;
    }
    // DEFINICION DEL METODO ALTURA PARA LA BASE DEL PRISMA TRIANGULAR
    T area()
    {
        return (base * altura) / 2;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA TRIANGULAR
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA CUADRANGULAR
template <class T>
class PrismaCuadrangular : public Poligono<T>, Prisma<T>
{
    T lado, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA CUADRANGULAR
    PrismaCuadrangular(T l, T a)
    {
        lado = l;
        ancho = a;
        cout << "[+]Prisma Cuadrangular creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA CUADRANGULAR
    ~PrismaCuadrangular()
    {
        cout << "[-]Prisma Cuadrangular eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRIMSA CUADRANGULAR
    T perimetro()
    {
        return lado * 4;
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL PRISMA CUADRANGULAR
    T area()
    {
        return lado * lado;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA CUADRANGULAR
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA RECTANGULAR
template <class T>
class PrismaRectangular : public Poligono<T>, Prisma<T>
{
    T base, altura, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA RECTANGULAR
    PrismaRectangular(T b, T h, T a)
    {
        base = b;
        altura = h;
        ancho = a;
        cout << "[+]Prisma Rectangular creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA RECTANGULAR
    ~PrismaRectangular()
    {
        cout << "[-]Prisma Rectangular creado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA RECTANGULAR
    T perimetro()
    {
        return (base * 2) + (altura * 2);
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL PRISMA RECTANGULAR
    T area()
    {
        return base * altura;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA RECTANGULAR
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA PENTAGONAL
template <class T>
class PrismaPentagonal : public Poligono<T>, Prisma<T>
{
    T base, apotema, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA PENTAGONAL
    PrismaPentagonal(T b, T ap, T an)
    {
        base = b;
        apotema = ap;
        ancho = an;
        cout << "[+]Prisma Pentagonal creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA PENTAGONAL
    ~PrismaPentagonal()
    {
        cout << "[-]Prisma Pentagonal eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA PENTAGONAL
    T perimetro()
    {
        return base * 5;
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL PRISMA PENTAGONAL
    T area()
    {
        return ((base * 5) * apotema) / 2;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA PENTAGONAL
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA HEXAGONAL
template <class T>
class PrismaHexagonal : public Poligono<T>, Prisma<T>
{
    T base, apotema, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA HEXAGONAL
    PrismaHexagonal(T b, T ap, T an)
    {
        base = b;
        apotema = ap;
        ancho = an;
        cout << "[+]Prisma Hexagonal creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA HEXAGONAL
    ~PrismaHexagonal()
    {
        cout << "[-]Prisma Hexagonal eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA HEXAGONAL
    T perimetro()
    {
        return base * 6;
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL PRISMA HEXAGONAL
    T area()
    {
        return ((base * 6) * apotema) / 2;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA HEXAGONAL
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA HEPTAGONAL
template <class T>
class PrismaHeptagonal : public Poligono<T>, Prisma<T>
{
    T base, apotema, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA HEPTAGONAL
    PrismaHeptagonal(T b, T ap, T an)
    {
        base = b;
        apotema = ap;
        ancho = an;
        cout << "[+]Prisma Heptagonal creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA HEPTAGONAL
    ~PrismaHeptagonal()
    {
        cout << "[-]Prisma Heptagonal eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA HEPTAGONAL
    T perimetro()
    {
        return base * 7;
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL PRISMA HEPTAGONAL
    T area()
    {
        return ((base * 7) * 5) / 2;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA HEPTAGONAL
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA ROMBOIDAL
template <class T>
class PrismaRomboidal : public Poligono<T>, Prisma<T>
{
    T dMayor, dMenor, lado, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA ROMBOIDAL
    PrismaRomboidal(T D, T d, T l, T a)
    {
        dMayor = D;
        dMenor = d;
        lado = l;
        ancho = a;
        cout << "[+]Prisma Romboidal creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA ROMBOIDAL
    ~PrismaRomboidal()
    {
        cout << "[-]Prisma Romboidal eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA ROMBOIDAL
    T perimetro()
    {
        return lado * 4;
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL PRISMA ROMBOIDAL
    T area()
    {
        return (dMayor * dMenor) / 2;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA ROMBOIDAL
    T volumen()
    {
        return this->area() * ancho;
    }
};
// CLASE DE UN PRISMA TRAPEZOIDAL
template <class T>
class PrismaTrapezoidal : public Poligono<T>, Prisma<T>
{
    T bMayor, bMenor, altura, longLados, ancho;

public:
    // CONSTRUCTOR DE UN PRISMA TRAPEZOIDAL
    PrismaTrapezoidal(T B, T b, T h, T l, T a)
    {
        bMayor = B;
        bMenor = b;
        altura = h;
        longLados = l;
        a = ancho;
        cout << "[+]Prisma trapezoidal creado.\n";
    }
    // DESTRUCTOR DE UN PRISMA TRAPEZOIDAL
    ~PrismaTrapezoidal()
    {
        cout << "[-]Prisma Trapezoidal eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL PRISMA TRAPEZOIDAL
    T perimetro()
    {
        return (longLados * 2) + bMayor + bMenor;
    }
    // DEFINICION DEL METODO PARA LA BASE DEL PRISMA TRAPEZOIDAL
    T area()
    {
        return ((bMayor + bMenor) * altura) / 2;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL PRISMA TRAPEZOIDAL
    T volumen()
    {
        return this->area() * ancho;
    }
};
template <class T>
class Cilindro : public Poligono<T>, Prisma<T>
{
    T radio, ancho;

public:
    // CONSTRUCTOR DE UN CILINDRO
    Cilindro(T r, T a)
    {
        radio = r;
        ancho = a;
        cout << "[+]Cilindro creado.\n";
    }
    // DESTRUCTOR DE UN CIRCULO
    ~Cilindro()
    {
        cout << "[-]Cilindro eliminado.\n";
    }
    // DEFINICION DEL METODO PERIMETRO PARA LA BASE DEL CILINDRO
    T perimetro()
    {
        return 2 * 3.1416 * radio;
    }
    // DEFINICION DEL METODO AREA PARA LA BASE DEL CILINDRO
    T area()
    {
        return (radio * radio) * 3.1416;
    }
    // DEFINICION DEL METODO VOLUMEN PARA EL CILINDRO
    T volumen()
    {
        return this->area() * ancho;
    }
};

// MAIN
int main()
{
    cout << "INSTITUTO POLITECNICO NACIONAL\n";
    cout << "ESCUELA SUPERIOR DE INGENIERIA MECANICA Y ELECTRICA UNIDAD ZACATENCO\n";
    cout << "PROGRAMACION ORIENTADA A OBJETOS\n";
    cout << "\"PROYECTO FINAL\"\n";
    cout << "2AM2\n";
    cout << "HERRERA RANGEL CARLOS ALBERTO\n";
    cout << "2022301065\n\n";

    int res1, res2, res3;
    bool status = true;
    while (status)
    {
        cout << "Que desea calcular?\n 1)POLIGONO\n 2)PRISMA\n";
        cin >> res1;
        if (res1 == 1)
        {
            cout << "Que poligono desea calcular?\n";
            cout << " 1)Triangulo\n"
                << " 2)Cuadrado\n"
                << " 3)Rectangulo\n"
                << " 4)Pentagono\n"
                << " 5)Hexagono\n"
                << " 6)Heptagono\n"
                << " 7)Rombo\n"
                << " 8)Trapecio\n"
                << " 9)Circulo\n";
            cin >> res2;
            switch (res2)
            {
            case 1:
            {
                float base, altura;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor de la altura: ";
                cin >> altura;
                Triangulo<float> tria(base, altura);
                cout << "Perimetro\tArea\n";
                cout << tria.perimetro() << "\t\t" << tria.area() << "\n";
                break;
            }
            case 2:
            {
                float lado;
                cout << "Ingrese el valor del lado: ";
                cin >> lado;
                Cuadrado<float> cuad(lado);
                cout << "Perimetro\tArea\n";
                cout << cuad.perimetro() << "\t\t" << cuad.area() << "\n";
                break;
            }
            case 3:
            {
                float base, altura;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor de la altura: ";
                cin >> altura;
                Rectangulo<float> rec(base, altura);
                cout << "Perimetro\tArea\n";
                cout << rec.perimetro() << "\t\t" << rec.area() << "\n";
                break;
            }
            case 4:
            {
                float base, apotema;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del apotema: ";
                cin >> apotema;
                Pentagono<float> pen(base, apotema);
                cout << "Perimetro\tArea\n";
                cout << pen.perimetro() << "\t\t" << pen.area() << "\n";
                break;
            }
            case 5:
            {
                float base, apotema;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del apotema: ";
                cin >> apotema;
                Hexagono<float> hex(base, apotema);
                cout << "Perimetro\tArea\n";
                cout << hex.perimetro() << "\t\t" << hex.area() << "\n";
                break;
            }
            case 6:
            {
                float base, apotema;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del apotema: ";
                cin >> apotema;
                Heptagono<float> hep(base, apotema);
                cout << "Perimetro\tArea\n";
                cout << hep.perimetro() << "\t\t" << hep.area() << "\n";
                break;
            }
            case 7:
            {
                float dMayor, dMenor, lado;
                cout << "Ingrese el valor de la diagonal mayor: ";
                cin >> dMayor;
                cout << "Ingrese el valor de la diagonal menor: ";
                cin >> dMenor;
                cout << "Ingrese el valor del lado: ";
                cin >> lado;
                Rombo<float> rom(dMayor, dMenor, lado);
                cout << "Perimetro\tArea\n";
                cout << rom.perimetro() << "\t\t" << rom.area() << "\n";
                break;
            }
            case 8:
            {
                float bMayor, bMenor, altura, lado;
                cout << "Ingrese el valor de la base mayor: ";
                cin >> bMayor;
                cout << "Ingrese el valor de la base menor: ";
                cin >> bMenor;
                cout << "Ingrese el valor del la altura: ";
                cin >> altura;
                cout << "Ingrese el valor del lado: ";
                cin >> lado;
                Trapecio<float> trap(bMayor, bMenor, altura, lado);
                cout << "Perimetro\tArea\n";
                cout << trap.perimetro() << "\t\t" << trap.area() << "\n";
                break;
            }
            case 9:
            {
                float radio;
                cout << "Ingrese el valor del radio: ";
                cin >> radio;
                Circulo<float> circ(radio);
                cout << "Perimetro\tArea\n";
                cout << circ.perimetro() << "\t\t" << circ.area() << "\n";
                break;
            }
            }
        }
        else if (res1 == 2)
        {
            cout << "Que prisma desea calcular?\n";
            cout << " 1)Prisma Triangular\n"
                << " 2)Prisma Cuadrangular\n"
                << " 3)Prisma Rectangular\n"
                << " 4)Prisma Pentagonal\n"
                << " 5)Prisma Hexagonal\n"
                << " 6)Prisma Heptagonal\n"
                << " 7)Prisma Romboidal\n"
                << " 8)Prisma Trapezoidal\n"
                << " 9)Cilindro\n";
            cin >> res2;
            switch (res2)
            {
            case 1:
            {
                float base, altura, ancho;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor de la altura: ";
                cin >> altura;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaTriangular<float> ptria(base, altura, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << ptria.perimetro() << "\t\t" << ptria.area() << "\t" << ptria.volumen() << "\n";
                break;
            }
            case 2:
            {
                float lado, ancho;
                cout << "Ingrese el valor del lado: ";
                cin >> lado;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaCuadrangular<float> pcua(lado, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << pcua.perimetro() << "\t\t" << pcua.area() << "\t" << pcua.volumen() << "\n";
                break;
            }
            case 3:
            {
                float base, altura, ancho;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del la altura: ";
                cin >> altura;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaRectangular<float> prec(base, altura, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << prec.perimetro() << "\t\t" << prec.area() << "\t" << prec.volumen() << "\n";
                break;
            }
            case 4:
            {
                float base, apotema, ancho;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del apotema: ";
                cin >> apotema;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaPentagonal<float> ppen(base, apotema, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << ppen.perimetro() << "\t\t" << ppen.area() << "\t" << ppen.volumen() << "\n";
                break;
            }
            case 5:
            {
                float base, apotema, ancho;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del apotema: ";
                cin >> apotema;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaHexagonal<float> phex(base, apotema, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << phex.perimetro() << "\t\t" << phex.area() << "\t" << phex.volumen() << "\n";
                break;
            }
            case 6:
            {
                float base, apotema, ancho;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor del apotema: ";
                cin >> apotema;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaHeptagonal<float> phep(base, apotema, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << phep.perimetro() << "\t\t" << phep.area() << "\t" << phep.volumen() << "\n";
                break;
            }
            case 7:
            {
                float dMayor, dMenor, lado, ancho;
                cout << "Ingrese el valor de la diagonal mayor: ";
                cin >> dMayor;
                cout << "Ingresa el valor de la diagonal menor: ";
                cin >> dMenor;
                cout << "Ingrese el valor del lado: ";
                cin >> lado;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaRomboidal<float> prom(dMayor, dMenor, lado, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << prom.perimetro() << "\t\t" << prom.area() << "\t" << prom.volumen() << "\n";
                break;
            }
            case 8:
            {
                float bMayor, bMenor, altura, lado, ancho;
                cout << "Ingrese el valor de la base mayor: ";
                cin >> bMayor;
                cout << "Ingrese el valor de la base menor: ";
                cin >> bMenor;
                cout << "Ingrese el valor de la altura: ";
                cin >> altura;
                cout << "Ingrese el valor del lado: ";
                cin >> lado;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                PrismaTrapezoidal<float> ptra(bMayor, bMenor, altura, lado, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << ptra.perimetro() << "<\t\t" << ptra.area() << "\t" << ptra.volumen() << "\n";
                break;
            }
            case 9:
            {
                float radio, ancho;
                cout << "Ingrese el valor del radio: ";
                cin >> radio;
                cout << "Ingrese el valor del ancho: ";
                cin >> ancho;
                Cilindro<float> cil(radio, ancho);
                cout << "Perimetro\tArea\tVolumen\n";
                cout << cil.perimetro() << "\t\t" << cil.area() << "\t" << cil.volumen() << "\n";
                break;
            }
            }
        };
        cout << "Desea continuar?:\n 1)Si\n 2)No\n";
        cin >> res3;
        if (res3 == 2)
        {
            status = false;
            break;
        }
        else
        {
            status = true;
        }
    }
}
