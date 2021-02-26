#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float r1,r2;
    std::cout << "Please enter value of radiuses r1 and r2:";
    cin >> r1;
    std::cin >>r2;
    float S=M_PI*0.25*(r1+r2)*(r1+r2);
    std::cout << "The Square of Salinon is:" << S << std::endl;

    return 0;
}
