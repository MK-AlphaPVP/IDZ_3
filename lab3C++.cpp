#include <iostream>
using namespace std;

int main() {
    selocale (LC_ALL, "rus")
    double A, B, C, H, S;
    
    cout << "Введите размеры шкафа (A B C в см): ";
    cin >> A >> B >> C;
    
    cout << "Введите размеры двери (H S в см): ";
    cin >> H >> S;
    
    if ((A <= H && B <= S) || (A <= S && B <= H) ||
        (A <= H && C <= S) || (A <= S && C <= H) ||
        (B <= H && C <= S) || (B <= S && C <= H)) {
        cout << "Шкаф пройдет через дверь." << endl;
    } else {
        cout << "Шкаф не пройдет через дверь." << endl;
    }
    
    return 0;
}