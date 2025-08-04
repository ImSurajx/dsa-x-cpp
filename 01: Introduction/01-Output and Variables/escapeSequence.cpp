// How to move into next line when we are printing text?
#include <iostream>
using namespace std;
int main()
{
    // There are total two ways of moving into next line
    // First one is using 'endl' & antoher one is using '\n'
    // work like enter key, in keyboard.
    // the differnce b/w endl or \n is the "\n" written inside double quotes. 
    cout << "Hello Suraj" << endl;
    cout << "How are you?\nWhat's going on?";
    return 0;
    // Output: 
    // Hello Suraj
    // How are you?
    // What's going on?
}