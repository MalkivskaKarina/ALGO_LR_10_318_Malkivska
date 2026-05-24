#include <iostream>

#include "Time.h"
#include "Begin7.h"
#include "Boolean4.h"

using namespace std;

// ==================================================
//                     MAIN
// ==================================================
int main()
{
    int choice;

    do
    {
        cout << "\n===================================";
        cout << "\n              MENU";
        cout << "\n===================================";

        cout << "\n1 - Task Param79";
        cout << "\n2 - Task Begin7";
        cout << "\n3 - Task Boolean4";
        cout << "\n0 - Exit";

        cout << "\n\nChoose task: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Task1();
            break;

        case 2:
            TaskBegin7();
            break;

        case 3:
            TaskBoolean4();
            break;

        case 0:
            cout << "\nProgram finished.\n";
            break;

        default:
            cout << "\nWrong choice!\n";
        }

    } while (choice != 0);

    return 0;
}
