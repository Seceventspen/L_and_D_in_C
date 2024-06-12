// Basic attempt in C to create a program to create a simple calc app in the terminal
// easyCalc.cpp
// by a C++ noob Spence ^_^

#include <iostream>
#include <cstdlib> // For exit() function

using namespace std;

// function decl - adding numbers
void numGame1() {
    int x, y;
    int sum;
    std::cout << "[!] Adding two numbers\n";
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
    std::cout << "\n";
}

// func decl - subtracting 2 numbers
void numGame2() {
    int x, y;
    int sub;
    cout << "[!] Subtracting two numbers\n";
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sub = x - y;
    cout << "Sum is: " << sub;
    std::cout << "\n";
}

// func decl - multiplying 2 numbers
void numGame3() {
    double x, y;
    double sub;
    std::cout << "[!] multiplication of two numbers\n";
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sub = x * y;
    cout << "Sum is: " << sub;
    std::cout << "\n";
}

// func decl - dividing 2 numbers
void numGame4() {
    double x, y;
    double sub;
    std::cout << "[!] division of two numbers\n";
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sub = x / y;
    cout << "Sum is: " << sub;
    std::cout << "\n";
}

// func decl - user menu choice
void menu()
{
    char choice;
    do
    {
        cout << "Would you like to: [a]dd, [s]ubtract, [m]ultiply, [d]ivide or [q]uit\n";
        cout << "Choose a, s, m, d or q: ";
        cin >> choice;
        std::cout << "\n";

        // Based on the user's choice, call the appropriate arithmetic function
        switch (choice)
        {
        case 'a':
            numGame1();
            break;
        case 's':
            numGame2();
            break;
        case 'm':
            numGame3();
            break;
        case 'd':
            numGame4();
            break;
        case 'h':
            flag = neddih();
            break;
        case 'q':
            cout << "Exiting program...\n";
        default:
            cout << "Invalid choice!\n";
            break;
        }
    } while (toupper(choice) != 'Q');
}

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "This is my first C++ Program - a simple calculator, or is it!\n";
    std::cout << "\n";
    menu();
    
    return 0;
}
