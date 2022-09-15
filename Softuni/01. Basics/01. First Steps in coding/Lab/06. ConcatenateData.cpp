#include <iostream>
#include <string>
using namespace std;

int main()
{
    string FirstName;
    cin >> FirstName;

    string LastName;
    cin >> LastName;

    int age;
    cin >> age;

    string town;
    cin.ignore();
    getline(cin, town);
   // cin >> town;

    // You are &lt;firstName&gt; &lt;lastName&gt;, a &lt;age&gt;-years old person from &lt;town&gt;.&quot;
    cout << "You are " << FirstName << " " << LastName << ", a " << age << "-years old person from " << town << ".";
    return 0;

}
