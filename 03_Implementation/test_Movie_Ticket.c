#include "unity.h"

extern void void test_Movie_Ticket();

void setUp(void)
{
}

void tearDown(void)
{
}
int main(void)
{
    unityBegin(NULL);

    RUN_TEST(test_Movie_Ticket);

    return (UnityEnd());
}