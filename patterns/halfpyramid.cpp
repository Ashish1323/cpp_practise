#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    // cin >> i;

    for (int j = 0; j <= i; j++)
    {
        for (int k = 0; k <= i; k++)
        {
            if (k <= i - j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// output

//          *
//         **
//        ***
//       ****
//      *****
//     ******
//    *******
//   ********
//  *********
