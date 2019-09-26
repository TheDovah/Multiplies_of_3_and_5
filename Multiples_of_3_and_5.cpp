#include <iostream>
#include <vector>

int main ()
{
    int Number3 = 3;
    int Number5 = 5;

    int i = 1;
    
    std::cout << "Original value of Number3: " << Number3 << std::endl;
    std::cout << "Original value of Number5: " << Number5 << std::endl;
    std::cout << "Original value of i: " << i << std::endl;
    std::cout << "-----------------------" << std::endl;

    while (i < 4)
    {
        int NewNumber3 = i*Number3;
        int NewNumber5 = i*Number5;

        std::cout << "value of NewNumber3: " << NewNumber3 << std::endl;
        std::cout << "value of NewNumber5: " << NewNumber5 << std::endl;

        int AddedNumber = NewNumber3 + NewNumber5;

        if (NewNumber3 < 10 || NewNumber5 < 10)
        {
        
        std::cout << "value of the numbers added is: " << AddedNumber << std::endl;
        std::cout << "" << std::endl;
        

        }
        else
        {
            i++;
        }

    }
    
    return 0;
    
    
}