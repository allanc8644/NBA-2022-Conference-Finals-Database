#include <iostream>
#include <string>
#include <iomanip>

#include "east.h"
#include "Player.h"

using namespace std;

east eInfo;

const int egameNum = 7;

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

                Player jTatum(29, 27, 10, 31, 22, 30, 26,
                    6, 5, 4, 5, 9, 4, 6,
                    8, 5, 6, 8, 12, 9, 10,
                    47.6, 61.5, 21.4, 50.0, 35.0, 75.0, 42.9,
                    21, 13, 14, 16, 20, 12, 21,
                    10, 8, 3, 8, 7, 9, 9);




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

                    cout << "In Game " << choice << " of the 2022 Eastern Conference Finals, " << nameChoice << " scored " << jTatum.printPTS(choice - 1) << " points." << endl;
                    cout << "He also had " << jTatum.printAST(choice - 1) << " assists and " << jTatum.printREB(choice - 1) << " rebounds." << endl;
                    cout << "He shot " << jTatum.printFGM(choice - 1) << "/" << jTatum.printFGA(choice - 1) << " for " << jTatum.printFGP(choice - 1) << "%." << endl;
                    break;

                case 2:

                    cout << "Here is " << nameChoice << "'s stats series-wise." << endl;

                    float totalPoints = 0;
                    float totalAssists = 0;
                    float totalRebounds = 0;
                    float avgPTS = 0.0;
                    float avgAST = 0.0;
                    float avgREB = 0.0;

                    cout << fixed << showpoint << setprecision(1);
                    for (int i = 0; i < egameNum; i++) {

                        totalPoints += jTatum.printPTS(i);

                    }
                    cout << "Total Points: " << totalPoints << endl;

                    avgPTS = totalPoints / egameNum;

                    cout << "Average Points: " << avgPTS << endl;

                    for (int i = 0; i < egameNum; i++) {

                        totalAssists += jTatum.printAST(i);

                    }
                    cout << "Total Assists: " << totalAssists << endl;

                    avgAST = totalAssists / egameNum;

                    cout << "Average Assists: " << avgAST << endl;

                    for (int i = 0; i < egameNum; i++) {

                        totalRebounds += jTatum.printREB(i);

                    }
                    cout << "Total Rebounds: " << totalRebounds << endl;

                    avgREB = totalRebounds / egameNum;

                    cout << "Average Rebounds: " << avgREB << endl;

                }



            }

            if (nameChoice == "Jaylen Brown")
            {
                Player jBrown(24, 24, 40, 12, 25, 20, 24,
                    3, 3, 1, 2, 1, 5, 6,
                    10, 8, 9, 7, 4, 6, 6,
                    41.2, 52.9, 70.0, 25.0, 52.6, 46.2, 53.3,
                    17, 17, 20, 20, 19, 13, 15,
                    7, 9, 14, 5, 10, 6, 8);



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

                    cout << "In Game " << choice << " of the 2022 Eastern Conference Finals, " << nameChoice << " scored " << jBrown.printPTS(choice - 1) << " points." << endl;
                    cout << "He also had " << jBrown.printAST(choice - 1) << " assists and " << jBrown.printREB(choice - 1) << " rebounds." << endl;
                    cout << "He shot " << jBrown.printFGM(choice - 1) << "/" << jBrown.printFGA(choice - 1) << " for " << jBrown.printFGP(choice - 1) << "%." << endl;
                    break;

                case 2:

                    cout << "Here is " << nameChoice << "'s stats series-wise." << endl;

                    float totalPoints = 0;
                    float totalAssists = 0;
                    float totalRebounds = 0;
                    float avgPTS = 0.0;
                    float avgAST = 0.0;
                    float avgREB = 0.0;

                    cout << fixed << showpoint << setprecision(1);
                    for (int i = 0; i < egameNum; i++) {

                        totalPoints += jBrown.printPTS(i);

                    }
                    cout << "Total Points: " << totalPoints << endl;

                    avgPTS = totalPoints / 6;

                    cout << "Average Points: " << avgPTS << endl;

                    for (int i = 0; i < egameNum; i++) {

                        totalAssists += jBrown.printAST(i);

                    }
                    cout << "Total Assists: " << totalAssists << endl;

                    avgAST = totalAssists / 6;

                    cout << "Average Assists: " << avgAST << endl;

                    for (int i = 0; i < egameNum; i++) {

                        totalRebounds += jBrown.printREB(i);

                    }
                    cout << "Total Rebounds: " << totalRebounds << endl;

                    avgREB = totalRebounds / 6;

                    cout << "Average Rebounds: " << avgREB << endl;

                }

            }

            if (nameChoice == "Al Horford")
            {
                Player aHorford(0, 10, 20, 5, 16, 3, 5,
                    0, 3, 3, 3, 5, 5, 3,
                    0, 3, 14, 13, 7, 9, 14,
                    0, 100.0, 50.0, 50.0, 62.5, 12.5, 22.2,
                    0, 4, 14, 2, 8, 8, 9,
                    0, 4, 7, 1, 5, 1, 2);


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

                    cout << "In Game " << choice << " of the 2022 Eastern Conference Finals, " << nameChoice << " scored " << aHorford.printPTS(choice - 1) << " points." << endl;
                    cout << "He also had " << aHorford.printAST(choice - 1) << " assists and " << aHorford.printREB(choice - 1) << " rebounds." << endl;
                    cout << "He shot " << aHorford.printFGM(choice - 1) << "/" << aHorford.printFGA(choice - 1) << " for " << aHorford.printFGP(choice - 1) << "%." << endl;
                    break;

                case 2:

                    cout << "Here is " << nameChoice << "'s stats series-wise." << endl;

                    float totalPoints = 0;
                    float totalAssists = 0;
                    float totalRebounds = 0;
                    float avgPTS = 0.0;
                    float avgAST = 0.0;
                    float avgREB = 0.0;

                    cout << fixed << showpoint << setprecision(1);
                    for (int i = 0; i < egameNum; i++) {

                        totalPoints += aHorford.printPTS(i);

                    }
                    cout << "Total Points: " << totalPoints << endl;

                    avgPTS = totalPoints / egameNum;

                    cout << "Average Points: " << avgPTS << endl;

                    for (int i = 0; i < egameNum; i++) {

                        totalAssists += aHorford.printAST(i);

                    }
                    cout << "Total Assists: " << totalAssists << endl;

                    avgAST = totalAssists / egameNum;

                    cout << "Average Assists: " << avgAST << endl;

                    for (int i = 0; i < egameNum; i++) {

                        totalRebounds += aHorford.printREB(i);

                    }
                    cout << "Total Rebounds: " << totalRebounds << endl;

                    avgREB = totalRebounds / egameNum;

                    cout << "Average Rebounds: " << avgREB << endl;

                }

            }

            if (nameChoice == "Grant Williams")
            {
                Player gWilliams();





            }

            if (nameChoice == "Marcus Smart")
            {
                Player mSmart();



            }

            if (nameChoice == "Robert Williams III")
            {
                Player rWilliams();



            }

            if (nameChoice == "Derrick White")
            {
             
                Player dWhite();



            }

            if (nameChoice == "Payton Pritchard")
            {
                Player pPritchard();


            }

            if (nameChoice == "Aaron Nesmith")
            {
                Player aNesmith();


            }

            if (nameChoice == "Nick Stauskas")
            {
                Player nStauskas();

            }

            if (nameChoice == "Juwan Morgan")
            {
                Player jMorgan();


            }

            if (nameChoice == "Malik Fitts")
            {
                Player mFitts();

            }

            if (nameChoice == "Luke Kornet")
            {
                Player lKornet();


            }

            if (nameChoice == "Daniel Theis")
            {
                Player dTheis();

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
