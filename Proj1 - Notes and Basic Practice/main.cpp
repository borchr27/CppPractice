//Hello World
//Mitchell B
// link to helpful video: https://www.youtube.com/watch?v=DIw02CaEusY

// need to save code crtl-s, build code, crtl-shft-b, then execute with .\a.exe
#include <iostream>
using namespace std;

int main()
{
    string name;
    string favFood;

    cout << "Please enter your name:" << endl;
    cin >> name;
    cout << "Hello there " << name << " what is your favorite food?" << endl;
    cin >> favFood;
    cout << "Yum " << favFood << " is my favorite too" << endl; 
    
    int num = 1;
    int hum = 0;
    hum = num++;
    cout << num << hum << endl;
    
    // Incrementing and Deprecating
    // i--, i++, --i, ++i
    num = 1;
    hum = 0;
    hum = ++num;
    cout << num << hum << endl;

    // Changing the output forms from hex to dec
    // Changes what byte prints out as
    // Oct switches to octal mode
    int byte = 255;
    cout << hex << byte << endl;
    cout << byte << dec << byte << endl;

    // ASCII recognizing the type or formatting based on input
    // Newline char \n must be in quotes to work, endl does the same fn
    char Char = 'X';
    int Int = Char;
    cout<<Char<<" "<<(int)Char<<" "<<Int<<" "<<(char)Int << "\n";

    // Using the fixed and scientific functions to format outputs
    float x = 2.5, y = 0.0000000025;
    cout << fixed << x << " " << y << endl;
    cout << scientific << x << " " << y << endl;
}