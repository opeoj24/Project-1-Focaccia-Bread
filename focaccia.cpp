/**
 * focaccia.cpp
 *
 * Ope
 * opeoju
 *
 * EECS 183: Project 1
 * Fall 2021
 * 
 * Project UID: fde244392017fe65ebcc34f01c226b11f113bb3dc6dae8af4cb6ea11bf76f7c8
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);



int main()
{
    int people = 0;
        cout << "How many people do you need to serve? ";
        cin >> people;
        cout << endl;

    // TODO: add your code below
    //double to force double division
    const double PEOPLE_PER_LOAF =4.0;
        int loaves= ceil(people / PEOPLE_PER_LOAF);
        cout<< "You need to make: "<< loaves << " loaves of focaccia " << endl;
    
    const int FLOUR_CUPS_PER_LOAF = 5;
    const int FLOUR_CUPS_PER_BAG = 20;
    int flourBags= ceil(loaves * FLOUR_CUPS_PER_LOAF /
                        static_cast<double>(FLOUR_CUPS_PER_BAG));
        string flourBag_sing= "bag";
        string flourBag_plur= "bags";
        string f= pluralize(flourBag_sing, flourBag_plur, flourBags);
        cout<< flourBags << f<< "of flour" << endl;
    
    const double YEAST_TEASPOON_PER_LOAF = 1.75;
    const double YEAST_TEASPOON_PER_PACKAGE = 2.25;
    int yeastPackage= ceil(loaves * YEAST_TEASPOON_PER_LOAF /
                           static_cast<double>(YEAST_TEASPOON_PER_PACKAGE));
        string yeastPackage_sing= "package";
        string yeastPackage_plur= "packages";
        string y= pluralize(yeastPackage_sing, yeastPackage_plur, yeastPackage);
        cout<< yeastPackage << y << "of yeast" << endl;
    
    const double SALT_TEASPOON_PER_LOAF = 1.875;
    const double SALT_TEASPOON_PER_Cannister = 6;
    int saltCannister = ceil(loaves * SALT_TEASPOON_PER_LOAF /
                            static_cast<double>(SALT_TEASPOON_PER_Cannister));
        string saltCannister_sing= "cannister";
        string saltCannister_plur= "cannisters";
        string s= pluralize(saltCannister_sing, saltCannister_plur, saltCannister);
        cout<< saltCannister << s<< "of salt" << endl;
    
    const int OLIVEOIL_TEASPOON_PER_LOAF= 2;
    const double OLIVEOIL_TEASPOON_PER_BOTTLE= 33.78;
    int oliveoilBottle= ceil(loaves * OLIVEOIL_TEASPOON_PER_LOAF /
                             static_cast<double>(OLIVEOIL_TEASPOON_PER_BOTTLE));
        string oliveoilBottle_sing= "bottle";
        string oliveoilBottle_plur= "bottles";
        string o= pluralize(oliveoilBottle_sing, oliveoilBottle_plur, oliveoilBottle);
        cout<< oliveoilBottle << o << "of olive oil" << endl;

    const double FLOUR_BAG_COST = 2.69;
    const double totalCostflour= flourBags * FLOUR_BAG_COST;


    const double YEAST_PACKAGE_COST = 0.40;
    const double totalCostyeast= yeastPackage * YEAST_PACKAGE_COST;
   
    
    const double SALT_CANNISTER_COST = 0.49;
    const double totalCostsalt = saltCannister * SALT_CANNISTER_COST;
   
    const double OLIVEOIL_BOTTLE_COST = 6.39;
    const double totalCostoliveoil = oliveoilBottle * OLIVEOIL_BOTTLE_COST;
    
    
    const double total = totalCostflour + totalCostyeast + totalCostsalt +
                        totalCostoliveoil;
        cout<< "Total expected cost of ingredients:" << total << endl;
    
    cout<<"Have a great Party!"<< endl;
    
    return 0;
    
}

// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
        return plural;
}
