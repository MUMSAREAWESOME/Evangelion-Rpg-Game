#include <iostream>
#include <string>

class Player{
  public:
    std::string name = "Shinji Ikari";
    int health;
    int damage = 5;
    int syncLevel = 0;
    bool inEva = false;
    bool act1 = false;
    bool act2 = false;
    bool act3 = false;

    Player(int givenHealth){
      health = givenHealth;
    }

    void enterEva(){
      // Enter Unit 01
      std::cout << "You have entered Evangelion Unit 01." << std::endl;
      inEva = true;
      damage += 20;
    }

    void exitEva(){
      // Exit Unit 01
      if (inEva){
        std::cout << "You have exited Evangelion Unit 01." << std::endl;
        inEva = false;
        damage -= 20;
      }
      else std::cout << "Cant exit Evangelion Unit 01 as you are not inside it!" << std::endl;
    }

    void check(){
      // Check status
      std::cout << "Heath: " << health << "\nSync Level: " << syncLevel << std::endl;
    }
};

class Enemy{
  public:
    std::string name;
    int health;
    int damage;

    Enemy(std::string givenName, int givenHealth, int givenDamage){
      name = givenName;
      health = givenHealth;
      damage = givenDamage;
    }
};

int attack(std::string target, Enemy& enemy, Player& player){

  if (target == "enemy"){
    int damageDealt = player.damage;
    
    if (enemy.health > 0){
      std::cout << "Damaged: " << enemy.name << "! Dealt: " << damageDealt << " damage." << std::endl;
      enemy.health -= damageDealt;
      return 0;
    }
    else{
      std::cout << "Couldn't damage: " << enemy.name << " they are already dead!";
      return 1;
    }
  }
  else{
    int damageDealt = enemy.damage;
    
    if (player.health > 0){
      std::cout << "Took " << damageDealt << " damage!" << std::endl;
      player.health -= damageDealt;
      return 0;
    }
    else{
      return 1;
    }                                       
  }
  
  return 0;
}

int battle(std::string name, int health, int damage, Player& player){
  // Create enemy
  Enemy enemy(name, health, damage);

  // Player turn switch
  bool isPlayerTurn = true;

  // Win switch
  bool win;

  while (true){

    if (player.health <= 0){
      win = false;
      break;
    }

    if (enemy.health <= 0){
      win = true;
      break;
    }
    
    
    if (isPlayerTurn){
      std::string choice;
      std::cout << "Would you like to (A)ttack or (H)eal?: ";
      std::cin >> choice;

      if (choice == "A"){
        attack("enemy", enemy, player);
        isPlayerTurn = false;
      }
      else{
        if (player.health < 100){
          player.health += 15;
          isPlayerTurn = false;
        }
        else{
          std::cout << "Already at full health!" << std::endl;
          continue;
        }
      }
    }
    else{
      attack("player", enemy, player);
      isPlayerTurn = true;
    }
  }

  if (win) return 0;
  else return 1; 
}

int main(){

  Player shinji(100);

  std::cout << "What do you want to do (C)heck, (B)attle" << std::endl;

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
  
  return 0;
}
