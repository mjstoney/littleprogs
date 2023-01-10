/* This little program will print the first N consecutive prime numbers
    where N is specified as a command line argument.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

void print_primes(int range);
bool is_prime(int num);
void read_primes_file();
void generate_prime_list(std::vector<int> &list);

int main(int argc, char *argv[])
{
    std::vector<int> primes_list;
    int target = atoi(argv[1]);
    // generate_prime_list(primes_list, target);
    std::cout << is_prime(11) << " " << is_prime(24) << "\n";
}
bool is_prime(int num)
{
    int idx = 2;
    while (idx < sqrt(num)) {
        if (num % idx == 0) {
            return false;
        }
        idx++;
    }
    return true;
}

void generate_prime_list(std::vector<int> &list, int target) {
    int count = 0;

    while (count < target) {
            
    }
}



void read_primes_file() {
    std::ifstream in_file("primes.txt");
    if (!in_file) {
        std::cerr << "Could not open primes.txt.\n";
    }
    while(in_file) {
        std::string line;
        std::getline(in_file, line);
        std::cout << "asdasd/ " << line << " /adasd\n";
    }
}


void print_primes(int range)
{
    for (int i = 0; i < range; i++)
    {
        if (is_prime(i))
        {
            std::cout << i << "\n";
        }
    }
}

