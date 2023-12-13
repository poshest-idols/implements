#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to find the sum of prime numbers in a given range
int sumOfPrimesInRange(int start, int end) {
    int sum = 0;

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int start, end;

    // Get the range from the user
    std::cout << "Enter the start of the range: ";
    std::cin >> start;

    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    // Find and display the sum of prime numbers in the range
    int result = sumOfPrimesInRange(start, end);

    std::cout << "Sum of prime numbers in the range [" << start << ", " << end << "]: " << result << std::endl;

    return 0;
}
