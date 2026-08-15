#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get current timez
    time_t now = time(0);

    // Convert to local time
    char* dt = ctime(&now);

    // Print formatted date and time
    cout << dt;

    return 0;
}
