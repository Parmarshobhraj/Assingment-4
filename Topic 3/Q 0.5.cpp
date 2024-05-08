/*
Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include <iostream>
using namespace std;

class Triangle {
private:
    double sidea, sideb, sidec;

public:
    // Constructor to initialize side lengths
    Triangle(double s1, double s2, double s3) {
        sidea = s1;
        sideb = s2;
        sidec = s3;
    }

    // Function to determine if the triangle is equilateral
    bool isEquilateral() {
        return (sidea == sideb && sideb == sidec);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles() {
        return (sidea == sideb || sidea == sidec || sideb == sidec);
    }

    // Function to determine if the triangle is scalene
    bool isScalene() {
        return (!isEquilateral() && !isIsosceles());
    }
};

int main() {
    double sidea, sideb, sidec;

    // Input lengths of sides of triangle
    cout << "Enter length of side a: ";
    cin >> sidea;
    cout << "Enter length of side b: ";
    cin >> sideb;
    cout << "Enter length of side c: ";
    cin >> sidec;

    // Create a Triangle object with the input side lengths
    Triangle triangle(sidea, sideb, sidec);

    // Determine and display the type of triangle
    if (triangle.isEquilateral()) {
        cout << "Triangle is equilateral." << endl;
    } else if (triangle.isIsosceles()) {
        cout << "Triangle is isosceles." << endl;
    } else if (triangle.isScalene()) {
        cout << "Triangle is scalene." << endl;
    }


}

