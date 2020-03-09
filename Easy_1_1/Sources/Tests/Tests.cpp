#include <gtest/gtest.h>
#include "../Queue.h"

TEST(Easy_1_1, sizeQueue){
    auto x = Queue();
    ASSERT_EQ(x.Size(),17);
    auto y = Queue(45);
    ASSERT_EQ(y.Size(),45);
    ASSERT_EQ(y.ContainedNumber(),0);
    y.Push("anything");
    ASSERT_EQ(y.ContainedNumber(), 1);
    ASSERT_EQ(std::string("anything"), *y.Back());
    y.Push("thing");
    ASSERT_EQ(y.ContainedNumber(), 2);
    ASSERT_EQ(std::string("anything"), *y.Back());
    y.Pop();
    ASSERT_EQ(y.ContainedNumber(), 1);
    ASSERT_EQ(std::string("thing"), *y.Back());
    for (int i = 0; i < y.Size(); ++i){
        try{
            y.Push(std::string("something"));
        }
        catch (std::exception x){
            ASSERT_EQ(std::string(x.what()), std::string("Queue Overflow"));
        }
    }
    ASSERT_EQ(y.Size(), 45);
    ASSERT_TRUE(true);
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}