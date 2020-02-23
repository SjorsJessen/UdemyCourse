#include <iostream>

using namespace std;

//This program calculates the square feet of a room

int main()
{
    cout << "Enter the width of the room";
    int room_width(0);
    cin  >> room_width;
    
    cout << "Enter the length of the room";
    int room_length(0);
    cin  >> room_length;

    cout << "Square feet of the room is: " << room_width * room_length << endl;

    return 0;
}