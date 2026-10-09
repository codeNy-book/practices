#include <iostream>  

using namespace std;
int main()
{
    
    for (int i = 1; i <= 10000; i++)
    {
        int t = i;


        int low = t %10;
        int high = (t / 10) % 10;
        if (high >= low)
        {
            break;
        }
        if (high < low)
        {
            cout << i << "   ,";
        }
   

    }
	 
         
        system("pause");
        return 0;
    

}    