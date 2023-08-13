// Making a code inthis project enter the symbol and then calculate the vale by using switch case
// PGS BOOK-Switch Case 2nd problem
// Date=19/02/2023

#include <iostream>
#include <cmath>
using namespace std;

// Using the simple calculator we can do  plus,subtraction,multiplication ,division calculation by class Simple_Casio
class Simple_Casio
{
protected:
    int a, b;

public:
    void setSimpleCasio(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void getSimpleCasio()
    {
        cout << endl;
        cout << "The value of a+b is " << a + b << endl;
        cout << "The value of a-b is " << a - b << endl;
        cout << "The value of a*b is " << a * b << endl;
        cout << "The value of a/b is " << a / b << endl;
    }
};

// Using scientific calculator we can do various difficult calculation by using Scientific_Casio
class Scientific_Casio
{
protected:
    int c, d;

public:
    void setScientificCasio(int num3, int num4)
    {
        c = num3;
        d = num4;
    }
    void getScientificCasio()
    {
        cout << endl;
        cout << "The value of cos(" << c << ") is " << cos(c) << " and value of sin(" << c << ") is " << sin(c) << endl;
        cout << "The value of cos(" << d << ") is " << cos(d) << " and value of sin(" << d << ") is " << sin(d) << endl;
        cout << "The value of exp(" << c << ") is " << exp(c) << " and the value of exp(" << d << ") is " << exp(d) << endl;
        cout << "The value of log(" << c << ") is " << log(c) << " and the value of log(" << d << ") is " << log(d) << endl;
        cout << "The power is " << pow(c, d) << endl;
        cout << "The maximum value is " << max(c, d) << " and the minimum value is " << min(c, d) << endl;
    }
};

// Taking value by user for class Simple_Casio and class Scientific_Casio
class Hybrid_Casio : public Simple_Casio, public Scientific_Casio
{
public:
    void display()
    {

        cout << endl;
        cout << "You put tha values are:" << endl;
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b << endl;
        cout << "The value of c is:" << c << endl;
        cout << "The value of d is:" << d << endl;
    }
};

int main()
{
    Hybrid_Casio casio;
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    casio.setSimpleCasio(a, b);
    casio.getSimpleCasio();

    cout << endl;

    int c, d;
    cout << "Enter the value of c:";
    cin >> c;
    cout << "Enter the value of d:";
    cin >> d;
    casio.setScientificCasio(c, d);
    casio.getScientificCasio();

    casio.display();

    return 0;
}
