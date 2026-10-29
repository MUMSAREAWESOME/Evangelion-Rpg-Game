#include "classes.h"
#include <string>
#include <iostream>

    Player::Player(int givenHealth){
        health = givenHealth;
    }

    void Player::enterEva(){
      // Enter Unit 01
        std::cout << "You have entered Evangelion Unit 01." << std::endl;
        inEva = true;
        damage += 20;
    }

    void Player::exitEva(){
      // Exit Unit 01
        if (inEva){
        std::cout << "You have exited Evangelion Unit 01." << std::endl;
        inEva = false;
        damage -= 20;
        }
        else std::cout << "Cant exit Evangelion Unit 01 as you are not inside it!" << std::endl;
    }

    void Player::check(){
      // Check status
        std::cout << "Heath: " << health << "\nSync Level: " << syncLevel << std::endl;
    }


    Enemy::Enemy(std::string givenName, int givenHealth, int givenDamage){
        name = givenName;
        health = givenHealth;
        damage = givenDamage;
    }