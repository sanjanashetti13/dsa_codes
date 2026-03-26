// 1 2 3
// 4 5 6
// 7 8 9

// A B C
// D E F
// G H I


//1)
#include <iostream>
using namespace std;

int main() {

    int n = 8;
    int m = 8;
    int num = 1;

    for( int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){

            cout << num << " ";
            num++;


        }


        cout << endl;

    }


    return 0;
}



//2)
#include <iostream>
using namespace std;

 int main() 
{

    int m = 3;
    int n = 3;
    char ch = 'A';

    for( int i = 1; i<= n; i++)
    {
         for( int j = 1; j <= m; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;

    }

    return 0;
}


