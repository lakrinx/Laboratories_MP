#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
int main () {
    const float pi = 3.14159265358979323846;
    float v,a;

    std::cout << "Начальная скорость тела: ";
    scanf("%f",&v);

    std::cout << "Угол к горизонту: ";
    scanf("%f",&a);

    float an = a * pi/180;
    float h = (pow(v,2)*pow(sin(an),2))/2/9.8;


    std::cout << "Максимальная высота полёта тела с начальной скоростью " << v << ", брошенного под углом " << a << " к горизонту составит " << std::fixed<< std::setprecision(1) << h << std::endl; 
    return 0;
}