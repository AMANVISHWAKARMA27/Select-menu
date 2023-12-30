#include <iostream>
using namespace std;

class car {
    public:
    int brand[10];
    char wheels;
    int doors;
};

int main()
{
    car honda;
    cout<<sizeof(honda.brand)<<endl;
    cout<<sizeof(honda.wheels)<<endl;
    cout<<sizeof(honda.doors)<<endl;
    cout<<sizeof(honda)<<endl;

    return 0;
}