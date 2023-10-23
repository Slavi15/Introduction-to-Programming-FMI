#include <iostream>

using namespace std;

int main()
{
    char firstALetter, lastALetter, firstBLetter, lastBLetter, ch;

    cin >> firstALetter >> lastALetter >> firstBLetter >> lastBLetter >> ch;

    bool unionCheck = false, intersectionCheck = false, diffCheck = false, finalCheck = false;

    if (ch >= 65 && ch <= 90) ch += 32;

    if ((ch >= (firstALetter + 32) && ch <= (lastALetter + 32)) || (ch >= firstBLetter && ch <= lastBLetter))
        unionCheck = true;
        
    if (ch >= (firstALetter + 32) && ch >= firstBLetter && ch <= (lastALetter + 32) && ch <= lastBLetter)
        intersectionCheck = true;

    if (ch < firstBLetter || ch > lastBLetter)
        diffCheck = true;

    if (!intersectionCheck) finalCheck = true;

    cout << (unionCheck ? "true" : "false") << ", " << (intersectionCheck ? "true" : "false") << ", " << (diffCheck ? "true" : "false") << ", " << (finalCheck ? "true" : "false") << endl;

    return 0;
}