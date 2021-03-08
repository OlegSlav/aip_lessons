#include <iostream>
#include <fstream>

void Filewrite();

using namespace std;

int main()
{
    std::cout << "***     ***" << std::endl
              << " **     ** " << std::endl
              << "  **   **  " << std::endl
              << "   ** **   " << std::endl
              << "    ***    " << std::endl;
    return 0;
}

void Filewrite() {
    std::ofstream inFile;
    inFile.open("Answer1.txt");
    inFile << "***     ***" << std::endl
           << " **     ** " << std::endl
           << "  **   **  " << std::endl
           << "   ** **   " << std::endl
           << "    ***    " << std::endl;
    inFile.close();
}
