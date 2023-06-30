// Cplusplus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> // to use rand()
#include <time.h> // used to seed rand

void BasicFunction() {
    std::cout << "Basic function ran!\n";
}

// There exists a function called EarlyDeclare
// THis is called a Forward Declaration
void EarlyDeclare();

void ParameterFunc(int paramInt) 
{
    ++paramInt;
    std::cout << "ParameterFunc ran - paramInt = " << paramInt << "!\n";
}

int ReturnFunc()
{
    return 42;
}


/*
* 9. Randomisation: Random Score. Write a function to create a random
score for a fake player. The function should accept a minimum and
maximum score, and return the resulting random score. The calling code
should then call this function five times, printing the result each time.
Every time this program is run, these scores should be different.

*/

int RandomScore(int minScore, int maxScore)
{
    int range = maxScore - minScore;
    int result = minScore + rand() % range;
    return result;
}


int main()
{
    /*
    // Examples of different variable types
    int testInt = 100;
    unsigned testUnsigned = 100u;
    float testFloat = 0.5f;
    double testDouble = 0.5;
    bool testBool = true;
   
    
    char testChar = 'c';
    char firstNameOld[] = "Sarah";

    std::string firstName = "Sarah";
    std::string lastName = "Herzog";

    // Can add strings together (concatenate) with 
    // the + sign
    std::string fullName = firstName + " " + lastName;

    // Can access characters in string as if the 
    // string was an array
    char firstInitial = fullName[0];

    // Substr splits the string based on an 
    // initial position and a length
    std::string initials = fullName.substr(0, 1);

    // You can find the position in the string and store it
    // in a variable of type "std::size_t", similar to int
    std::size_t spacePos = fullName.find(" ");

    // We can use the position to get the next substring
    initials += fullName.substr(spacePos + 1, 1);

    // Example of output to console
    std::cout << initials << std::endl;


    // Practice problem: Truncate text after 20 characters
    std::string originalLongText = "Look at my horse, my horse is amazing! Give it a lick, it tastes just like raisins!";
    std::string truncatedText = originalLongText.substr(0, 20);
    std::cout << "original text = " << originalLongText << std::endl;
    std::cout << "truncated text = " << truncatedText << std::endl;
    std::string breakText = truncatedText + "\n";
    breakText += originalLongText.substr(20, std::string::npos);
    std::cout << "break text = " << breakText << std::endl;


    // INPUT
    std::cout << "Please enter a word.\n";
    std::string entryString = "";

    // std::cin >> is used for input. The result of the console
    // intput is stored in the variable to the right of the >>
    std::cin >> entryString;

    std::cout << "You typed " << entryString << "!\n";


    // We can also input to things that aren't strings
    int entryInt;
    std::cout << "Please enter a whole number.\n";
    std::cin >> entryInt;
    std::cout << "You typed " << entryInt << "!\n";

    // NOTE: if they enter something other than an int
    // the input will not "consume" the entry
    // This means it will be used again the next time
    // that cin is used - thus probably breaking your program
    // We should use data validation

    // We can us floats as well
    float entryFloat;
    std::cout << "Please enter a number with a decimal place.\n";
    std::cin >> entryFloat;
    std::cout << "You typed " << entryFloat << "!\n";

    // By default cin only gets text up to the first space
    // You can get a whole line of text (including spaces)
    std::string lineOfText;
    std::cout << "Please enter a line of text.\n";
    std::getline(std::cin, lineOfText);
    std::cout << "You typed " << lineOfText << "!\n";



    // Selection
    // If statements are essentially the same as C#
    bool boolCheck = true;
    int decision = 5;
    if (decision == 0)
    {
        std::cout << "decision was 0!\n";
    }
    else if (decision == 1)
    {
        std::cout << "decision was 1!\n";
    }
    else if (decision == 2)
    {
        std::cout << "decision was 2!\n";
    }
    else
    {
        std::cout << "decision was not 0 or 1 or 2!\n";
    }



    int errorCode = 2;

    switch (errorCode)
    {
    case 0:
    {
        std::cout << "error was 0!\n";
        break;
    }
    case 1:
    {
        std::cout << "error was 1!\n";
        break;
    }
    case 2:
    {
        std::cout << "error was 2!\n";
        break;
    }
    default:
    {
        std::cout << "error was unrecognized!\n";
        break;
    }
    }



    // Advanced if statement: Ternary
    // WRitten in-line with other code, such as an assignment
    // statement.
    // It results in one of two values based on the condition
    int ternResult = (decision ? 1 : 2);



    int choice = 0;

    std::cout << "Where do you want to go?\n" 
        << "1 - East\n"
        << "2 - West\n"
        << "3 - North\n"
        << "4 - South\n";

    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "You went East!\n";
    }
    else if (choice == 2)
    {
        std::cout << "You went West!\n";
    }
    else if (choice == 3)
    {
        std::cout << "You went North!\n";
    }
    else if (choice == 4)
    {
        std::cout << "You went South!\n";
    }
    else
    {
        std::cout << "You didn't enter a valid number - you went nowhere!\n";
    }

    switch (choice)
    {
    case 1:
    {
        std::cout << "You went East!\n";
        break;
    }
    case 2:
    {
        std::cout << "You went West!\n";
        break;
    }
    case 3:
    {
        std::cout << "You went North!\n";
        break;
    }
    case 4:
    {
        std::cout << "You went South!\n";
        break;
    }
    default:
    {
        std::cout << "You didn't enter a valid number - you went nowhere!\n";
        break;
    }
    }


    // while loops are the same in C++ and C#
    bool whileB = true;

    // To enter this loop, this condition must be true
    while (whileB == true)
    {
        // Do the body of the loop
        whileB = false;
        // At the end we check the condition, if it is still true, we loop again
    }


    int doI = 3;
    do {
        ++doI;
        std::cout << "do while ran " << doI << " times!\n";
    } while (doI<2);
    

    int outerI = 0;
    for ( int i = 0; i < 5; ++i)
    {
        // Do the body of the loop
        std::cout << "for loop ran " << i << " times!\n";
    }

    int searchResults = 20;

    std::string google = "G";

    for (int i = 0; i < searchResults; ++i)
    {
        google += "o";
    }

    google += "gle";

    std::cout << google << std::endl;


    EarlyDeclare();

    BasicFunction();
    BasicFunction();
    BasicFunction();

    EarlyDeclare();

    int testInt = 4;
    // Like saying paramInt = testInt
    ParameterFunc(testInt);
    std::cout << "testInt = " << testInt << "!\n";

    int returnValue = ReturnFunc();
    std::cout << "returnValue = " << ReturnFunc() << "!\n";
 

    // static array
    int intArray[] = { 0, 1, 2 };
    const int intArraySize = 3;
    int intArrayB[intArraySize];



    // Declare a vector
    std::vector<int> intVector;

    // Add items to the vector using a function called
    // push_back() and it adds, no surprise, to the back 
    // (end) of the vector

    intVector.push_back(1); // Vector = { 1 }
    intVector.push_back(2); // Vector = { 1, 2 }
    intVector.push_back(36); // Vector = { 1, 2, 36 }
    intVector.push_back(40); // Vector = { 1, 2, 36, 40 }
    intVector.push_back(111); // Vector = { 1, 2, 36, 40, 111 }

    // You can get the current size of the vector
    // using vectorName.size()
    std::cout << "Vector is " << intVector.size() << "\n";

    // You can access items in a vector just like an array
    // Using square brackets
    std::cout << "Vector index 1 is " << intVector[1] << "\n";

    // Change the value of an item:
    // (just like an array)
    // BE CAREFUL - the element must already exist
    intVector[1] = 5;
    std::cout << "Vector index 1 is " << intVector[1] << "\n";

    // Items can be removed using the erase() function
    // Erase uses iterators
    // An iterator is like a marker for a particular point in
    // the vector
    // Let's erase the first two elements
    // Parameter 1 - starting point
    // Parameter 2 - end BEFORE this point
    // Vector = { 1, 2, 36, 40, 111 }
    intVector.erase(intVector.begin(), intVector.begin() + 2);
    std::cout << "Vector is " << intVector.size() << "\n";
    std::cout << "Vector index 0 is " << intVector[0] << "\n";

    // initialisation -> set up i as an integer 0
    // condition -> When do we stop? compare i to vectorName.size()
    // increment -> just increase i
    for (int i = 0; i < intVector.size(); ++i)
    {
        std::cout << "Vector index i is " << intVector[i] << "\n";
        // Print out the value of the vector at some point
    }
       */

    // Generate a random number
    // Anywhere from 0 to RAND_MAX (very very large)
    //int totallyRandom = std::rand();
    //std::cout << "Random number is: " << totallyRandom << "\n";
    //totallyRandom = std::rand();
    //std::cout << "Random number is: " << totallyRandom << "\n";
    //totallyRandom = std::rand();
   // std::cout << "Random number is: " << totallyRandom << "\n";

    // A seed is a starting point for the random calculations
    //int seed = 100;
/*
    std::srand(time(NULL));
    // between two numbers
    int lowerNumber = 50;
    int upperNumber = 150;
    int range = upperNumber - lowerNumber;
    int seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    
    
    
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    */

/*
* 9. Randomisation: Random Score. Write a function to create a random 
score for a fake player. The function should accept a minimum and 
maximum score, and return the resulting random score. The calling code 
should then call this function five times, printing the result each time. 
Every time this program is run, these scores should be different.

*/
    srand(time(NULL));

    int minScore = 10;
    int maxScore = 500;
    int score1 = RandomScore(minScore, maxScore);
    int score2 = RandomScore(minScore, maxScore);
    int score3 = RandomScore(minScore, maxScore);
    int score4 = RandomScore(minScore, maxScore);
    int score5 = RandomScore(minScore, maxScore);

    std::cout << "Random scores: " << std::endl;
    std::cout << "   " << score1 << std::endl;
    std::cout << "   " << score2 << std::endl;
    std::cout << "   " << score3 << std::endl;
    std::cout << "   " << score4 << std::endl;
    std::cout << "   " << score5 << std::endl;



/*
10. Vectors: Who’s In Your Party. Write a program to read in the names for a 
player’s adventuring party, which can have any number of party members. 
Each party member’s name should be stored separately in an array or vector. 
Print them out when the player is done entering the names
*/

    std::vector<std::string> partyNames;

    std::string input = "";

    do {
        std::cout << "Enter the next party member's name, or Q to stop." << std::endl;
        std::cin >> input;
        std::cout << std::endl;

        if (input != "Q")
        {
            partyNames.push_back(input);
        }

    } while (input != "Q");

    std::cout << "Your party is:" << std::endl;

    for (int i = 0; i < partyNames.size(); ++i)
    {
        std::cout << "   " << partyNames[i] << std::endl;
    }



}

// Implementation for EarlyDeclare that was declared at the top
// Name must match exactly
void EarlyDeclare()
{
    std::cout << "Early Declare function ran!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
