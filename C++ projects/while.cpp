// Brithney

#include <iostream>
#include <cctype> // include the cctype library for the toupper() function
using namespace std;

int main()
{
    char letter = 'a';

    while (letter != 'X')
    {
        cout << "Please enter a letter or X to exit: ";
        cin >> letter;

        // Convert input to uppercase for ease of use
        letter = toupper(letter);

        // Check if user wants to exit the program
        if (letter == 'X') {
            cout << "Exiting program...";
            break; // Exit the loop
        }

        cout << "You entered the letter: " << letter << endl;
    }

    return 0;
}
