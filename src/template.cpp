#include <iostream>
#include <cstdio>

using namespace std;

void init_code()
{
    // Initialize where the input file will be and where to output 
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
}

int main() 
{
    init_code();

    string message;
    cin >> message; 

    cout << message << endl;
    return 0;
}