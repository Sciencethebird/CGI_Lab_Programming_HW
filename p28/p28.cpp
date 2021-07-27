#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
int main() {
    std::vector<float> v{1.5, 2.5, 3.5};
    float sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << sum << std::endl;
}
