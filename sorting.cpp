#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

void quickerSort(vector<int> &a, int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = a[(left + right) / 2];

      // partitioning the vector
      while (i <= j) {
            while (a[i] < pivot)
                  i++;
            while (a[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = a[i];
                  a[i] = a[j];
                  a[j] = tmp;
                  i++;
                  j--;
            }
      };

      // recursive calls
      if (left < j)
            quickerSort(a, left, j);
      if (i < right)
            quickerSort(a, i, right);

}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  quickerSort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
