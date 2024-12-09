#include <iostream>

using namespace std;

namespace myNamespace{
    int x = 10;
    int y = 20;
}

class animal{
    public:
        animal(){
            cout << "Animal constructor" << endl;
        }
        ~animal(){
            cout << "Animal destructor" << endl;
        }
    private:
        string type;
};

void increment(int &a){
    a++;
}

int &max_value(int &a, int b){
    return a > b ? a : b;
}

int &add(int &a, int b){
    a = a + b;
    return a;
}


int main(){
    animal dog;

    int age = 10;
    // int x = 5;
    // int y = 10;
    int &ref = age;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "age :: " << age << endl;
    cout << "ref :: " << ref << endl;

    increment(ref);
    cout << "age :: " << age << endl;
    cout << "ref :: " << ref << endl;

    // ref = max_value(arr[0], arr[1]);
    // int &res = add(x, y);

    cout << "x :: " << myNamespace::x << endl;
    cout << "y :: " << myNamespace::y << endl;
    return 0;
}