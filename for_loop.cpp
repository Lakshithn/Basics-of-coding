#include <iostream>
using namespace std;
int number;
int main()
    {
        cout << "input a number:";
        cin >> number;

        for (int i = number ; i<10;)
        {
            cout << i << endl;
            i++;
        }

    cout << "------" << endl;

    int j = number;
    while (j<10)
    {
        cout << j << endl;
        j++;
    }
    return 0;
}