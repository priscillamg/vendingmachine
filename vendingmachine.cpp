// File Name: assign7_b_s346

//

// Author: Priscilla Garza

// Date: 12/4/2017

// Assignment Number: 7

// CS 1428.006 Fall 2017

// Instructor: Jill Seaman

//

// Simulates a vending machine coding



#include <iostream>

#include <iomanip>

using namespace std;



void vendingMachine()

{



     cout << "1. Coke (can)"<<endl;

     cout << "2. Coke (bottle)"<<endl;

     cout << "3. Mountain Dew(can)"<<endl;

     cout << "4. Water"<<endl;

     cout << "5. Full Throttle"<<endl;

     cout << "6. Quit the program"<<endl;



}

void getEarnings()

{





}

struct drinkInfo

{

     string drinkName;

     int totalDrinks;

     float drinkPrice;

};



int main()

{

    double amountEarned=0;

    int choice;

    const int ARRAY_SIZE =5;

    drinkInfo numDrinks[ARRAY_SIZE] = {{"Coke (can)", 6, 0.75}, {"Coke (bottle)", 6, 1.25}, {"Mountain Dew (can)", 6, 0.75}, {"Water", 6, 1.75}, {"Full Throttle", 6, 2.00}};





          vendingMachine();

          do

            {

            cout <<"Enter your choice: ";

            cin >> choice;

            if ((choice == 1) || (choice == 2) || (choice == 3) || (choice == 4) || (choice == 5))

            {

                amountEarned+=numDrinks[choice-1].drinkPrice;

                cout<<"the cost is $"<<numDrinks[choice-1].drinkPrice<<endl<<endl;

                vendingMachine();

                cout<<endl<<endl;

            }

            }   while (choice!=6);



    cout<<"Amount earned:  $"<<amountEarned<<endl;





return 0;

}