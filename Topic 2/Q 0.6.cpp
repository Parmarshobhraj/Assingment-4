/*
     6. Write a C++ program to create a class called Person that has private 
        member variables for name, age and country. Implement member 
        functions to set and get the values of these variables.

*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set name
    void setName(string n) {
        name = n;
    }

    // Function to get name
    string getName() {
        return name;
    }

    // Function to set age
    void setAge(int a) {
        age = a;
    }

    // Function to get age
    int getAge() {
        return age;
    }

    // Function to set country
    void setCountry(string c) {
        country = c;
    }

    // Function to get country
    string getCountry() {
        return country;
    }
};

int main() {
    // Create a Person object
    Person person;

    // Set values using member functions
    person.setName("Shobhraj");
    person.setAge(20);
    person.setCountry("India");

    // Get values using member functions and display
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

}
