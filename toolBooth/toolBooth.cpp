#include <iostream>
#include <conio.h>
using namespace std;

const double TOLL = 0.50;
const char ESC = 27;
class toolBooth{
private:
    unsigned int total_number_of_cars;
    double total_amount_of_money;

public:
    toolBooth(): total_number_of_cars(0), total_amount_of_money(0){
    }
    void payingCar(){
        total_number_of_cars ++;
        total_amount_of_money += TOLL;
    }
    void nopayCar(){
        total_number_of_cars ++;
    }
    void display(){
        cout << "\nCars = " << total_number_of_cars << endl;
        cout << "Cash = " << total_amount_of_money << endl;
    }
};
int main(){
    toolBooth tb1;
    char choice;
    cout << "\nPress 0 for each paying car" << endl;
    cout << "\nPress 1 for non-paying car" << endl;
    cout << "\nPress ESC to exit:" << endl;
    do {
        choice = getche();
        if (choice == '0')
            tb1.payingCar();
        if (choice == '1')
            tb1.nopayCar();
    } while(choice != ESC );
    tb1.display();


    return 0;
}
