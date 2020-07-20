//Forward player class to walk forward
class forward(){
    friend class fighting;
    friend class hurdle;
    friend class initial;
    public:
void StepAhed()
{
    int choice;

    std::cout<<"1.  Bingo! Let's move forward\n";
    std::cout<<"2.  It's dangerours time right now so be Realax and chill\n";
    std::cout<<"3.  Ahhh, It's time to take our Step back..\n\n";
    std::cout<<"#........Now please ENTER your Choice........#\n";

    std::cin>> choice;
    if (choice==1){ //choice is declared on line 6
        int temp = rand () % 100 +1;
        std::cout<<"You are moving forward ...\n";
        if (temp>=50){
            //Encounter an animal
           CreateAnimal();
            string TempName = AnimalName[rand() % 5];
            std::cout<< "A"<<TempName<<" Prepares to fight..\n";
            CurrentAnimal = TempName;
            sleep(1);
            combat();
        }
        std::cout<<"You find nothing intresting\n";
        sleep(2);
        init.Hud();
    }
    else if (choice==2){
        std::cout<<"Now you are in your submarine and enjoying Caviar.....\n";
        if(TotalHealth<=80){
            TotalHealth += 10* level;
        }
        std::cout<<"Eating Cavir impoves your health by "<< TotalHealth<<endl;
        sleep(2);
        init.Hud();
    }
    else if (choice==3){
        int temp = rand () % 100 +1;
        std::cout<<"You are moving Backward ...\n";
        if (temp>=50){
            //Encounter an animal
            CreateAnimal();
            std::string TempName = AnimalName[rand() % 5];
            std::cout<< "A"<<TempName<<" Prepares to fight..\n";
            CurrentAnimal = TempName;
            sleep(1);
            combat();
        }
        std::cout<<"You find nothing intresting\n";
        sleep(2);
        init.Hud();

    }
    else{
        std::cout<<"Sorry I didn't expect that Please try again one more time...\n\n";
        sleep(1);
        init.Hud();
    }
};