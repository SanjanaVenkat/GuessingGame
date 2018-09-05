#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
  int input = 0;
  srand(time(NULL));
  int random = rand()%100;
  bool playing == true;
  cout << random << endl;
  cout << "Guess my number" << endl;
  cin >> input;
  while (playing == true) {
  if (input < random) {
    playing == true;
    cout << "Too low, try again" << endl;
    cin >> input;
  }
   if (input > random) {
     playing == true;
    cout << "Too high, try again" << endl;
    cin >> input;
  }
  if (input == random) {
    playing == false;
    cout << "You guessed correct!" << endl;
  }
  }
  return 0;
}
  
