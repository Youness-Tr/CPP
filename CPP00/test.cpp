#include <iostream>

// class car{
//     private :
//         std::string type;
//         static int kilo;
//         std::string name;
//     public :
//         static int get_all(){
//             return kilo;
//         }
//         // void set_type(std::string input);
//         static void set_kilo(int input){
//             kilo = input;
//         }
// };

// int main(){
//     // car bmw;
//     // car bb;

//     car::set_kilo(100);
//     car::set_kilo(400);
//     std::cout << car::get_all() << "\n";
//     std::cout << car::get_all() << "\n";
// }

#include <iostream>
using namespace std;

class car {
private:
    static int sharedValue;

public:
    static void setSharedValue(int value) {
        sharedValue = value;
    }
    static int getSharedValue() {
        return sharedValue;
    }
};

// Definition and initialization of the static variable
int car::sharedValue = 0;

int main() {
    car ob1;
    car ob2;

    ob1.setSharedValue(42);
    cout << "Shared Value: " << car::getSharedValue() << endl;

    ob2.setSharedValue(100);
    cout << "Updated Shared Value: " << ob1.getSharedValue() << endl;

    return 0;
}
