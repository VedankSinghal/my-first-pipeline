#include <gtest/gtest.h>
#include <stdexcept> // Needed for exceptions

// A risky function
double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Cannot divide by zero!");
    }
    return a / b;
}

#TEST(ErrorHandling, DivideByZero) {
    // We expect the function 'divide(10, 0)' to throw 'std::invalid_argument'
 #   EXPECT_THROW(divide(10, 0), std::invalid_argument);
}

TEST(ErrorHandling, DivideNormally) {
    // This should NOT throw anything
    EXPECT_NO_THROW(divide(10, 2));
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
