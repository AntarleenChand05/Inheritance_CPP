#include <iostream>
using namespace std;

class vehicle {
    public:
string brand = "Bugatti";
void color() {
cout << "The color is red" << endl;
}
};

class car : public vehicle {
public:
string model = "Chiron";
};

int main() {
car myCar;
myCar.color();
cout << myCar.brand + " " + myCar.model << endl;
return 0;
}
/* OUTPUT:
The color is red
Bugatti Chiron
*/
