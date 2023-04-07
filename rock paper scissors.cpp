#include <iostream>
#include <stdlib.h>

int main(){

  srand(time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "============================ \n";
  std::cout << "Rock Paper Scissor \n";
  std::cout << "============================ \n";

  std::cout << "1) Rock \n";
  std::cout << "2) Paper \n";
  std::cout << "3) Scissor \n";

  std::cout << "Shoot! \n";
  std::cin >> user;

 if (user == 1)
    std::cout << "You choose: Rock \n";
  else if (user == 2)
    std::cout << "You choose: Paper \n";
  else
    std::cout << "You choose: Scissor \n";

  if (computer == 1)
    std::cout << "Computer choose: Rock \n";
  else if (computer == 2)
    std::cout << "Computer choose: Paper \n";
  else
    std::cout << "Computer choose: Scissor \n";


  if (user == computer) {

    std::cout << "it's a tie!\n";

  }

   // user  chooses rock

  else if (user == 1) {

    if (computer == 2) {

      std::cout << "you lost! \n";

    }
    if (computer == 3) {

      std::cout << "you won! \n";

    }

  }

  // user chooses  paper

  else if (user == 2) {

    if (computer == 1) {

      std::cout << "you won! \n";

    }
    if (computer == 3) {

      std::cout << "you lost! \n";

    }

  }

  // user chooses scissors

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "you won! \n";

    }
    if (computer == 2) {

      std::cout << "you lost! \n";

    }

  }
  
  


}
