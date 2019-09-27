#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int Number3 = 3;
    int Number5 = 5;

    int OldNumber3;
    int OldNumber5;

    int NewNumber3;
    int NewNumber5;

    int GoodNumber3 = 0;
    int GoodNumber5 = 0;

    int i = 1;
    
    

    cout << "Original value of Number3: " << Number3 << endl;
    cout << "Original value of Number5: " << Number5 << endl;
    cout << "Original value of i: " << i << endl;
    cout << "-----------------------" << endl;


    while (i <= 5)
    {   
        int NewNumber3 = i * Number3;
        int NewNumber5 = i * Number5;
                
        cout << "Value of Number3: " << Number3 << endl;
        cout << "Value of Number5: " << Number5 << endl;
        cout << "Value of NewNumber3: " << NewNumber3 << endl;
        cout << "Value of OldNumber3: " << OldNumber3 << endl;
        cout << "Value of NewNumber5: " << NewNumber5 << endl;
        cout << "Value of OldNumber5: " << OldNumber5 << endl;
        cout << "Value of i: " << i << endl;
        cout << "-----------------------" << endl;

        if (OldNumber3 > 10)
        {
            cout << "WRONG" << endl;
            return 0;
        }

        if (OldNumber3 <= 10)
        {
            if (NewNumber3 > 10)
            {
                GoodNumber3 = NewNumber3;
                /*NewNumber5 = OldNumber5;*/
                cout << "" << endl;
                cout << "NewNumber3 if statement" << endl;
                cout << "Goodnumber3: " << GoodNumber3 << endl;
                cout << "Goodnumber5: " << GoodNumber5 << endl;
                cout << "Newnumber3: " << NewNumber3 << endl;
                cout << "NewNumber5: " << NewNumber5 << endl;
                cout << "Value of i: " << i << endl;
                cout << "-----------------------" << endl;

                
            }
                
        }

        if (OldNumber5 > 10)
        {
            cout << "WRONG" << endl;
            return 0;
        }

        if (OldNumber5 <= 10)
        {
            if (NewNumber5 <= 10)
            {
                GoodNumber5 = NewNumber5;
                /*NewNumber3 = OldNumber3;*/
                cout << "" << endl;
                cout << "NewNumber5 if statement" << endl;
                cout << "Goodnumber3: " << GoodNumber3 << endl;
                cout << "Goodnumber5: " << GoodNumber5 << endl;
                cout << "Newnumber3: " << NewNumber3 << endl;
                cout << "NewNumber5: " << NewNumber5 << endl;
                cout << "Value of i: " << i << endl;
                cout << "-----------------------" << endl;

                
            }
                       
        }
        
/*
        OldNumber3 = NewNumber3;
        OldNumber5 = NewNumber5;
 */

        if (NewNumber3 > 10){}
        else {
            OldNumber3 = NewNumber3;
        }
        if (NewNumber5 > 10){}
        else {
            OldNumber5 = NewNumber5;
        }
        
        i++;
        
    
    }
    


    return 0;
    
    
}