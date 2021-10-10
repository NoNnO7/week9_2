#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    std::cout << "Input data string:";
    ofstream MyFile("data.txt");
    string s = "";
    while (s != ".")
    {
        cin >> s;
        MyFile << s << endl;
    }
    MyFile.close();
    return 0;
}