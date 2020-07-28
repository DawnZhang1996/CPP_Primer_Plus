#include <iostream>
#include <cstring>
#include <string>

struct Food {
    std::string name;
    double D;
    int weight;
};

int main(void)
{
   using namespace std;
   Food pizza[9];
   cout << "Enter the name:";
   getline(cin, pizza[0].name);
   cout << "Enter the D:";
   cin >> pizza[0].D;
   cout << "Enter the weight:";
   cin >> pizza[0].weight;

   cout << endl;
   cout << "Name: " << pizza[0].name << endl;
   cout << "D: " << pizza[0].D << endl;
   cout << "Weight: " << pizza[0].weight << endl;

};
