/*==========================================================

 Title:     Assignment 8 - C++ Wizard Creature Department
 Course:  	CIS 2252
 Author:  	Kevin McLaughlin
 Date:    	11/15/2022
 Description: This program takes two names, instantiates 3 classes, and prints
                statements according to the class attributes.

 ==========================================================
*/

#include <iostream>

using namespace std;

class Creature{
    private:
    string name;
    int quantity;
    string type = "unknown";
    
    public:
    Creature(){}
     
    Creature(string name,int quantity){
        this->name = name;
        this->quantity = quantity;
    } 
    void setName(string name){
        
    }
    string getName(){
        return name;
    }
    void setQuantity(int quantity){
    
    }
    int getQuantity(){
        return quantity;
    }
    void printStatement(){
        cout<<"There's "<<quantity<<" creatures named "<<name<<"\n";
    }
};

class Phoenix: public Creature{
    private:
        string name;
        string type = "phoenix";
        string color;
        int quantity;
    public:
    Phoenix(){}
    void setName(string name){
        this->name = name;
    }
    void setColor(string color){
        this->color = color;
    }
    void setQuantity(int quantity){
        this->quantity = quantity;
    }
    void printStatement(){
        cout<<"There's "<<quantity<<" "<<color<<" phoenixes named "<<name<<"\n";
    }
};

class Basilisk: public Creature{
    private:
        string type = "basilisk";
        int quantity = 1;
        string name;
    public:
        Basilisk(){}
        void setName(string name){
            this->name = name;
        }
        void printStatement(){
            cout<<"There's "<<quantity<<" basilisk named "<<name<<"\n";
        }
};

int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];
    for(int i = 0; i<3; i++){
        if(i<2){
        cin>>nameArr[i];
        }
        else{nameArr[i]="Clover";}
    }
    
    

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    
}

