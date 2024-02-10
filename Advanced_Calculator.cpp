#include <iostream>
#include <cmath>
using namespace std;


    void arithmetic()
    {
        int op = 0;
        float A = 0;
        float B = 0;

        cout << "Select Opeartion";

        cout << "[1] Addition";
        cout << "[2] Substraction";
        cout << "[3] Product";
        cout << "[4] Division";

        cin >> op;
        cout << "Enter frist number : ";
        cin >> A;

        cout << "Enter second number : ";
        cin >> B;

        cout << "Result : ";

        switch (op)
        {
        case 1:
            cout << (A + B);
            break;
        case 2:
            cout << (A - B);
            break;
        case 3:
            cout << (A * B);
            break;
        case 4:
            cout << (A / B);
            break;
        default:
            cout << "Invalid Operation";
            break;
        }
        cout << endl;
    }


    void trigonometric()
    {
        int op = 0;
        float val = 0.0;

        cout << "Select";

        cout << "[1] Sinen";
        cout << "[2] Cosinen";

        cout << "Op : ";
        cin >> op;

        cout << "Enter value : ";
        cin >> val;

        if (op == 1)
        {
            cout << sin(val);
        }
        else if (op == 2)
        {
            cout << cos(val);
        }
        else
        {
            cout << "Invalid operation";
        }
        cout << endl;
    }


    void exponential()
    {
        float base = 0.0;
        float e = 0.0;

        cout << "Enter base :";
        cin >> base;

        cout << "Enter expnent : ";
        cin >> e;

        cout << pow(base, e) << endl;
    }


    void logarithmic()
    {
        float value = 0.0;
        cout << "Enter the value to calculate the log(e) : ";
        cin >> value;

        cout << log(value) << endl;
    }


int main()
{
    int sel = 0;
    char choice = 'y';
    cout << "Advanced Calculator Developed By Muhammad Mubeen Channa";

    cout << "[1] Arithmetic";
    cout << "[2] Trigonometric";
    cout << "[3] Exponential";
    cout << "[4] Logarithmic";

    cout << "\nYour choice :";

    while (choice == 'y')
    {
        cout << "Enter the type of operation you want to calculate";
        cin >> sel;

        switch (sel)
        {
        case 1:
            arithmetic();
            break;
        case 2:
            trigonometric();
            break;
        case 3:
            exponential();
            break;
        case 4:
            logarithmic();
            break;
        default:
            cout << "Invalid Operation";
        }

        cout << "Do you want to continue? y or n : ";
        cin >> choice;
        if (choice == 'n')
        {
            break;
        }
    }
    return 0;
}