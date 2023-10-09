#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Declaring the enumeration constants

enum Choice
{
  displayLeft = 1,
  displayRight = 2,
  Guess = 3,
  Change = 4,
  Exit = 5
};

int main()
{

  // Declaring the variables
  int startPoints = 100;
  string playerName;
  // Printing the Header

  cout << "+-------------------------------------------------+" << endl;
  cout << "|        Computer Science and Engineering         |" << endl;
  cout << "|         CSCE 1030 - Computer Science I          |" << endl;
  cout << "| Keaton Denham, kad0315, KeatonDenham@my.unt.edu |" << endl;
  cout << "+-------------------------------------------------+" << endl;

  cout << "Enter your player name: ";
  getline(cin, playerName);

  for (char check : playerName)
  {
    if (!isalpha(check) && !isspace(check))
    {
      cout << "Error: Player name contains non-alphabetic characters. Please try again." << endl;
      cout << "Enter your player name: ";
      getline(cin, playerName);
    }
  }

  bool newWord = true;

  for (char &i : playerName)
  {
    if (newWord && isalpha(i))
    {
      i = toupper(i);
      newWord = false;
    }
    else
    {
      if (isspace(i))
      {
        newWord = true;
      }
      else
      {
        i = tolower(i);
      }
    }
  }

  cout << playerName;

  return 0;
}
