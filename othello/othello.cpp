#include <iostream>
using namespace std;

char gameBoard[9][9] = {{'#','#','#','#','#','#','#','#'},{'#','#','#','#','#','#','#'},{'#','#','#','#','#','#','#'},{'#','#','X','*','#','#','#'},{'#','#','#','*','X','#','#'},{'#','#','#','#','#','#','#'},{'#','#','#','#','#','#','#'},{'#','#','#','#','#','#','#'}};
int cursor[8] = {0,0}; 



    
int main()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if (i == cursor[0] && j == cursor[1])
            {
                cout << "@" << " ";
            }
            else
            {
                cout << gameBoard[j][i] << " ";
            }
            
        }
        cout << endl;
    }
    return 0;

}