#include <iostream>

int Numbercount ()
{
    int Number3 = 3;
    int Number5 = 5;

    int i = 1;

    while (i <= 100)
    {
        int NewNumber3 = i*Number3;
        int NewNumber5 = i*Number5;

        std::cout << NewNumber3 << std::endl;
        std::cout << NewNumber5 << std::endl;

        i++;
    }
    

    return 1;
    
}