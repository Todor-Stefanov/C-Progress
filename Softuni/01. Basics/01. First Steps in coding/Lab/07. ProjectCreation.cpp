#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ArchitechtName;
    getline(cin, ArchitechtName);

    int NumberOfProjects;
    cin >> NumberOfProjects;

    int Hours = 3 * NumberOfProjects;

    cout << "The architect " << ArchitechtName << " will need " << Hours << " hours to complete " << NumberOfProjects << " project/s.";
    return 0;
}

