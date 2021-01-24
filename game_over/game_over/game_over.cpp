// Game Over
// A first C++ program

// pre processor directive. Signified by the # symbol
// this tells the pre processor to include content from iostream file.
// iostream is part of standard library. Used to help display output
// #include <iostream>

// all C++ programs need a main(). This is the starting point of the program.
/* int main() // int indicates this function will return an integer
{
    std::cout << "Game Over!\n";
    return 0;
} */

// Game Over 2.0
// Shows a using directive

/* #include <iostream>
using namespace std; // gives direct access to elements in the std namespace

int main() 
{
    cout << "Game Over" << endl;
    return 0;
} */

// Game Over 3.0
// shows using declarations

#include <iostream>
using std::cout; // declares exactly which elements from std namespace I want. So I can access them directly
using std::endl;

int main()
{
    cout << "Game Over!" << endl;
    return 0;
}
