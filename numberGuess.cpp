/* rand example: guess the number */
#include <iostream>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

// Retrieved from: https://www.cplusplus.com/reference/cstdlib/rand/

using namespace std;

int main ()
{
  int iSecret, iGuess;

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 10 + 1;

  do {
    cout << "Guess the number (1 to 10): " << endl;
    cin >> iGuess;
    if (iSecret<iGuess) cout << "The secret number is lower" << endl;
    else if (iSecret>iGuess) cout << "The secret number is higher" << endl;
  } while (iSecret!=iGuess);

  cout << "Congratulations!"<< endl;
  return 0;
}