#include<iostream>
#include<string>
#include <unistd.h>
#include<stdlib.h>
#include "initialfile.h"
#include "forward.h"
#include "hurdle.h"

//declaring some imp functions

//Essential Var
std::string name = "", explore = "";
int level = 1, Xp = 0, Oxygen = 0, totalOxygen = 0, MaxOxygen = 0, NextLevel = 0, Health = 0, OxygenGas = 0, TotalHealth = 0;
int Animal = 0,AnimalLevel = 1,AnimalHealth=0;
std::string AnimalName[5] = {"Shark","Seal","Whale","Stingray","Piranah"};
std::string CurrentAnimal = "";
int TotalAnimalHealth = AnimalHealth;
 

//main 
int main(){
    //Pre set defaults
   int Oxygen =100;
   int Xp=0;
    int level = 0;
    int NextLevel = 50;
    int Health =100;
    TotalHealth = Health;
    totalOxygen= Oxygen;
    MaxOxygen = totalOxygen;

    // Grabbing the player details
    std::cout<<"Please Enter Your Character Name :"<<std::endl;
    std::cin>>name;

    //Fancy output checkpoint 1
    std::cout<<"Creating the Character."<<std::endl;
    sleep(1);
     std::cout<<"Creating the Character.."<<std::endl;
    sleep(1);
     std::cout<<"Creating the Character..."<<std::endl;
    sleep(1);
    initial init;
    init.Hud();
   

    
    
}

