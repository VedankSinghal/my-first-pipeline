#include <gtest/gtest.h>
#include <stdexcept> // Needed for exceptions

// A risky function
double divide(double a, double b) {
    (b == 0) {
        throw std::invalid_argument("Cannot divide by zero!");
    }
    return a / b;
}

TEST(ErrorHandling, DivideNormally) {
    // This should NOT throw anything
    EXPECT_NO_THROW(divide(10, 2));
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
