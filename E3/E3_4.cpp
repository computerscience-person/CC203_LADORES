#include <iostream>

using namespace std;

class Odometer{
    private:
        unsigned int miles;
        unsigned int mpg;
    
    public:
        Odometer(){
            this -> miles = 0;
            this -> mpg = 0;
        }

        auto resetOdometer() -> void{
            this -> miles = 0;
        }

        auto setEfficiency(int mpg) -> void{
            this -> mpg = mpg;
        }

        auto addMiles(int miles) -> void{
            this -> miles += miles;
        }

        auto getGallons() -> unsigned int{
            return this -> miles / this -> mpg;
        }

        auto getMiles() -> unsigned int{
            return this -> miles;
        }
};

auto main() -> int{
    // auto car1 = Odometer();
    // auto car2 = Odometer();
    // auto car3 = Odometer();

    Odometer car1, car2, car3;

    car1.setEfficiency(20);
    car2.setEfficiency(30);
    car3.setEfficiency(40);

    car1.addMiles(100);
    car2.addMiles(100);
    car3.addMiles(100);
    car2.addMiles(25);
    car3.addMiles(50);

    cout << "Car 2 gallons used: " << car2.getGallons() << ", miles traveled: " << car2.getMiles() << endl;
    cout << "Car 3 gallons used: " << car3.getGallons() << ", miles traveled: " << car3.getMiles() << endl;
    cout << "Car 1 gallons used: " << car1.getGallons() << ", miles traveled: " << car1.getMiles() << endl;
}