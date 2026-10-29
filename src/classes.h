#pragma once
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

    Player(int givenHealth);

    void enterEva();

    void exitEva();

    void check();
};

class Enemy{
    public:
    std::string name;
    int health;
    int damage;

    Enemy(std::string givenName, int givenHealth, int givenDamage);
};