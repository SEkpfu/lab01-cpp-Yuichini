#include <iostream> 

int main() {
    setlocale(LC_ALL, "RU");
    double x; 
    std::cout << "Введите значение x: ";
    std::cin >> x;
    double x2 = x * x;         
    double x3 = x2 * x;       
    double x4 = x3 * x;       
    double y = 5 * x4 + 2 * x3 - 7 * x2 + 3 * x + 4; 
    std::cout << "Результат y: " << y << "\n";
}
