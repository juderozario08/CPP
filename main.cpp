#include <iostream>
#include <cstdlib>

using namespace std;

class Person{
    private:
        string name;
        int age;
        string height;
        double weight;
    public:
    Person(){
        this->name = "No Name";
        this->age = 0;
        this->height = "5 Foot";
        this->weight = 60.0;
    }
    Person(string name, int age, string height, double weight){
        this->name = std::move(name);
        this->age = age;
        this->height = std::move(height);
        this->weight = weight;
    }
    string getName(){
        return this->name;
    }
    int getAge() const{
        return this->age;
    }
    string getHeight(){
        return this->height;
    }
    double getWeight() const{
        return this->weight;
    }
};

int main() {
    Person person1("Jude Rozario", 19, "5 foot 10 inches", 85.5);
    cout << person1.getWeight();
}


