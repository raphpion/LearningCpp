#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void game(string mixed, string word, double& tries);
string mixWord(string entry);
void lineJump(int lines);
int playAgain(int choice);

int main()
{
  string entry, mixed, word;
  bool exitGame(false);
  int choice(0), gamesPlayed(0);
  double tries(0), average(0);
  srand(time(0));

  do
  {
    //1. On demande de saisir un mot

    cout << "Player 2 will now enter a word..";
    getline(cin, entry);
    word = entry;

    //2. On mélange les lettres du mot

    mixed = mixWord(entry);

    //3. On demande à l'utilisateur quel est le mot mystère

    lineJump(50);
    game(mixed, word, tries);

    ++gamesPlayed;
    average = tries / gamesPlayed;

    cout << "Average: " << average << " tries." << endl;
    
    switch (playAgain(choice))
    {
    case 1:
      break;
    case 2:
      exitGame = true;
      break;
    }

  } while (exitGame == false);

  return 0;
}

string mixWord(string entry)
{
  int cchar(0);
  string word;
  while (entry.size() != 0)
  {
    cchar = rand() % entry.size();
    word += entry[cchar];
    entry.erase(cchar, 1);
  }

  return word;
}

void game(string mixed, string word, double& tries)
{
  bool finished(false);
  int lives(5);
  string guess;
  do
  {
    ++tries;
    cout << "Lives: " << lives << "/5" << endl;
    cout << "What is this word? " << mixed << endl;
    getline(cin, guess);
    if (guess == word)
    {
      cout << "Congratulations, you win!" << endl;
      finished = true;
    }
    else
    {
      cout << "Wrong answer. Try again!" << endl;
      cout << endl;
      --lives;
      if (lives <= 0)
      {
        cout << "Game over! You lose." << endl;
        finished = true;
      }
    }
  } while (finished == false);
}

void lineJump(int lines)
{
  for (int i = 0; i < lines; ++i)
  {
    cout << endl;
  }
}

int playAgain(int choice)
{
  do
  {
    cout << endl;
    cout << "Play again?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter an option.." << endl;
    cin >> choice;
    cin.ignore();
  } while (choice < 1 || choice > 2);
  return choice;
}