/*==========================================================

 Title:       Assignment 6 - Wizard Identification using Classes
 Course:      CIS 2252
 Author:      Kevin McLaughlin
 Date:        10/20/22
 Description: This program creates a Wizard object using input from the user, then prints
                the stored attributes.

 ==========================================================
*/

#include <iostream>

using namespace std;

class Wizard {
    private:
        int wizardAge, wizard_ID;
        string wizardFirstName, wizardLastName;
    public:    
        void set_wizardAge(int age){
           wizardAge=age;
        }
        void set_wizard_ID(int id){
            wizard_ID=id;
        }
        void set_wizardFirstName(string name){
            wizardFirstName=name;
        }
        void set_wizardLastName(string name){
            wizardLastName=name;
        }
        int get_wizardAge(){
            return wizardAge;
        }
        int get_wizard_ID(){
            return wizard_ID;
        }
        string get_wizardFirstName(){
            return wizardFirstName;
        }
        string get_wizardLastName(){
            return wizardLastName;
        }
};

int main() {
//DO NOT MODIFY THE MAIN()!!!!
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
    wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
    
    return 0;
}
