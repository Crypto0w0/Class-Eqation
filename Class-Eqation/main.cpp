#include <iostream>
#include <math.h>
using namespace std;

class Equation{
    double x;
    double y;
public:
    Equation(){
        x = 0;
        y = 0;
    }
    void SetX(double x){
        this->x = x;
    }
    void SetY(double y){
        this->y = y;
    }
    virtual double GetX(){
        return x;
    }
    double GetY(){
        return y;
    }
};

class Line_Equation : public Equation{
    double a;
    double b;
public:
    Line_Equation() : Equation(){  //funk. type: ax + b = y
        a = 0;
        b = 0;
    }
    double GetX(){
        return (this->GetY() - b) / a;
    }
};

class Square_Equation : public Equation{ //funk. type: ax2 + bx + c = 0
    double a;
    double b;
    double c;
public:
    Square_Equation() : Equation(){
        a = 0;
        b = 0;
        c = 0;
    }
    double GetX(){
        double D = b * b - 4 * a * c;
        if (D < 0) return -1;
        else if (D == 0) return 0;
        else return (b - (2 * b) - sqrt(D)) / 2 * a;
    }
};

int main() {
    
}
