// ofCalc.cpp : A simple calc app in the terminal
// by a C++ noob Seceventspen ^_^

#include <iostream>
#include <cstdlib> // For exit() function

using namespace std;

bool flag = false;

void neddih2() {
    std::cout << "Flag 2 of 2 Obtained: You are a 1337-peepeepoopypants\n";
}

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

static bool neddih()
{
    char buffer[64]; // Vulnerable buffer
    cout << "Enter your input: ";
    cin >> buffer;
    cout << "Your input: " << buffer << endl;
    std::cout << "\n";

    // Check if the buffer overflow was successful and return flag accordingly
    return (buffer[0] == 'O' && buffer[1] == 'V' && buffer[2] == 'E' && buffer[3] == 'R' && buffer[4] == 'F' && buffer[5] == 'L' && buffer[6] == 'O' && buffer[7] == 'W');

}

// func decl - user menu choice
void menu()
{
    char choice;
    do
    {
        cout << "Would you like to: [a]dd, [s]ubtract, [m]ultiply, [d]ivide, [q]uit or [h]ack\n";
        cout << "Choose a, s, m, d, h, or q: ";
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

        if (flag) {
            std::cout << "Flag 1 of 2 Obtained: 1337-peepeepoopypants\n";
        } else {
            std::cout << "No flag obtained.\n";
        }

    return 0;
}
