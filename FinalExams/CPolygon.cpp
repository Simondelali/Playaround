//3025720
//Computer Engineering
#include <iostream>

using namespace std;


class CPolygon{
protected: // Protected data members
    float width;
    float height;
public:
    void setValues(){ //Function ask user for input
        float h,w;
        cout <<"Enter height:" <<endl;
        cin >>h;
        cout <<"Enter width:" <<endl;
        cin >>w;
        width = w;
        height = h;

    }
    virtual float area(){ //virtual area function
        return(0);
    }
    printArea(){ //Function to display area
        cout<<"Area = "<<this->area()<<endl;
    }
};
class CRectangle:public CPolygon{
public:
    float area(){ //Ares of rectangle
        return (width*height);
    }
};

class CTriangle:public CPolygon{
public:
    float area(){ // Area of triangle
        return (width*height/2);
    }
};
class CSquare:public CPolygon{
public:
    float area(){ //Area of square
        return (width*height);
    }
};

int main()
{
    CRectangle rect;
    CTriangle trgl;
    CSquare sq;
    CPolygon* polyArrays[100]; // Array of polygons
    int n;

    char choice;

    do{
        cout<<"Select a polygon(Rectangle, Triangle or Square)" <<endl;
        cout<<"1.Enter 'R' for Rectangle."<<endl;
        cout<<"2.Enter 'T' for Triangle."<<endl;
        cout<<"3.Enter 'S' for Square."<<endl;
        cout<<"Enter choice: "<<endl;
        cin >>choice;
        if(choice == 'R'){
            polyArrays[n] = new CRectangle;
            polyArrays[n]->setValues();
        }
        if(choice == 'T'){
            polyArrays[n] = new CTriangle;
            polyArrays[n]->setValues();
        }
        if(choice == 'S'){
             polyArrays[n] = new CSquare;
             polyArrays[n]->setValues();
        }
        cout <<"Do you want to add another polygon? [y/n]"<<endl;
        cin >>choice;
        if(choice == 'y'){
                n++;
        }

    }while(choice !='n');
    //Display all areas of polygons in the array
    for(int i=0; i<=n; i++){
        polyArrays[i]->printArea();
        }

    return 0;
}
//this
