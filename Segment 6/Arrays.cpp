#include <iostream>

using namespace std;

int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "\n The first vowel is: " << vowels[0] << endl;
    cout << "\n The last vowel is: " << vowels[4] << endl;

    // #if __cplusplus == 201402L
    //     std::cout << "C++14" << std::endl;
    // #elif __cplusplus==201103L
    //     std::cout << "C++11" << std::endl;
    // #else
    //     std::cout << "Old C++" << std::endl;
    // #endif
    
    return 0;  
}