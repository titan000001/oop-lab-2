#include<iostream>
using namespace std;

class Car{
    public:
    string model;
    string make;
    int rentalFee;

    Car(string rmodel, string rmake){
        model = rmodel;
        make = rmake;
        rentalFee = 0;
        cout << "Car " << rmodel << " created with no rental fee" << endl;
    }
    
    Car(string rmodel, string rmake, int rentFee){
        model = rmodel;
        make = rmake;
        rentalFee = rentFee;
        cout << "Car " << rmodel << " created with rental fee "<< rentalFee << endl;
    }
};

int main(){
    Car car1("Sedan", "Toyota");
    Car car2("SUV", "Ford", 50);
    return 0;
}