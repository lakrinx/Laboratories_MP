#include <iostream>
#include <cmath>
#include <iomanip>
#define G 9.8
#define pi 3.14159265358979323846
int main () {
    float v,a;

    std::cout << "Начальная скорость тела: ";
    std::cin >> v;

    std::cout << "Угол к горизонту: ";
    std::cin >> a;

    float an = a * pi/180;
    float h = (pow(v,2)*pow(sin(an),2))/2/G;


    std::cout << "Максимальная высота полёта тела с начальной скоростью " << v << ", брошенного под углом " << a << " к горизонту составит " << std::fixed<< std::setprecision(1) << h << std::endl; 
    return 0;
}