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

    long int sum = 0;

    int i = 1;

    int lim;
    
    cout << "What is the limit you are after?" << endl;
    cout << "" << endl;
    
    cin >> lim;
    
    cout << "------------------" << endl;
    cout << "" << endl;

    while (i <= lim * 100)
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
        
        cout << "This is round: " << i << endl;

        i++;
    }

    cout << "------------------" << endl;
    cout << "Sorting..." << endl;
    cout << "------------------" << endl;
    
    sort(GoodNumbers.begin(), GoodNumbers.end());

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

    for (int c = 0; c < GoodNumbers.size(); c++)
    {
        sum += GoodNumbers[c]; 
    }

    cout << "The multiples of 3 and 5 are: ";
    
    for (int b = 0; b < GoodNumbers.size(); b++)
    {
        cout << "" << GoodNumbers[b];
        cout << ", ";
    }
    
    cout << "" << endl;
    cout << "------------------------------" << endl;
    cout << "" << endl;
    cout << "The sum is: "<< sum << endl;
    cout << "" << endl;
    
    return 0;
}
