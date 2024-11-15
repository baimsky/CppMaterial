#include <iostream>
#include <string>

char uppercaseAlphabet[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
char lowercaseAlphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

int main()
{
    char inputAlphabet;
    std::cout << "Please input 1 alphabet to see its order : ";
    std::cin >> inputAlphabet;

    int n1 = sizeof(uppercaseAlphabet) / sizeof(uppercaseAlphabet[0]);
    int n2 = sizeof(lowercaseAlphabet) / sizeof(lowercaseAlphabet[0]);

    int idx1 = -1;
    int idx2 = -1;

    // Search in uppercase
    for (int i = 0; i < n1; i++) {
        if (uppercaseAlphabet[i] == inputAlphabet) {
            idx1 = i;
            break;
        }
    }

    // Search in lowercase
    if (idx1 == -1) {
        for (int i = 0; i < n2; i++) {
            if (lowercaseAlphabet[i] == inputAlphabet) {
                idx2 = i;
                break;
            }
        }
    }

    // Output results
    if (idx1 != -1) {
        std::cout << inputAlphabet << " is the " << (idx1 + 1) << " alphabet (" << (idx1 + 1) << " of " << n1 << ")" << std::endl;
    }
    else if (idx2 != -1) {
        std::cout << inputAlphabet << " is the " << (idx2 + 1) << " alphabet (" << (idx2 + 1) << " of " << n2 << ")" << std::endl;
    }
    else {
        std::cout << "Element not Found!" << std::endl;
    }

    return 0;
}