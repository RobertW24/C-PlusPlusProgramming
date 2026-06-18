
#include <iostream>
#include <string>

void print_combos(int n);
void combos_helper(std::string& s, int n, int i);

int main(void) {
    std::cout << "Enter size ";
    int n;
    std::cin >> n;
    print_combos(n);
    
    return 0;
}

void print_combos(int n) {
    std::string s(n, 'a');
    // Call the helper function
    combos_helper(s, n, 0);
}

void combos_helper(std::string& s, int n, int i) {
    // Base case
    if (i >= n) {
        std::cout << s << std::endl;
        return;
    }
    
    while (s[i] <= 'z') {
        // Recursive call for the next character
        combos_helper(s, n, i + 1);
        s[i]++;
    }
    s[i] = 'a';
}