#include <iostream>
#include <array>

using namespace std;
int main(void)
{
    array<double, 3> grades;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Your grade: ";
        cin >> grades[i];
    }

    double avg = (grades[0] + grades[1] + grades[2]) / 3.0;

    cout << "Average grade: " << avg << endl;
    return 0;
}
