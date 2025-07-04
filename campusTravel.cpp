/*Raemae Kok
 * CISC 1600 - Computer Science I
 *
 * 05 Campus Game
 * 
 * User has to get to campus within four tries
 * 
 * Last Edited: October 15,2022
 */
#include <iostream>

using namespace std;

int main()
{ int i, sum=14, travel;
    
    for (i=1;i<=4;i++) // Loop to restrict number of turns to four
   {    
       cout << "You are " << sum << " mile(s) from campus!\n"; // Reflect distance to campus
       cout << "How do you wish to travel? (1 bus, 2 subway, 3 jetpack)";
        while (true) // Test for invalid input without taking up turns
        {   cin >> travel;
            if (travel == 1 || travel == 2 || travel == 3)
                {break;}
            else if (travel != 1 || travel != 2 || travel != 3)
            {cout << "Invalid! Try again.";}
        }
                switch (travel) // Value of int travel
                {case 1: 
                travel = 2;
                break;
                case 2: 
                travel = 5;
                break;
                case 3: 
                travel = 10;
                break;
                }
                
                sum=sum-travel; // Calculates distance left 
                    
                    if (sum==0) // Checks if user has reached campus within four tries
                    { cout << "You are " << sum << " mile(s) from campus!\n";
                      cout << "You have won!";
                      exit (0);
                    }
                    else if (sum<=0) // Checks if reader has overshot campus
                    { cout << "You have over-shot your target!\n";
                      cout << "You lose!";
                    exit (0);
                    }
   }
    
    if (sum==0)
   { cout << "You are " << sum << "mile(s) away from campus.";
     cout << "You have won!";}
        else if (sum<=0)
        { cout << "You are " << sum << " mile(s) away from campus.";
          cout << "You have over-shot your target!\n";
          cout << "You lose!";}
            else 
            { cout << "You are " << sum << "mile(s) away from campus.";
              cout << "You haven't reached your target!\n";
              cout << "You lose!"; }
  
    return 0;
}

