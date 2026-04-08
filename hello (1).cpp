#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    
    // Ввод координат
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    // Расстояние от начала координат
    double r = sqrt(x * x + y * y);
    
    // Малая величина для сравнения вещественных чисел
    const double EPS = 1e-7;

    // Проверка: лежит ли точка строго внутри области
    // x < 0 (слева от оси Y) и 3 < r < 8 (между окружностями)
    if (x < - EPS && r > 3.0 + EPS && r < 8.0 - EPS) {
        cout << "Да" << endl;
    }
    // Проверка: лежит ли точка на границе
    else {
        bool on_inner_arc = (x <= EPS) && (abs(r - 3.0) < EPS);      // Внутренняя дуга (x <= 0)
        bool on_outer_arc = (x <= EPS) && (abs(r - 8.0) < EPS);      // Внешняя дуга (x <= 0)
        bool on_vertical_segment = (abs(x) < EPS) && (r >= 3.0 - EPS) && (r <= 8.0 + EPS); // Отрезки на оси Y

        if (on_inner_arc || on_outer_arc || on_vertical_segment) {
            cout << "На границе" << endl;
        } else {
            cout << "Нет" << endl;
        }
    }

    return 0;
}