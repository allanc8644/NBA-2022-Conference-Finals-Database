#include <iostream>
#include <string>

using namespace std;

int main() {
  
   cout << "Welcome to the NBA 2022 Conference Finals Database." << endl;
   cout << "Please select the Conference you would like to view." << endl;
   cout << endl;
   cout << "(1) East" << endl;
   cout << "(2) West" << endl;
   int choice;
  cin >> choice;
  
   switch(choice)
   {
      case 1:
            cout << "You have chosen the East." << endl;
            cout << "The 2022 Eastern Conference Finals: Boston Celtics vs Miami Heat." << endl;
            
            break;
    
      case 2:
            cout << "You have chosen the West." << endl;
            cout << "The 2022 Western Conference Finals: Golden State Warriors vs. Dallas Mavericks." << endl; 
  
            break;
      default:
            cout << "Please enter 1 or 2." << endl;
   }
}
