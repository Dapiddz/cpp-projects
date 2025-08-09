#include <iostream>
#include <thread>
#include <chrono>

int main() {
    int seconds;

    std::cout << "Enter countdown time (seconds): ";
    std::cin >> seconds;

  
    if (seconds < 0) {
        std::cout << "Please enter a non-negative number.\n";
        return 1;
    }


    for (int i = seconds; i >= 0; --i) {
        std::cout << "T-" << i << " seconds" << std::endl;
        
       
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "🚀 Blastoff!" << std::endl;
    return 0;
}
