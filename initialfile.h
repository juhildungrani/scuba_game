//HUD CLASS

class initial{
    friend class fighting;
    friend class hurdle;
    friend class forward;
    public:
void Hud(){
    std::cout<<" Welcome to the World of Scuba: The Explore "<<name<<std::endl;
    sleep(1);
    std::cout<<"Your Details are mention below: "<<std::endl;
    std::cout<<"Your Oxygen is: "<<totalOxygen<<std::endl;
    std::cout<<"Your Health is: "<<TotalHealth<<std::endl;
    std::cout<<"Your Level is: "<<level<<std::endl;
    StepAhed();
}
};