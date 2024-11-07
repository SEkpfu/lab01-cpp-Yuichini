#include <iostream> 
#include <cmath> 

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, h, angle_degrees;
    std::cout << "Введите длину первой стороны основания: ";
    std::cin >> a;
    std::cout << "Введите длину второй стороны основания: ";
    std::cin >> b;
    std::cout << "Введите высоту: ";
    std::cin >> h;
    std::cout << "Введите угол между сторонами основания в градусах: ";
    std::cin >> angle_degrees;
    double angle_radians = angle_degrees * 3.14159265358979323846 / 180.0; 
    double volume = a * b * h * sin(angle_radians);
    std::cout << "Объем параллелепипеда: " << volume << "\n";
}