//Primitve types

#include <iostream>

using namespace std;

int main()
{
    //Character Type
    char middle_initial('J');
    cout << "My middle initial is " << middle_initial << endl;

    //Integer Type
    unsigned short int exam_score(55);
    cout << "My exam score was " << exam_score << endl;

    int countries_represented(65);
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida(20610000);
    cout << "There are " << people_in_florida << " people living in Florida" << endl;

    long long people_on_earth(76000000000);
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    long long distance_to_alpha_centauri(9461000000000);
    cout << "The distance to Aplha Centauri is: " << distance_to_alpha_centauri << " kilometres" << endl;

    //Floating point types
    float car_payment(401.23);
    cout << "My car payment is " << car_payment << endl;

    double pi(3.14159);
    cout << "Pi is " << pi << endl;

    long double large_amount(2.7e120);
    cout << large_amount << " is a very big number!" << endl;

    //Boolean Type
    bool game_over(false);
    cout << "The value of game_over is " << game_over << endl;


    //Overflow Example!
    short value_a(30000);
    short value_b(1000);
    short product(value_a * value_b);
    //Solve the overflow error with: long product(value_a * value_b);

    cout << "The sum of " << value_a << " and " << value_b << " is: " << product << endl; 

    return 0;
} 