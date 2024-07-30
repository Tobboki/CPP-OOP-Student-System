#include<iostream>
#include<string>

using namespace std;

class Student {
  private:
    int id;
    string name;
    int age;
    string phoneNumber;
    double gpa;

  public:
    // Setters
    void setId(int id) {
      this ->id = id;
    }

     void setName(string name) {
      this ->name = name;
    }

     void setAge(int age) {
      this ->age = age;
    }

     void setPhoneNumber(string phoneNumber) {
      this ->phoneNumber = phoneNumber;
    }

     void setGpa(int gpa) {
      this ->gpa = gpa;
    }

    // Getters
     int getId() const {
     return id;
    }

     string getName() const {
     return name;
    }

     int getAge() const {
     return age;
    }

     string getPhoneNumber() const {
     return phoneNumber;
    }

     double getGpa() const {
     return gpa;
    }

};