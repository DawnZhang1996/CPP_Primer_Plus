#include <iostream>
#include <cstring>

struct CandyBar {
    std::string brand;
    double weight;
    int caluli;
};

int main(void)
{
    using namespace std;
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350},
    };

    for (int i = 0; i < 3; i++) {
        cout << "Brand:" << snack[i].brand << endl;
        cout << "Brand:" << snack[i].weight << endl;
        cout << "Brand:" << snack[i].caluli << endl;
    };

};
