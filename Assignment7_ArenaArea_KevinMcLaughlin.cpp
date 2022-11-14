/*==========================================================

 Title:       Assignment 7 - Arena Area Inheritance
 Course:      CIS 2252
 Author:      Kevin McLaughlin
 Date:        11/2/2022
 Description: This program calculates the input squared and the area of a circle with radius 
                of the input. Then it outputs them.

 ==========================================================
*/

#include <iostream>

using namespace std;

class Arena{
    public:
        int radius;
        void display(){
            cout<<radius*radius;
        }
};

class ArenaArea: public Arena{
    
    public:
        
        void display(){
            cout<<((radius*radius)*3.14);
        }
        
        void scan_input(){
            cin>>radius;
        }
};

int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}
