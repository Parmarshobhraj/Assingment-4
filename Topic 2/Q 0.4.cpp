/*
Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/


#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Create constructor
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double calculateArea() {
        cout<<"Area of circle :"<< 3.14 * radius * radius;
    }

    // Function to calculate circumference
    double calculateCircumference() {
        cout<<"\n\nArea of Circumferencecircle :"<< 2 * 3.14 * radius;
        
    }
};

int main() {
    // Create a Circle object with radius 5
    Circle circle(5);
	circle.calculateArea();
	circle.calculateCircumference();

    return 0;
}
