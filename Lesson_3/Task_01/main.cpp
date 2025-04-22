#include <iostream>

using namespace std;

int main()
{
    char line[1000];
    bool words = false;
    int count = 0;

    cout << "Enter your line: --> ";
    cin.getline(line, 1000);

    for (int counter = 0; line[counter]; counter++) {
        if (tolower(line[counter]) >= 'a' && tolower(line[counter]) <= 'z') {
            if (!words) {
                words = true;
                count++;
            }
        }
        else words = false;
    }

    cout << "Words in line --> " << count << endl;
    return 0;
}
