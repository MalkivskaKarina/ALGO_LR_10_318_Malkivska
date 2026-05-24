#include <iostream>
#include "Boolean4.h"

using namespace std;

// --------------------------------------------------
// Перевірка умови
// --------------------------------------------------
void CheckCondition(BooleanData &d)
{
    d.result = (d.A > 2 && d.B <= 3);
}

// --------------------------------------------------
// Функція виконання завдання
// --------------------------------------------------
void TaskBoolean4()
{
    BooleanData d;

    cout << "\n===== TASK 3 : Boolean4 =====\n";

    cout << "Input A: ";
    cin >> d.A;

    cout << "Input B: ";
    cin >> d.B;

    CheckCondition(d);

    if (d.result)
        cout << "Statement is TRUE" << endl;
    else
        cout << "Statement is FALSE" << endl;
}
