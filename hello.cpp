#include <iostream>
using namespace std;

int main() {
    double x, y, r;
    cin >> x >> y;
    r = x * x + y * y;
    
    if ((x == 0 && r >= 9 && r <= 64) || (r == 9 && x <= 0) || (r == 64 && x <= 0))
        cout << "На границе";
    else if (x < 0 && r > 9 && r < 64)
        cout << "Да";
    else
        cout << "Нет";
    
    return 0;
}