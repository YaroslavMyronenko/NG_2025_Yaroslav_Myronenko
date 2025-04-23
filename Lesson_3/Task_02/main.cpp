#include <iostream>

using namespace std;

int main()
{
    string line;
    char vowels[5] = {'a', 'e', 'u', 'o', 'i'};
    int count_vov = 0, count_silent = 0;

    cout << "Enter line --> ";
    getline(cin, line);

    int lenght_line = line.length();

    for (int counter = 0; line[counter]; counter++) {
        bool flag = false;
        for (int vov_caunt = 0; vov_caunt < 5; vov_caunt++) {
            if (tolower(line[counter]) == vowels[vov_caunt]) {
                count_vov++;
                flag = true;
                break;
            }
        }

        if (!flag)
            count_silent++;
    }

    double vov_rate = count_vov * 100 / lenght_line;
    double silent_rate = count_silent * 100 / lenght_line;

    cout << "\nNumber of vowel characters in a line: " << count_vov << endl;
    cout << "Number of silent characters in a line: " << count_silent << endl;
    cout << "The ratio of vowels: " << count_vov << " to " << count_silent << endl;
    cout << "Vowel character ratio per line: " << vov_rate << endl;
    cout << "Silent character ratio per line: " << silent_rate << endl;
}
