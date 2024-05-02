#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Fruits{
    public:
        string name;
        string color;
        int price;
        bool rippen;

    //inside definition method
    bool isRippen(){
        if(rippen==true){
            cout<<"Ready to EAT!!"<<endl;
        }else{
            cout<<"Need to Wait !! Not rippen"<<endl;
        }
        return rippen;
    }
    
    //outside definition method
    void priceFor1Kg(int price);

    //constructor - default one 
    Fruits(){
        cout<<"Hello I am the constructor"<<endl;
    }

    //constructor with parameters - to initialize default values for 
    //all variables in the class
    Fruits(string x, string y, int z, bool q){
        name = x;
        color = y;
        price = z;
        rippen = q;
    }
    //outside definition constructor
    Fruits(bool flag);

};

void Fruits :: priceFor1Kg(int price){
    int amount = price * 10;
    cout<<"Amount for 1 kg of "<<name<<" is - $" <<amount <<endl;
}

Fruits::Fruits(bool flag){
    rippen =  flag;
}

int main(){

    Fruits apple;
    apple.name = "Apple";
    apple.color  = "Red";
    apple.price =  20;
    apple.rippen = true;
    apple.priceFor1Kg(apple.price);
    bool status = apple.isRippen();
    cout<<status<<endl;
    cout<<apple.name <<", " <<apple.color<<", "<< apple.price<<", "<< apple.rippen<<endl;

    //constructor
    Fruits banana("Banana", "yellow", 10, false);
    banana.priceFor1Kg(banana.price);
    cout<<banana.isRippen()<<endl;

    Fruits orange(true);
    orange.isRippen();
    orange.name = "Orange";
    orange.color = "yellowish";
    orange.price = 4;
    orange.priceFor1Kg(orange.price);

    return 0;
}