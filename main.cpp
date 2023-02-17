#include <iostream>
#include <string>

#include "east.h"

using namespace std;

int main() {

    cout << "Welcome to the NBA 2022 Conference Finals Database." << endl;
    cout << "Please select the Conference you would like to view." << endl;
    cout << endl;
    cout << "(1) East" << endl;
    cout << "(2) West" << endl;
    int choice;
    string nameChoice;

    cin >> choice;
    
    switch (choice)
    {
    case 1:
        cout << "You have chosen the East." << endl;
        cout << "The 2022 Eastern Conference Finals: Boston Celtics vs Miami Heat." << endl;
        cout << endl;
        cout << "Please select what you would like to view." << endl;
        cout << "(1) Player Stats" << endl;
        
        cout << "(2) Game Box Score" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Who would you like to view?" << endl;
            cout << "Type first and last name. Case-sensitive." << endl;

            cin.ignore();
            getline(cin, nameChoice);

            if (nameChoice == "Jayson Tatum")
            {
                cout << "Game-wise or Series-wise?" << endl;
                cout << "(1) Game" << endl;
                cout << "(2) Series" << endl;

                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "You have chosen to view " << nameChoice << "'s game-wise stats." << endl;

                }
                
            }

            if (nameChoice == "Jaylen Brown")
            {
                cout << "You have chosen to view " << nameChoice << "'s stats." << endl;
            }

            break;

        case 2:
            cout << "Which game would you like to view?" << endl;
            cout << endl;
            cout << "Game 1" << endl;
            cout << "Game 2" << endl;
            cout << "Game 3" << endl;
            cout << "Game 4" << endl;
            cout << "Game 5" << endl;
            cout << "Game 6" << endl;
            cout << "Game 7" << endl;
            cout << endl;
            cout << "Enter the number ";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "You have selected to view the Game 1 Box Score" << endl;

                break;
            }


            break;
        }

        break;

    case 2:
        cout << "You have chosen the West." << endl;
        cout << "The 2022 Western Conference Finals: Golden State Warriors vs. Dallas Mavericks." << endl;

        break;
    default:
        cout << "Please enter 1 or 2." << endl;
    }
}
