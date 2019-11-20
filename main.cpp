#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



int main()

{



// area decision variables

int areaChoice1, direction;

string armory, evidence;


// stat variables

int str = 10, luck = 10, intel = 10, agil = 10, hp = 25;


// enemy variables

int z1HP = 5;

string attChoice, attChoice2;



cout << "\t\t\t*__________________________*\n"

     << "\t\t\t   Welcome to Mission Cops \n"

     << "\t\t\t*__________________________*\n\n\n\n"



     << "You've watch enough zombie shows but you never thought it would be a reality, and now it's complete chaos. You and your partner aim for the heads of a hoard of zombie and fire off a few more rounds while you let in some uninfected off the street. You both slam the doors shut.";



     do{

cout<< " What would you like to do?\n\n"

            << "1 - Armory\n"

            << "2 - Evidence room\n"

            << "3 - Check on survivors\n"

            << "4 - Watch news\n"

            << "5 - I need to find my wife!\n\n"



            << "Enter number choice: \n\n";

        cin >>areaChoice1;

        cout << "\n";



    switch (areaChoice1){

        case 1:

               cout << "You enter the armory to and first notice is the AR rifles. Tasers won't do any good anymore.\n\n"



                    << "Would you like to pickup an AR rifle?\n"
            
                    << "Enter 'yes' or 'no': \n\n";

                    cin >> armory;

                    cout << "\n";

                    if (armory == "yes")

                    {

                    intel += 2;

                       cout <<"Can't go wrong with more firepower. You sling the rifle across your chest and grab a few mags.\n\n"

                            <<"Your intelligence has increased and is now " << intel << "\n\n";

                    }

                    else

                    {

                       cout << "I'll stick to the glock.\n\n";

                       }

               break;

        case 2:

               cout << "You enter the evidence room where everything is in plastic bags, and you have memories of crimes you've solved. You notice there's a live grenade mixed into the evidence.\n\n"


                    << "Would you like to pickup the grenade?\n"
            
                    << "Enter 'yes' or 'no': \n\n";
            
            cin >> evidence;
            
            cout << "\n";

            if (evidence == "yes")

            {

            luck += 2;

               cout <<"No better time to have something that goes boom. You pick up the grenade, notice it's weight, and place it on your cargo pocket.\n"
                
                    <<"Your luck has increased and is now " << luck << "\n\n";

            }

            else

            {

               cout << "It's a bit excessive and the shrapnel could hit innocent lives.\n\n";

               }

               break;

        case 3:

               str += 5;

               luck += 5;

               intel += 5;

               agil += 5;



               cout << "Entering the waiting room you see survivors who are completley distraught. Your partner in crime hands you a coffee. Now that you've had your coffee, your stats will increase\n\n"

                    << "Your stats are now: \n\n"

                    << str << " Strength\n"

                    << luck << " Luck\n"

                    << intel << " Intelligence\n"

                    << agil << " Agility\n\n";



               break;

        case 4:

               cout << "The news is reporting that the phone lines are down and telling everyone to go to the nearest police stations to stay safe. You think that's good idea; there's plenty of firepower in the armory to keep people safe.\n\n";

               break;

       case 5:

               cout << "All of a sudden you remember your wife is in all this mess and wonder if she's safe. It time to go look for her at the hospital.\n\n";

        default:

               cout << "Invalid entry.\n";

        }

    }while (areaChoice1 !=5);



               cout << "As you gather your things and run out to the back door to the parking lot, you get your gun ready. Others have been leaving the station without telling anyone to get their families too? Theirs a zombie that come up from behind you, but the parking lot is fenced in, so you dont know how it got in. Would you like to Run or Attack?\n\n"
    
                    << "Enter 'run' or 'attack'\n\n";

               cout << "Zombie HP: " << z1HP << "     Your HP: " << hp << "\n\n";



                    cin >> attChoice;



                    if (attChoice == "run")

                    {

                       if (agil > 12)

                          {

                               cout << "All that exercise paid off and you run like the wind to your police car in record time.";

                          }

                       else

                          {

                               cout << "As your starting to run, you trip on your self.";

                          }

                    }

                    else

                        {

                          cout << "\t\t\t*__________________________*\n"

                               << "\t\t\t      Zombie Attack     \n"

                               << "\t\t\t*__________________________*\n\n\n"



                               << "\nYou shoot the zombie & do 3 damage\n\n";

                          z1HP -= 3;

                          cout << "Zombie horde HP: " << z1HP << "\n\n";

                          cout << "The zombie now attacks you and does 5 damage\n\n";

                          hp -= 5;

                          cout << "Your HP: " << hp << "\n\n";

                          cout << "You shoot the zombie and do 3 damage\n\n";

                          z1HP -= 3;

                          cout << "Zombie horde HP: " << z1HP << "\n\n"



                               << "After a hard fight, you defeat your undead enemy. This \n"

                               << "attack caused some damage and you now have " << hp << " HP.\n\n";





                               do{

                          cout << "Now that you're safe inside your police car, you need to decide where you would like to go first:\n\n"

                               << "1 - Gas Station\n"

                               << "2 - House\n"

                               << "3 - Mall\n"

                               << "4 - Hospital\n"

                               << "Enter number choice: \n\n";



                      cin  >> direction;

                                   
                                switch (direction){

                                   case 1: cout << "You decide to get some gas.\n\n";
                                    

                                           break;



                                   case 2: cout << "You decide to check the house.\n";

                                           break;



                                   case 3: cout << "She might be at the mall.\n\n";

                                           break;

                                           case 4: cout << "You decide to go to the hospital where she works as a nurse.\n\n";

                                           break;



                                           default:

                                           cout << "Invalid entry.\n\n";

                                           break;

                                   
                                   
        }

    }while (direction != 1 & direction !=3) ;


system ("pause");

return 0;



}
}
