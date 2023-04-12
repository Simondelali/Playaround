#include <iostream>

using namespace std;
class where{
private:
    char charry[10];
public:
    void reveal(){
        cout << "\nMy object's address is " << this;
    }
};
class what{
private:
    int alpha;
public:
    void tester(){
        this->alpha = 11;
        cout << this->alpha;
    }
};

int main(){
    what w;
    w.tester();
    where w1,w2,w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    return 0;
}
