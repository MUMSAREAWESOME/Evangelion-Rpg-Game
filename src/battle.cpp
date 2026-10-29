#include "battle.h"
#include "classes.h"
#include <iostream>
#include <string>

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
        char choice;
        std::cout << "Would you like to (A)ttack, (C)heck or (H)eal?: ";
        std::cin >> choice;

        if (choice == 'A'){
            attack("enemy", enemy, player);
            isPlayerTurn = false;
        }
        else if (choice == 'C'){
            std::cout << "Your health: " << player.health << '\n' << "Enemy's health: " << enemy.health << std::endl;
            continue; 
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
