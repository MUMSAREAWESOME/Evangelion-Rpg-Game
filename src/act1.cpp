#include "act1.h"
#include "classes.h"
#include <iostream>
#include <chrono>
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

void chapter1(Player &player){  
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

void act1(Player& player){
  std::cout << "Act 1: The Robot" << std::endl;
  chapter1(player);
}

