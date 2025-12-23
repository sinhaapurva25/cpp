#include <iostream>
using namespace std;

namespace Apurva {
    void display() {
        cout << "You are in namespace Apurva";
    }
}

namespace Sinha {
    void display() {
        cout << "You are in namespace Sinha";
    }
}

int main() {
    // using namespace Apurva;
    // using namespace Sinha;
    Apurva::display();
    Sinha::display();
    return 0;
}