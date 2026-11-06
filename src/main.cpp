#include "classes.h"
#include "battle.h"
#include "act1.h"
#include <iostream>
#include <string>

int main(){

  Player shinji(100);

  std::cout << "What do you want to do (C)heck, (B)attle or (R)ead story" << std::endl;

  char choice;
  std::cin >> choice;

  if (choice == 'C'){
    shinji.check();
  }
  else if (choice == 'B'){
    int win = battle("Bad Dude", 50, 5, shinji);

    if (win == 0){
      std::cout << "You won the battle!" << std::endl;
    }
    else{
      std::cout << "You lost!";
      return 0;
    }
  }
  else if (choice == 'R'){
    act1(shinji);
  }

  
  return 0;
}
