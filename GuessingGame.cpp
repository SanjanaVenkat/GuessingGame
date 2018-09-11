//Sanjana Venkat
//9.11.18
//Guessing game where player guesses computer generated random number
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
  //initial variables for playing again, # of guesses, the random number, and the player's guess
  int input = 0;
  char response = 0;
  int guesses = 0;
  srand(time(NULL));
  int random = rand()%100;
  bool playing = true;
  //Tells player to guess the number and waits for guess
  cout << "Guess the random number, between 0 and 100" << endl;
  cin >> input;
  while (playing == true) {
    //If the guess is below the random number, says too low, adds one to number of guesses and waits for new response
  if (input < random)  {
    guesses ++;
    playing == true;
    cout << "Too low, try again" << endl;
    cin >> input;
  }
  //If the guess is above the random number, says too high, adds one to number of guesses and waits for new response
  if (input > random) {
    guesses ++;
     playing == true;
    cout << "Too high, try again" << endl;
    cin >> input;
  }
  //If the guess is correct, says correct and asks to play again, waits for y/n response
   if (input == random) {
     guesses ++;
     playing == true;
    cout << "You guessed correct!" << endl;
    cout << "Do you want to play again (y/n)?" << endl;
    cin >> response;
    //if yes, resets random number, outputs number of guesses, and waits for player to make new guess
     if (response == 'y') {
       random = rand()%100;
       cout << "Guesses:";
       cout << guesses << endl;
       cout << "Start guessing the new random number" << endl;
       guesses = 0;
       cin >> input;
    }
     // if n, outputs guesses, thanks player for playing, and ends code
    else if (response == 'n') {
      cout << "Guesses:";
	cout << guesses << endl;
	cout << "Thanks for playing!" << endl;
	return 0;
      }
   }
  }
  return 0;
}
  
