class hurdle{
    friend class fighting;
    friend class initial;
    friend class forward;
    public:
    void CreateAnimal(){
    
    AnimalHealth = (rand()%30 )* TotalAnimalHealth;
    if (AnimalHealth==0){
        CreateAnimal();
    }

}
};