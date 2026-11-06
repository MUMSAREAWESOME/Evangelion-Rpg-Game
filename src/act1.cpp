#include "act1.h"
#include "classes.h"
#include "battle.h"
#include <iostream>
#include <chrono>
#include <ostream>
#include <thread>

void wait(int duration){
  std::this_thread::sleep_for(std::chrono::seconds(duration));
}

void continueReading(){
  char choice;

  while (true){
    std::cout << std::endl <<"(C)ontinue?: ";
    std::cin >> choice;

    if (choice == 'C') break;
    else continue;
  }
}

void evaCheck(Player& player){
  while (!player.inEva){
    char choice;
    std::cout << "(G)et in Evangelion unit?: ";
    std::cin >> choice;
    if (choice == 'G') player.enterEva();
    else continue;
  }
}

void chapter1(Player &player){
  wait(1);
  std::cout << "Shinji sat alone in the park, the sky was dark, the air was cold, yet he waited. You see, Asuka promised to meet him at this location at precisely 10pm\nbut with Shinji being how he was he decided to get there a whole hour early.\n";
  wait(1);
  std::cout << "When Asuka finally arrived she greeted Shinji in her usual way then began talking to him" << std::endl;
  wait(1);
  std::cout << "Asuka: " << "So, Shinji... are you ready to see the thing I was telling you about?\n";
  wait(2);
  std::cout << "Shinji: " << "Oh yeah, of course...\n";
  wait(1);
  std::cout << "Asuka: " << "Well great! Lets get going!" << std::endl;
  wait(1);
  std::cout << "Asuka took Shinji by the wrist and started walking...";
  wait(2);
  std::cout << "Shinji: " << "Where exactly are we going? You were being very vauge when you were telling me about this place.\n";
  wait(2);
  std::cout << "...\n";
  wait(2);
  std::cout << "Shinji: " << "Auska?\n";
  wait(2);
  std::cout << "Asuka: " << "...\n";
  wait(1);
  std::cout << "Shinji: " << "Are you even listening to me?!\n";
  wait(1);
  std::cout << "Asuka: " << "Oh, shut up already, I'm trying to remember the way, its dark which already makes it hard, it makes it harder with your\nScreeching. Anyway to answer your question... its a surprise.";
  continueReading();
  std::cout << "Asuka takes Shinji down multiple twists and turns until they finally reach the spot Asuka was looking for—the lookout.\n";
  wait(1);
  std::cout << "Asuka gazed into Shinji's eyses as they sat and looked up to the stars...\n";
  std::cout << "Asuka then sat in Shinji's lap facing him, she wrapped her legs arround him and brought her head to his ear and whispered.\n";
  wait(2);
  std::cout << "Asuka: " << "I love you...\n";
  continueReading();
  std::cout << "Asuka kissed Shinji before he could reply, and when they stopped kissing they layed down and went to sleep." << std::endl;
}


void chapter2(Player& player){
  wait(1);
  std::cout << "As Shinji and Asuka made their way back to the Nerv headqauters the siren went off." << std::endl;
  wait(1);
  std::cout << "Shinji: " << "God! There's an angel attacking! We need to get back to headqauters now!\n";
  wait(1);
  std::cout << "Asuka: " << "Calm down. Wonder girl will handle it until we get to the cage. Anta Baka~" << std::endl;
  wait(2);
  std::cout << "Shinji grabbed Asuka by the wrist and started running.\nNo less than two seconds after Shinji moved Asuka the angel blew up the building they were standing next to and a peice of concrete fell where they were standing." << std::endl;
  wait(2);
  std::cout << "Asuka: " << "You saved me... We can't stay here any longer. We'll DIE!\n";
  std::cout << "Shinji: " << "Sorry for hurting your wrist Asuka... But you're right, we need to get to the cage now." << std::endl;
  wait(2);
  std::cout << "Some time passed and Shinji and Asuka are now in their plug suits ready to get into the Evangelion units.\n";
  evaCheck(player);
  std::cout << "Shinji gets into the Evangelion unit and waits for his next orders." << std::endl;
  wait(2);
  std::cout << "Misato: " << "Shinji... I want you to go out there and destory the angel. Asuka will be here for backup if it's required.\n";
  std::cout << "Shinji: " << "Copy that, Captain... Moving out now" << std::endl;
  continueReading();
  std::cout << "Shinji is launched out of the Geo-Front into the streets of Tokyo-3.\n";
}

void chapter3(Player& player){
  wait(1);
  std::cout << "Shinji finds the angel and begins to attack it.\n";
  int result;
  do{
    result = battle("Angel", 100, 20, player);
  }
  while(result != 0);
  std::cout << "Shinji defeated the anggel and then went back to the launch ramp to go back into the Geo-Front" << std::endl;
  wait(1);
  std::cout << "Asuka: " << "Baka~ be more careful next time!\n";
  wait(1);
  std::cout << "Shinji: " << "Sorry...\n";
  wait(1);
  std::cout << "Asuka: " << "Don't apologise, do somthing to make it up to me...I was worried you know!\n";
  wait(1);
  std::cout << "Shinji: " << "Like what?\n";
  wait(2);
  std::cout << "Asuka: " << "A-A.. K-kiss... *Blushes and looks down*" << std::endl;
  wait(1);
  std::cout << "Shinji caressed Asuka's face, and kissed her lips" << std::endl;
  wait(1);
  std::cout << "Shinji: " << "Better?\n";
  wait(1);
  std::cout << "Asuka: " << "Yes. I love it when you kiss me, it calms my nerves... Lets go home.\n";
  wait(1);
}

void act1(Player& player){
  std::cout << "Act 1: The Robot" << std::endl;
  chapter1(player);
  chapter2(player);
  chapter3(player);
}

