#include <iostream>
#include "Begin7.h"

using namespace std;

// --------------------------------------------------
// Обчислення довжини кола та площі
// --------------------------------------------------
void CalculateCircle(CircleData &c)
{
    const double PI = 3.14;

    c.L = 2 * PI * c.R;

    c.S = PI * c.R * c.R;
}

// --------------------------------------------------
// Функція виконання завдання
// --------------------------------------------------
void TaskBegin7()
{
    CircleData c;

    cout << "\n===== TASK 2 : Begin7 =====\n";

    cout << "Input radius R: ";
    cin >> c.R;

    CalculateCircle(c);

    cout << "Length L = " << c.L << endl;

    cout << "Area S = " << c.S << endl;
}
