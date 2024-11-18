#include <iostream>
#include <math.h>


class Calculator {
public:
    int suma(int a, int b) {
        return a + b;
    }
    int diferenta(int a, int b) {
        return a - b;
    }
    int inmultire(int a, int b) {
        return a * b;
    }
    int impartire(int a, int b) {
        if (b == 0) {
            throw std::invalid_argument("Impartire prin zero");
        }
        return a / b;
    }
    int modulo(int a, int b) {
        return a % b;
    }
    double radacina_patrata(int a){
        if(a>=0){
        return sqrt(a);}

        else {
            std::cerr<<"Eroare Nu poti scoate de sub radical un numara negativ"<<std::endl;
            return -1;
        }
    }
    double logaritm_baza_10(int a){
        if (a>0){
            return log10(a);}
        else{
     std::cerr<<"Eroare Nu poti folosi functia logaritm pe un numara negativ"<<std::endl;
     return -1;
        }
    }
};

int main() {
    Calculator calculare;
    int var1, var2;

    std::cout << "Introdu o valoare pentru primul operand: ";
    std::cin >> var1;
    std::cout << "Introdu o valoare pentru al doilea operand: ";
    std::cin >> var2;

    std::cout << "Adunarea celor doua numere este egal cu: " << calculare.suma(var1, var2) << std::endl;
    std::cout << "Diferenta celor doua numere este egal cu: " << calculare.diferenta(var1, var2) << std::endl;
    std::cout << "Inmultirea celor doua numere este egal cu: " << calculare.inmultire(var1, var2) << std::endl;
    try {
        std::cout << "Impartirea celor doua numere este egal cu: " << calculare.impartire(var1, var2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Eroare: " << e.what() << std::endl;
    }
    std::cout << "Modulo este: " << calculare.modulo(var1, var2) << std::endl;
    std::cout<<"Radacina patrata a primul operand este:"<<calculare.radacina_patrata(var1)<<std::endl;
    std::cout<<"Radacina patrata la cel de al doilea operand este:"<<calculare.radacina_patrata(var2)<<std::endl;
    std::cout<<"Logaritmul in baza zece din primul operand este"<<" "<<calculare.logaritm_baza_10(var1)<<std::endl;
    std::cout<<"Logaritmul in baza zece din al doilea  operand este"<<" "<<calculare.logaritm_baza_10(var2);
    return 0;
}
