// COMSC-210 | Lab 14 | Andrei Buchatskiy
// IDE used : Visual Studio Code

#include <iostream>
#include <iomanip>
using namespace std;

// Const int for the separator
const int SIZE = 10;

// Create the class for colors
class Color {
    // Create three private member variables, red green and blue
    private:
        int red;
        int green;
        int blue;
    // Create public member functions with getters and setters, as well as a print function
    public:
        int getRed(){return red;}
        void setRed(int r){red = r;}
        int getGreen() {return green;}
        void setGreen(int g) {green = g;}
        int getBlue() {return blue;}
        void setBlue(int b) {blue = b;}

        void print();
};

// print function definition
void Color::print() {
    cout << "\tRed: " << red << endl;
    cout << "\tGreen: " << green << endl;
    cout << "\tBlue: " << blue << endl << endl;
    cout << setfill('-') << setw(SIZE) << endl << endl;
}