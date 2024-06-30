#include "pch.h"
#include "../Project1/Zegop.cpp"

using namespace std;

class ZegopFixture : public testing::Test
{
protected:
    void SetUp() override
    {
        cout << "테스트 준비" << endl;
        this->z.initZegop(10);
    }
    void TearDown() override
    {
        cout << "테스트 완료" << endl;
    }
public:
    Zegop z{ 10 };

    void getZegopMany(int n)
    {
        int ret = 10;
        for (int i = 0; i < n; i++)
        {
            ret *= ret;
            cout << ret << endl;
            EXPECT_EQ(ret, z.getZegop());
        }
    }
};

TEST_F(ZegopFixture, cal1)
{
    getZegopMany(1);
}

TEST_F(ZegopFixture, cal2)
{
    getZegopMany(2);
}

TEST_F(ZegopFixture, cal3)
{
    getZegopMany(3);
}