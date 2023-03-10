#include <iostream>
#include <string>


#include "east.h"
#include "Player.h"

using namespace std;

east eInfo;

const int gameNum = 7;

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
                              
                Player JayTatum(29, 27, 10, 31, 22, 30, 26, 
                                 6, 5, 4, 5, 9, 4, 6,
                                 8, 5, 6, 8, 12, 9, 10);
               


                cout << "You have chosen to view " << nameChoice << "'s stats." << endl;
                cout << "Game-wise or Series-wise?" << endl;
                cout << "(1) Game" << endl;
                cout << "(2) Series" << endl;

                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << endl;
                    cout << "Select which game you would like to view." << endl;
                    cout << "Game 1" << endl;
                    cout << "Game 2" << endl;
                    cout << "Game 3" << endl;
                    cout << "Game 4" << endl;
                    cout << "Game 5" << endl;
                    cout << "Game 6" << endl;
                    cout << "Game 7" << endl;

                    cin >> choice;

                    switch (choice)
                    {
                    case 1:

                

                        cout << "In Game " << choice << " of the 2022 Eastern Conference Finals, " << nameChoice << " scored " << JayTatum.printPTS(choice-1) << " points." << endl;
                        cout << "He also had " << JayTatum.printAST(choice - 1) << " assists and " << JayTatum.printREB(choice - 1) << " rebounds." << endl;
                        break;

                        
                    }

                    break;
                
                case 2:

                    cout << "Here is " << nameChoice << "'s stats series-wise." << endl;
                    
                    int totalPoints = 0;

                    for (int i = 0; i < gameNum; i++) {

                       totalPoints += JayTatum.printPTS(i);

                        cout << "Game " << i + 1 << ": " << JayTatum.printPTS(i) << " PTS" << endl;


                     }
                    cout << "Total Points: " << totalPoints;

                }
                 
                            
            
            }   

            if (nameChoice == "Jaylen Brown")
            {
                Player JayBrown();
                
                cout << "You have chosen to view " << nameChoice << "'s stats." << endl;
                cout << "Game-wise or Series-wise?" << endl;
                cout << "(1) Game" << endl;
                cout << "(2) Series" << endl;

                cin >> choice;
            
            }

            if (nameChoice == "Al Horford")
            {
                Player AlHorford();

                cout << "You have chosen to view " << nameChoice << "'s stats." << endl;
                cout << "Game-wise or Series-wise?" << endl;
                cout << "(1) Game" << endl;
                cout << "(2) Series" << endl;

                cin >> choice;
            }

            if (nameChoice == "Grant Williams")
            {
                Player GrantWilliams();

                cout << "You have chosen to view " << nameChoice << "'s stats." << endl;
                cout << "Game-wise or Series-wise?" << endl;
                cout << "(1) Game" << endl;
                cout << "(2) Series" << endl;

                cin >> choice;



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

                eInfo.printGame1();

                break;

            case 2:
                //eInfo.printGame2();

                break;

            case 3:
                //eInfo.printGame3();

                break;

            case 4:
                
                //eInfo.printGame4();

                break;

            case 5:

                //eInfo.printGame5();

                break;

            case 6:

                //eInfo.printGame6();

                break;

            case 7:

                //eInfo.printGame7();

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
