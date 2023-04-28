// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Brithney

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;				// Define an integer variable called number
    float cost;				// Define a floating point variable called cost
    char beverage;			// Define a character variable called beverage

    bool validBeverage;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        cout << endl << endl;
        cout << "Hot Beverage Menu" << endl << endl;
        cout << "A: Coffee    $1.00" << endl;
        cout << "B: Tea       $0.75" << endl;
        cout << "C: Hot Chocolate    $1.25" << endl;
        cout << "D: Cappuccino        $2.50" << endl << endl << endl;

        cout << "Enter the beverage A,B,C, or D you desire" << endl;
        cout << "Enter E to exit the program" << endl << endl;

        cin >> beverage;			// Read in beverage

        switch (beverage)			// Begin a switch statement controlled by beverage
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D': validBeverage = true;
                break;
            default: validBeverage = false;
        }

        if (validBeverage == true)
        {
            cout << "How many cups would you like?" << endl;

            cin >> number;			// Read in number

            switch (beverage)		// Begin a nested switch statement controlled by beverage
            {
                case 'a':
                case 'A': cost = number * 1.0;
                    cout << "The total cost is $ " << cost << endl;
                    break;
                case 'c':
                case 'C': cost = number * 1.25;		// Give the case for hot chocolate ($1.25 a cup)
                    cout << "The total cost is $ " << cost << endl;
                    break;
                case 'b':
                case 'B': cost = number * 0.75;		// Give the case for tea ($0.75 a cup)
                    cout << "The total cost is $ " << cost << endl;
                    break;
                case 'd':
                case 'D': cost = number * 2.50;		// Give the case for cappuccino ($2.50 a cup)
                    cout << "The total cost is $ " << cost << endl;
                    break;
                default: cout << "Invalid selection. Try again please" << endl;	// Write a message indicating an invalid selection
            }
        }
        else if (beverage != 'e' && beverage != 'E')		// Check if beverage is not equal to E or e
        {
            cout << "Invalid selection. Try again please" << endl;	// Write a message indicating an invalid selection
        }

    } while (beverage != 'e' && beverage != 'E');	// Finish the do-while statement with the condition that beverage does not equal E or e.

    cout << "Please come again" << endl;	// Print a message indicating that the program is ending
    return 0;		// Return 0 to indicate successful completion of the program
}
