#include <iostream>  // This is a preprocessor directive that includes the standard input-output stream library.
using namespace std;  // This allows you to use standard library names like cout without needing to prefix them with std::.

int main() {
    // Variable declarations and initializations
    const string myName = "Sun";   // This is a constant string variable, meaning its value cannot be changed after initialization.
    int myAge = 14;                // This is an integer variable that stores your age.
    char firstAlphabet = 'A';      // This is a character variable that stores a single letter.
    bool isTrue = true;            // This is a boolean variable that stores either true or false.
    double height = 155.0;         // This is a double variable that stores a floating-point number, representing height in centimeters.
    float weight = 47.5f;          // This is a float variable, similar to double but with less precision, representing weight in kilograms.


    cout << "Hello, I'm " << myName << ", a " << myAge << " years old kid.\n";
    cout << "Did you know that the first letter of the alphabet is " << firstAlphabet << "? That's " << (isTrue ? "true" : "false") << "!\n";
    cout << "I am " << height << " cm tall and weigh " << weight << " kg.\n"; // Fake Height but Real Weight (its actually 47kg but i use 47.5 bc its float)

    int futureAge = myAge + 5;  // Adding 5 to the current age
    cout << "In 5 years, I will be " << futureAge << " years old.\n";

    return 0; 
}
