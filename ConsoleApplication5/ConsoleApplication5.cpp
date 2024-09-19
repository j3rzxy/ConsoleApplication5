#include <iostream>
#include <string>
using namespace std;

int main()
{
    int int1 = 15;
    int int2 = 20;
    int int3 = 15;
    int int4 = 20;

    int i = 0;

    while (true)
    {
        i++;
        cout << "operator true " << endl << "i = " << i << endl;


        if (int2 > int1 && int3 < int4)
        {
            int1++;
            int3++;
            cout << "operator true " << endl << "int1 = " << int1 << endl << "int3 = " << int3 << endl;
        }
        else
        {
            cout << "operator false " << endl << "int1 = " << int1 << endl << "int3 = " << int3 << endl;
        }

        if (int1 == int3)
        {
            cout << "operator == true" << endl;
        }
        else
        {
            cout << "operator == false" << endl;
        }

        if (int1 != int2)
        {
            cout << "operator != true" << endl;
        }
        else
        {
            cout << "operator == false" << endl;
        }

        if (int1 == int3 && int2 == int4)
        {
            cout << "operator == && == true" << endl;
        }
        else
        {
            cout << "operator == && == false" << endl;
        }

        if ((int2 > int1 && int3 < int4) &&
            (int1 == int3) &&
            (int1 != int2) &&
            (int1 == int3 && int2 == int4))
        {
            break;
        }
    }

    return 0;
}