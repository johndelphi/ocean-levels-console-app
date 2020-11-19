// chapter 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//john
//course number
//2/4/2020
// THIS CONSOLE APP WILL CALCULATE OCEAN LEVELS 
//copyright @ 2020 john all rights reserved.


#include <iostream>
using namespace std;


int main()
{//1// declare the data types you will be using   and initialize them if need be.
    const double rate = 1.5;
    int five_year = 5,
        seven_year = 7,
        ten_year = 10;
    int year = 0;
    double ocean_level;
    // .2 calculate for the ocaen level
    float levels_after_five_years = five_year * rate,
        levels_after_seven_years = seven_year * rate,
        levels_after_ten_years = ten_year * rate;
    cout << endl;
    //.3 ask the user for the years
    cout << "please enter the number of years:";
    //.4 creat space/allocate space for year entry
    cin >> five_year;
    // .5 display the results to te user
    cout << "the ocean's level will grow:" << levels_after_five_years;
    cout << " millimeters after five years" << endl;
    // ask the user for a non user defined year
    cout << "please enter the number of years:";
    //allocate space for the years entered 
    cin >> seven_year;
    //DISPLAY THE OCEAN LEVELS TO THE USER
    cout << "the ocean's level will grow:" << levels_after_seven_years;
    cout << " milimeters after seven yaers:" << endl;
    cout << "please enter the number of years:";
    cin >> ten_year;
    cout << "the ocean's level will grow:" << levels_after_ten_years;
    cout << " milimeters after ten yaers" << endl;
    cout << "please enter the year: ";
    cin >> year;
    ocean_level = rate * year;
    cout << "the ocean level in:" << year << " years time  is " << ocean_level << " milimeters";









    return 0;
}




//
