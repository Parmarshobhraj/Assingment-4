/*
   5. Write a C++ program to create a class called Rectangle that has private 
      member variables for length and width. Implement member functions to 
      calculate the rectangle's area and perimeter.
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Create constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Creating an instance of Rectangle class
    Rectangle rectangle(5.0, 4.0);

    // Calculating area and perimeter
    double area = rectangle.calculateArea();
    double perimeter = rectangle.calculatePerimeter();

    // Displaying results
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;
  
    
}

