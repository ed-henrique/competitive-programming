#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Functions
int add(int a, int b)
{
    return a + b;
}

int main()
{

    // Data Types
    char c = 'a';
    bool b1 = true;
    short s1 = 10;
    int i = 10;
    long l = 10;
    long long ll = 10;
    float f = 10.0;
    double d = 10.0;

    // Variables
    // Declared using '='
    int x = 10;

    // IO
    cout << "Hello World" << endl; // cout is the output stream
    cin >> x;                      // cin is the input stream

    // Conditionals
    if (x == 10)
    {
        cout << "x is 10" << endl;
    }
    else if (x == 11)
    {
        cout << "x is 11" << endl;
    }
    else
    {
        cout << "x is not 10 or 11" << endl;
    }

    // Loops
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    while (x < 10)
    {
        cout << x << endl;
        x++;
    }

    do
    {
        cout << x << endl;
        x++;
    } while (x < 10);

    // Classes
    class Person
    {
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void sayHi()
        {
            cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
        }
    };

    // Pointers
    int x = 10;
    int *p = &x;        // p is a pointer to x
    cout << *p << endl; // dereference p to get the value of x

    // Arrays
    int arr[10];             // array of size 10
    int arr2[] = {1, 2, 3};  // array of size 3
    int arr3[2][3];          // 2D array of size 2x3
    int *arr4 = new int[10]; // dynamically allocated array of size 10

    // Strings
    string s2 = "Hello World";
    cout << s2.length() << endl;       // 11
    cout << s2.substr(0, 5) << endl;   // Hello
    cout << s2.find("World") << endl;  // 6
    cout << s2.find("Worlds") << endl; // -1

    // Vectors
    vector<int> v = {1, 2, 3};
    v.push_back(4);             // {1, 2, 3, 4}
    v.pop_back();               // {1, 2, 3}
    v.insert(v.begin() + 1, 5); // {1, 5, 2, 3}
    v.erase(v.begin() + 1);     // {1, 2, 3}
    v.clear();                  // {}

    // Maps
    map<string, int> m;
    m["a"] = 1;
    m["b"] = 2;
    m["c"] = 3;
    cout << m["a"] << endl; // 1
    cout << m["b"] << endl; // 2
    cout << m["c"] << endl; // 3

    // Sets
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.erase(2);
    s.clear();

    // Iterators
    vector<int> v = {1, 2, 3};
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // Algorithms
    vector<int> v = {1, 2, 3};
    sort(v.begin(), v.end());                     // {1, 2, 3}
    reverse(v.begin(), v.end());                  // {3, 2, 1}
    cout << count(v.begin(), v.end(), 1) << endl; // 1
    cout << count(v.begin(), v.end(), 2) << endl; // 0

    return 0;
}
