#include <iostream> 

using namespace std;

class Zegop
{
private:
    int num;

public:
    Zegop(int num) : num(num) {}

    int getZegop()
    {
        num *= num;
        return num;
    }
};