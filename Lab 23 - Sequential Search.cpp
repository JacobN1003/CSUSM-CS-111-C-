#include <iostream>

using namespace std;

int seqSearch(int myArray[], int key)
{
    for(int i = 0; i < 10; i++)
    {
        if(key == myArray[i]) return i;
    }
    return -1;
}
int main()
{
    int key;
    int myArray[10] = {12,-7,3,17,42,6,18,-15,0,1};
    do
    {
        cout << "Enter a value to search (-1 to quit): ";
        cin >> key;
        seqSearch(myArray, key);
        if(key==-1)
        {
            cout << "goodbye!" << endl;
        }
        else if(seqSearch(myArray, key) == -1)
        {
            cout << key << " was not found." << endl;
        }
        else
        {
            cout << key << " was found in slot " << seqSearch(myArray, key) << endl;
        }
    }while(key!=-1);
    return 0;
}
