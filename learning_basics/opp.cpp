#include <iostream>
#include <cmath>
using namespace std;

//encapsulation - private variables , getters and setters method
class Circle{
    private:
        int radius;
        string  color;
    
    public:
    void setRadius(int r, string col){
        radius = r;
        color = col;
    }

    int getRadius(){
        cout<<"color of the radius - "<< color<<endl;
        return radius;
    }

    //method overloading
    int area(){
        return 3.14 * pow(radius,2);
    }

    double area(double diameter){
        return 3.14 * pow(diameter/2,2);
    }

    double area(double pi, double diameter){
        return pi * pow(diameter/2,2);
    }
};

//Single inheritance
class Shape{
    protected:
        string type;
    public :
        int area(){
            cout<<"Area of the shape !"<<endl;
            return 0;
        }
};

class Square:public Shape{
    public:
        int side_len;
        void setType(string t){
            type = t;
        }
        string getType(){
            return type;
        }
        
        //polymorphism - mehtod overriding
        int area(int length){
            return length * length;
        }
};

//multi-level inheritance
class Triangle : public Square{
    public:
        int base, height;
};

class Hexagon:public Shape, public Circle{
    public:
        int no_of_sides;
        int area(int lenght){
            return (3 * sqrt(3))/2 * (lenght*lenght);
        }
};


int main(){

    //encapsulation
    Circle c;
    c.setRadius(5, "red");
    cout<<c.getRadius()<< "\t diameter - " << (c.getRadius() * 2)<<endl;
    // cout<<c.radius<<endl; -- gives an error of radius is private

    //single inheritance
    Square r;
    r.setType("polygons");
    cout<<r.getType()<<endl;
    //cout<<r.type<<endl; same as private , gives error. inherited class can only access it
    cout<<(r.side_len = 10)<<endl;

    //multi-level inheritance
    Triangle t;
    t.base= 4, t.height = 3;
    cout<<t.area(t.side_len=10)<<endl;

    //multiple inheritance
    Hexagon h;
    h.no_of_sides = 6;
    h.setRadius(7, "yellow");
    cout<<h.getRadius()<<endl;
    //h.area();

    //polymorphism - overriding of the same method in derived class
    Hexagon p1;
    cout<<"Area of Hexagon - " << p1.area(20)<<endl;
    Square p2;
    cout<<"Area of Square - " << p2.area(20)<<endl;

    //method overloading
    Circle c1;
    c1.setRadius(20, "orange");
    cout<<"Area of circle in int - "<<c.area()<<endl;
    cout<<"Area of circle in double diameter - "<<c.area(50.50)<<endl;
    cout<<"Area of circle in double r and pi - "<<c.area(3.14, 50.50)<<endl;

    return 0;
}