#include <iostream>
using namespace std;

class Int{
    private:
    int value;
    public:
    Int(){ // create an int
        value = 0;
    }
    Int(int ii){ // create and initialize an Int
        value = ii;
    }
    void add (Int i2, Int i3){ // add two Ints
       value = i2.value + i3.value;
    }
    void display(){ // display an Int
        cout << value;
    }
};

int main(){
    Int Int1(7);
    Int Int2(11);
    Int Int3;

    Int3.add(Int1, Int2);
    cout << "\nInt3 = ";
    Int3.display();
    return 0;
}
