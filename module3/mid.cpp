
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main() 
// // {
// //     int n;

// //     std::cin >> n;

// //     int* dynamic_array = new int[n]; //Dynamic memory allocation...

    
// //     // Access and modify elements of the dynamic array...
// //     for (int i = 0; i < n; i++) 
// //     {
// //         dynamic_array[i] = i + 1;
// //     }

// //     //print dynamic array...
// //     for (int i = 0; i < n; i++) 
// //     {
// //         std::cout << dynamic_array[i] << " ";
// //     }

// //     delete[] dynamic_array; // Deallocate the dynamically allocated memory...

// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// class Car {
// public:
//     std::string brand;
//     std::string model;
//     int year;
//     int speed; 

//     void drive() {
//         std::cout << "Driving the " << brand << " " << model << " at speed " << speed << " km/h" << std::endl;
//     }
// };

// int main() {
//     Car myCar;
//     myCar.brand = "Toyota";
//     myCar.model = "Camry";
//     myCar.year = 2022;
//     myCar.speed = 250; 

//     myCar.drive();
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// class Bike {
//     public:
//     string brand;
//     string model;
//     int year;
//     int speed;
//     void drive() {
//         cout <<brand << endl << model  << endl << speed <<"km/h"<<endl;
//     }
// };

// int main() 
// {
//     Bike my_bike;

//     my_bike.brand = "Kawasaki";
//     my_bike.model = "Ninja h2r";
//     my_bike.year = 2021;
//     my_bike.speed = 400;
    

//     my_bike.drive();

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Person {
// public:
//     string name;
//     float height;
//     int age;  
//     Person(const string& n, float h, int a) 
//     {
//         name = n;
//         height = h;
//         age = a;
//     }
// };
// int main() 
// {
//     Person* man = new Person("Eren Yeager", 5.7, 15);
//     cout << "Name: " << man->name <<endl;
//     cout << "Height: " << man->height<<" feet" <<endl;
//     cout << "Age: " << man->age <<endl;

//     delete man;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Cls {
//     public:
//     int data;
//     Cls(int value) : data(value) {}
// };

// Cls& getStaticObject() 
// {
//     static Cls staticObject(10);
//     return staticObject;
// }

// int main() 
// {
//     Cls& obj = getStaticObject();
//     cout << "Data: " << obj.data << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Person {
public:
    string name;
    float height;
    int age;

    Person(const string& n, float h, int a) 
    {
        name = n;
        height = h;
        age = a;
    }
};

int main() 
{
    Person person1("Eren Yeager", 5.7, 15);
    Person person2("arpon", 5.5, 22);

    if (person1.age > person2.age) 
    {
        cout << person1.name << " is older." << endl;
    } 
    else if (person1.age < person2.age) 
    {
        cout << person2.name << " is older." << endl;
    } 
    else 
    {
        cout << "Both persons have the same age." << endl;
    }

    return 0;
}
