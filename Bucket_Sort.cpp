#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(float arr[], int n) {
    // 1. Tao n thung (bucket) rong duoi dang vector
    std::vector<float> buckets[n]; // Mang cac vector

    // 2. Scatter (Phan tan): Dua tung phan tu vao thung thich hop
    for(int i = 0; i < n; i++) {
        int _index_ = n * arr[i]; // chi so cua bucket
        buckets[_index_].push_back(arr[i]);
    }

    // 3. Sort (Sap xep tung thung doc lap)
    for(int i = 0; i < n; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    // 4. Gather (Thu gom): Dua cac phan tu cac thung tro lai mang ban dau
    int index = 0;
    for(int i = 0; i < n; i++) {
        for(size_t j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Mang truoc khi sap xep:\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";

    bucketSort(arr, n);

    std::cout << "Mang sau khi sap xep:\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";

    return 0;
}
