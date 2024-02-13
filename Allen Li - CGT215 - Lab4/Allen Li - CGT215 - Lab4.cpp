// Allen Li - CGT215 - Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Arithmetic Series" << endl;
    cout << "3. Geometric Series" << endl;
    cout << "4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    // I recommend writing your factorial code here
    int A;
    int n = 1;
    int i = 1;
    cout << "Enter a number: ";
    cin >> A;
    if (A < 1) {
        cout << "Nice try, please enter a POSITIVE number...";
        cin >> A;
    }
    else {
        cout << A << "! = ";
        do {
            n *= i;
            cout << i << " * ";
            i += 1;
        } while (i < A);
        if (i = A) {
            n *= i;
            cout << i << " = " << n <<endl;
        }
    }
}
void arithmetic() {
    // I recommend writing your arithmetic series code here
    int A;
    int B;
    int C;
    int n = 0;
    int i = 1;
    cout << "Enter a number to start at: ";
    cin >> A;
    cout << "Enter a number to add each time: ";
    cin >> B;
    cout << "Enter the number of elements in the series: ";
    cin >> C;
    do {
        n += A;
        cout << A << " + ";
        A += B;
        i += 1;
    } while (i < C);
    if (i = C) {
        n += A;
        cout << A << " = " << n << endl;
    }

}
void geometric() {
    // I recommend writing your geometric series code here
    int A;
    int B;
    int C;
    int X;
    int n = 0;
    int i = 1;
    cout << "Enter a number to start at: ";
    cin >> X;
    cout << "Enter a number to multiply by each time: ";
    cin >> B;
    cout << "Enter the number of elements in the series: ";
    cin >> C;
    do {
        A = X * pow(B, i-1);
        n += A;
        cout << A << " + ";
        i += 1;
    } while (i < C);
    if (i = C) {
        A = X * pow(B, i - 1);
        n += A;
        cout << A << " = " << n << endl;
    }
    
}
int main() {
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;
        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }
        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
