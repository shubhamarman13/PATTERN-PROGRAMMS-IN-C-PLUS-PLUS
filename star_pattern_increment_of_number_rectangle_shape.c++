#include<iostream>
using namespace std;
int main()
{
    static int x=1;
    for ( int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (x<10)
            {
                cout<<" "<<x<<" ";
            x++;
            }
            else
            {
                cout<<x<<" ";
            x++;
            }
        }
        cout<<endl;
    }
}

    
