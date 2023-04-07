#include <iostream>
using namespace std;

class publication{
private:
    string title;
    float price;
public:
    void getdata(){
        cout << "\nEnter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata(){
        cout << "\nTitle: " << title;
        cout << "\nprice: " << price;
    }
};

class book : private publication{
    int pages;
public:
    void getdata(){
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }
    void putdata(){
        publication::putdata();
        cout << "\nPages: " << pages;

    }
};

class tape : private publication{
private:
    float time;
public:
    void getdata(){
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> time;
    }
    void putdata(){
        publication::putdata();
        cout << "\nPlaying time: " << time;
    }
};



int main(){
    book b1;
    tape t1;

   b1.getdata();
   t1.getdata();

   b1.putdata();
   t1.putdata();
    return 0;
}
