#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> GoodNumbers;

    int Number3 = 3;
    int Number5 = 5;

    int OldNumber3 = 0;
    int OldNumber5 = 0;

    int NewNumber3;
    int NewNumber5;

    int sum = 0;

    int i = 1;
    int lim = 1000;

    
/*
    cout << "Original value of Number3: " << Number3 << endl;
    cout << "Original value of Number5: " << Number5 << endl;
    cout << "Original value of i: " << i << endl;
    cout << "-----------------------" << endl;
*/

    while (i <= 10000)
    {   
        int NewNumber3 = i * Number3;
        int NewNumber5 = i * Number5;

/*        
        cout << "Value of Number3: " << Number3 << endl;
        cout << "Value of Number5: " << Number5 << endl;
        cout << "Value of NewNumber3: " << NewNumber3 << endl;
        cout << "Value of OldNumber3: " << OldNumber3 << endl;
        cout << "Value of NewNumber5: " << NewNumber5 << endl;
        cout << "Value of OldNumber5: " << OldNumber5 << endl;
        cout << "Value of i: " << i << endl;
        cout << "-----------------------" << endl;
*/

        if (OldNumber3 >= lim || OldNumber5 > lim)
        {
            cout << "WRONG" << endl;
            return 0;
        }

        if (OldNumber3 < lim)
        {
            if (NewNumber3 < lim)
            {
                GoodNumbers.push_back(NewNumber3);
/*
                cout << "" << endl;
                cout << "Newnumber3: " << NewNumber3 << endl;
                cout << "NewNumber5: " << NewNumber5 << endl;
                cout << "Value of i: " << i << endl;
                cout << "-----------------------" << endl;
*/
            }
                
        }

        if (OldNumber5 > lim)
        {
            cout << "WRONG" << endl;
            return 0;
        }

        if (OldNumber5 < lim)
        {
            if (NewNumber5 < lim)
            {
                GoodNumbers.push_back(NewNumber5);
/*                
                cout << "" << endl;
                cout << "NewNumber5 if statement" << endl;
                cout << "Newnumber3: " << NewNumber3 << endl;
                cout << "NewNumber5: " << NewNumber5 << endl;
                cout << "Value of i: " << i << endl;
                cout << "-----------------------" << endl;
*/
                
            }
                       
        }
        
        sort(GoodNumbers.begin(), GoodNumbers.end());

        for (int b = 0; b < GoodNumbers.size(); b++)
        {

            if (b > 0)
            {
/*
                 cout << "b = " << b;
                 cout << ", ";
                 cout << "The Number is: " << GoodNumbers[b];
                 cout << ", ";
*/

                if (GoodNumbers[b] == GoodNumbers[b-1])
                {
                    //cout << "Something is being deleted" << endl;
                    GoodNumbers.erase(GoodNumbers.begin() + b);
                }
                else
                {
                    //cout << "the last number is " << GoodNumbers[b-1] << endl;
                }
                
                
            }
/*
            cout << "----------------------------" << endl;
            cout << "This is the good numbers so far: " << GoodNumbers[b] << endl;
*/
        }
        
        


        if (NewNumber3 > lim){}
        else {
            OldNumber3 = NewNumber3;
        }
        if (NewNumber5 > lim){}
        else {
            OldNumber5 = NewNumber5;
        }
        
        i++;
        
    
    }

    //cout << "" << endl;

    for (int c = 0; c < GoodNumbers.size(); c++)
        {
            sum += GoodNumbers[c];
            
        }
    
    cout << "The answer is: "<< sum << endl;
    cout << "" << endl;
    //cout << "" << endl;
    return 0;
    
    
}