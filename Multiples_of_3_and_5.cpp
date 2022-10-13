#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{
    std::vector<int> GoodNumbers;

    int Number3 = 3;
    int Number5 = 5;

    int OldNumber3 = 0;
    int OldNumber5 = 0;

    int NewNumber3;
    int NewNumber5;

    long int sum = 0;

    int i = 1;

    int lim;
    
    /*
    *   Ask what the max limit the user want to check for
    */

    std::cout << "What is the limit you are after?" << std::endl;
    std::cout << "" << std::endl;
    
    std::cin >> lim;
    
    std::cout << "------------------" << std::endl;
    std::cout << "" << std::endl;

    /*
    *   Go through each multiple of 3 and 5 until reached the limit and add to vector
    */
    while (i <= lim)
    {   
        int NewNumber3 = i * Number3;
        int NewNumber5 = i * Number5;

        if (OldNumber3 > lim || OldNumber5 > lim)
        {
            return 0;
        }

        if (OldNumber3 < lim)
        {
            if (NewNumber3 < lim)
            {
                GoodNumbers.push_back(NewNumber3);
            }                
        }   

        if (OldNumber5 < lim)
        {
            if (NewNumber5 < lim)
            {
                GoodNumbers.push_back(NewNumber5);                
            }           
        }

        /*
        *   If NewNumber is above the limit return or make OldNumber equal NewNumber
        */
        if (NewNumber3 > lim)
        {
            break;
        }
        else
        {
            OldNumber3 = NewNumber3;
        }

        if (NewNumber5 > lim)
        {
        
        }
        else
        {
            OldNumber5 = NewNumber5;
        }
        
        i++;
    }

    std::cout << "------------------" << std::endl;
    std::cout << "Sorting..." << std::endl;
    std::cout << "------------------" << std::endl;
    
    /*
    *   Sort the numbers in the vector
    */

    sort(GoodNumbers.begin(), GoodNumbers.end());

    /*
    *   Remove duplicates numbers
    */
    for (int b = 0; b < GoodNumbers.size(); b++)
    {
        if (b > 0)
        {
            if (GoodNumbers[b] == GoodNumbers[b-1])
            {
                GoodNumbers.erase(GoodNumbers.begin() + b);
            }
        }
    }

    /*
    *   Calculate the sum
    */    
    for (int c = 0; c < GoodNumbers.size(); c++)
    {
        sum += GoodNumbers[c]; 
    }


    /*
    *   Display the information
    */
    std::cout << "The multiples of 3 and 5 are: ";
    
    for (int b = 0; b < GoodNumbers.size(); b++)
    {
        std::cout << "" << GoodNumbers[b];
        std::cout << ", ";
    }
    
    std::cout << "" << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "The sum is: "<< sum << std::endl;
    std::cout << "" << std::endl;
    
    return 0;
}
