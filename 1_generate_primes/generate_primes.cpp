/*
    This is a little C++ prog to generate prime numbers less than an input number.

    Usage: ./generate_primes.exe 
    Usage: ./generate_primes.exe <target>

    If no argument specified, it will prompt for an integer input.
    If an integer is given in the command line it will print out the prime numbers less than that input.
*/

#include <iostream>
#include <cmath>
#include <vector>


bool is_prime(int num_to_check);
void generate_primes_vector(std::vector<bool> &primes, int target);
void print_primes_vector(const std::vector<bool> &primes);

int main(int argc, char *argv[]) {
    std::vector<bool> primes;
    int target = 0;
    if (argc == 2) {
        target = atoi(argv[1]);
    } else if (argc == 1) {
        // run prompt
        std::cout << "Enter integer to see prime numbers less than that number:\n>";
        std::cin >> target;
    } else {
        // invalid input
        std::cout << "Invalid input. Program takes 0 or 1 integer arguments.\n";
    }
    generate_primes_vector(primes, target);
    print_primes_vector(primes);

    return 0;
}

void generate_primes_vector(std::vector<bool> &primes, int target) {
    primes.push_back(0); // for the 0 index
    primes.push_back(0); // for the 1 index
    primes.push_back(1); // first prime is at 2 index
    primes.push_back(1); // prime at index 3
    for (int i = 4; i < target; i++) { 
        if (is_prime(i)) {
            primes.push_back(1);
        } else {
            primes.push_back(0);
        }
    }
}

bool is_prime(int num_to_check) {
    int counter = 2;
    while (counter <= sqrt(num_to_check)) {
        if (num_to_check % counter == 0) {
            return false;
        }
        counter++;
    }
    return true;
}

void print_primes_vector(const std::vector<bool> &primes) {
    for (int i = 0; i < primes.size(); i++) {
        if (primes[i] == 1) {
            std::cout << i << " ";
        }
    }
}
