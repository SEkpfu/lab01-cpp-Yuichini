#include <iostream> 
#include <cmath>    

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    std::cout << "Введите первое число:";
    std::cin >> a;
    std::cout << "Введите второе число:";
    std::cin >> b;
    std::cout << "Введите третье число:";
    std::cin >> c;
    int dif = a - b;
    (dif < 0)
        ? std::cout << "Наибольшее из второго и третьего: " << std::fmax(b, c) << "\n"
        : std::cout << "Квадраты всех введеных числел: " << std::pow(a, 2) << " " << std::pow(b, 2) << " " << std::pow(c, 2) << "\n";
}
