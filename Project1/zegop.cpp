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
        this->num *= this->num;
        return this->num;
    }

    void initZegop(int i)
    {
        this->num = i;
    }
};