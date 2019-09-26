#include <iostream>
#include <vector>

int main ()
{
    int Number3 = 3;
    int Number5 = 5;

    int OldNumber3;
    int OldNumber5;

    int NewNumber3;
    int NewNumber5;

    int i = 1;
    
    

    std::cout << "Original value of Number3: " << Number3 << std::endl;
    std::cout << "Original value of Number5: " << Number5 << std::endl;
    std::cout << "Original value of i: " << i << std::endl;
    std::cout << "-----------------------" << std::endl;

    
    do
    {   

        
        int NewNumber3 = i * Number3;
        int NewNumber5 = i * Number5;
                

        std::cout << "Value of OldNumber3 before the if: " << OldNumber3 << std::endl;
        std::cout << "Value of OldNumber5 before the if: " << OldNumber5 << std::endl;
        
       

        if (OldNumber3 < 10 > NewNumber3 && OldNumber5 < 10 > NewNumber5)
        {
        
            int NewNumber5 = OldNumber5;
            int NewNumber3 = OldNumber3;
            int AddedNumber = NewNumber3 + NewNumber5;

        std::cout << "" << std::endl;
        std::cout << "asdfdasdfsfasdfsfadfsfds" << std::endl;
        std::cout << "Value of NewNumber3: " << NewNumber3 << std::endl;
        std::cout << "Value of NewNumber5: " << NewNumber5 << std::endl;
        std::cout << "Value of i: " << i << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "Value of OldNumber3 " << OldNumber3 << std::endl;
        std::cout << "Value of OldNumber5 " << OldNumber5 << std::endl;
        std::cout << "" << std::endl;

        std::cout << "-----------------------" << std::endl;

        std::cout << "Value of the numbers added is: " << AddedNumber << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "" << std::endl;

            return 0;
        }
        else
        {
            int AddedNumber = NewNumber3 + NewNumber5;

        std::cout << "-----------------------" << std::endl;
        std::cout << "Value of NewNumber3: " << NewNumber3 << std::endl;
        std::cout << "Value of NewNumber5: " << NewNumber5 << std::endl;
        std::cout << "Value of i: " << i << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "Value of OldNumber3 " << OldNumber3 << std::endl;
        std::cout << "Value of OldNumber5 " << OldNumber5 << std::endl;
        std::cout << "" << std::endl;

        std::cout << "-----------------------" << std::endl;

        std::cout << "Value of the numbers added is: " << AddedNumber << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "" << std::endl;
        }
        

        
        
        
        
        



        OldNumber3 = NewNumber3;
        OldNumber5 = NewNumber5;
        

        i++;
    
    }
    while (i <= 5);




    return 0;
    
    
}