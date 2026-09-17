#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// =====================================================
// Arithmetic Operations
// =====================================================
double performOperation(double a, char op, double b)
{
    switch (op)
    {
    case '+':
        return a + b;

    case '-':
        return a - b;

    case '*':
        return a * b;

    case '/':
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }

    case '%':
        if (b != 0)
        {
            return static_cast<int>(a) % static_cast<int>(b);
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }

    case '^':
        return pow(a, b);

    default:
        cout << "Error: Unknown arithmetic operator!" << endl;
        return 0;
    }
}


// =====================================================
// Comparison Operations
// =====================================================
bool performComparison(double a, string op, double b)
{
    if (op == "==")
        return a == b;

    if (op == "!=")
        return a != b;

    if (op == "<")
        return a < b;

    if (op == ">")
        return a > b;

    if (op == "<=")
        return a <= b;

    if (op == ">=")
        return a >= b;

    cout << "Error: Unknown comparison operator!" << endl;
    return false;
}


// =====================================================
// Logical AND / OR
// =====================================================
bool performLogical(bool a, string op, bool b)
{
    if (op == "&&")
        return a && b;

    if (op == "||")
        return a || b;

    cout << "Error: Unknown logical operator!" << endl;
    return false;
}


// =====================================================
// Logical NOT
// =====================================================
bool performLogicalNot(bool a)
{
    return !a;
}


// =====================================================
// Demonstrate Logical Operator Precedence
// =====================================================
void demonstrateLogicalPrecedence()
{
    bool a = true;
    bool b = false;
    bool c = true;

    // && has higher precedence than ||
    bool result = a || b && c;

    cout << "\nLogical precedence example:" << endl;

    cout << "Expression: true || false && true" << endl;

    cout << "AND (&&) is evaluated before OR (||)." << endl;

    cout << "Result: "
         << (result ? "true" : "false")
         << endl;
}


// =====================================================
// Main Function
// =====================================================
int main()
{
    cout << "=======================================" << endl;
    cout << "  MATHEMATICAL EXPRESSION EVALUATOR" << endl;
    cout << "=======================================" << endl;

    cout << "This program evaluates mathematical expressions" << endl;
    cout << "using various operators and precedence rules." << endl;


    bool continueCalculations = true;


    while (continueCalculations)
    {
        // =================================================
        // Select operation type
        // =================================================

        cout << "\nSelect operation type:" << endl;

        cout << "1. Arithmetic" << endl;
        cout << "2. Comparison" << endl;
        cout << "3. Logical" << endl;

        cout << "Enter choice (1, 2, or 3): ";

        int operationType;
        cin >> operationType;


        // =================================================
        // Arithmetic
        // =================================================

        if (operationType == 1)
        {
            double num1, num2;
            char op;

            cout << "\nArithmetic operators: "
                 << "+  -  *  /  %  ^" << endl;

            cout << "Enter expression: ";

            cin >> num1 >> op >> num2;

            double result =
                performOperation(num1, op, num2);

            cout << "Result: "
                 << num1 << " "
                 << op << " "
                 << num2 << " = "
                 << result << endl;
        }


        // =================================================
        // Comparison
        // =================================================

        else if (operationType == 2)
        {
            double num1, num2;
            string op;

            cout << "\nComparison operators: "
                 << "==  !=  <  >  <=  >="
                 << endl;

            cout << "Enter expression: ";

            cin >> num1 >> op >> num2;

            bool result =
                performComparison(num1, op, num2);

            cout << "Result: "
                 << num1 << " "
                 << op << " "
                 << num2 << " = "
                 << (result ? "true" : "false")
                 << endl;
        }


        // =================================================
        // Logical
        // =================================================

        else if (operationType == 3)
        {
            cout << "\nSelect logical operation:" << endl;

            cout << "1. AND / OR" << endl;
            cout << "2. NOT" << endl;

            cout << "Enter choice (1 or 2): ";

            int logicChoice;
            cin >> logicChoice;


            // ---------------------------------------------
            // AND / OR
            // ---------------------------------------------

            if (logicChoice == 1)
            {
                bool val1, val2;
                string op;

                cout << "\nEnter values as 1 (true) "
                     << "or 0 (false)" << endl;

                cout << "Expression (value operator value): ";

                cin >> val1 >> op >> val2;

                bool result =
                    performLogical(val1, op, val2);

                cout << "Result: "
                     << (val1 ? "true" : "false")
                     << " " << op << " "
                     << (val2 ? "true" : "false")
                     << " = "
                     << (result ? "true" : "false")
                     << endl;
            }


            // ---------------------------------------------
            // NOT
            // ---------------------------------------------

            else if (logicChoice == 2)
            {
                bool val;

                cout << "\nEnter value as 1 (true) "
                     << "or 0 (false): ";

                cin >> val;

                bool result =
                    performLogicalNot(val);

                cout << "Result: !"
                     << (val ? "true" : "false")
                     << " = "
                     << (result ? "true" : "false")
                     << endl;
            }


            else
            {
                cout << "Invalid logical choice!" << endl;
            }
        }


        // =================================================
        // Invalid operation
        // =================================================

        else
        {
            cout << "Invalid operation choice!" << endl;
        }


        // =================================================
        // Continue
        // =================================================

        char choice;

        cout << "\nContinue with another calculation? (y/n): ";

        cin >> choice;

        continueCalculations =
            (choice == 'y' || choice == 'Y');
    }


    cout << "\nThank you for using the calculator!"
         << endl;


    return 0;
}