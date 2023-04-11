#include <iostream>
#include <conio.h>
using namespace std;

const double TOLL = 0.5;
char ESC=27;
class toolbooth{
private:
    unsigned int totalCars;
    double totalAmount;

public:
    toolbooth(){
        totalCars = 0;
        totalAmount = 0;
        }
    void payingCar(){
        totalCars++;
        totalAmount += TOLL;

    }
    void noPayCar(){
        totalCars++;
    }
    void display(){
        cout <<"\nCars = " << totalCars << endl;
        cout <<"Cash = " << totalAmount << endl;
    }


};

int main(){
    toolbooth t;
    char choice;
    cout <<"1.Press 0 for no paying Car"<<endl;
    cout <<"2.Press 1 for paying Car" << endl;
    cout << "3.Press ESC to exit"<< endl;

    do{
        choice=getche();
        if(choice == '0')
            t.noPayCar();
        if(choice=='1')
        t.payingCar();
    }while(choice!=ESC);
        t.display();
    return 0;
}
