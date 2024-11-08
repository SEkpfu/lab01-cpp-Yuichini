#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    int n; 
    std::cout << "Введите количество точек (n): ";
    std::cin >> n;

    int countOutside = 0;

    for (int i = 0; i < n; i++) {
        double x, y;
        std::cout << "Введите координаты точки " << (i + 1) << " (x y): ";
        std::cin >> x >> y; 

        bool isOutside = true;

        // 1 четверть: x >= 0, y >= 0, y >= 4 - x
        if (x >= 0 && y >= 0 && v >= 4-x) {
            isOutside = false;
        }

        // 2 четверть: x <= 0, y >= 0, x^2 + y^2 <= 16
        if (x <= 0 && y >= 0 && (x * x + y * y <= 16)) {
            isOutside = false;
        }

        // 3 четверть: x <= 0, y <= 0, y >= -8 - x
        if (x <= 0 && y <= 0 && (y >= -8 - x)) {
            isOutside = false;
        }

        // 4 четверть: x >= 0, x <= 2, y <= 0, y >= -4
        if (x >= 0 && x <= 2 && y <= 0 && y >= -4) {
            isOutside = false;
        }

        if (isOutside) {
            countOutside++;
        }
    }
    std::cout << "Количество точек, не принадлежащих заштрихованным областям: " << countOutside << std::endl;
    return 0; 
