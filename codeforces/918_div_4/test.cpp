#include <iostream>
#include <map>
using namespace std;

class FenwickTreeWithDuplicates {
public:
    FenwickTreeWithDuplicates() {}

    void update(int value, int frequency) {
        while (value <= max_value) {
            tree[value] += frequency;
            value += value & -value; // Move to the next node
        }
    }

    int query(int value) const {
        int result = 0;
        auto it = tree.lower_bound(value);
        while (it != tree.begin()) {
            --it;
            result += it->second;
            break;
            
        }
        return result;
    }

    void decrease(int value) {
        auto it = tree.find(value);
        if (it != tree.end()) {
            update(value, -1);
            if (it->second == 1) {
                tree.erase(it);
            }
        }
    }

    void increase(int value) {
        update(value, 1);
    }

private:
    std::map<int, int> tree;  // Map to handle duplicate values and their frequencies
    static const int max_value = 2 * int(1e5) + 5;  // Adjust the maximum value as needed
};

int main() {
    FenwickTreeWithDuplicates bit;

    // Example usage
    bit.increase(8);
    bit.increase(6);
    bit.increase(9);
    bit.increase(5);
    bit.increase(10);

    // Query the count of elements less than or equal to 100
    int count = bit.query(100);
    std::cout << "Count of elements less than or equal to 100: " << count << std::endl;

    return 0;
}
