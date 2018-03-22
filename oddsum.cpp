#include <iostream>
#include <vector>

using namespace std;

int main() {

  int size, value, res = 0;

  cin >> size;

  vector<int> numbers(size);

  for (int i = 0; i < size; i++) {
    cin >> value;
    numbers[i] = value;
  }

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (!((numbers.at(i) + numbers.at(j)) % 2 == 0)) {
        res++;
      }
    }
  }

  cout << res << endl;

  return 0;
}