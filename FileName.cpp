#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int l1 = 10;
    int l2 = 10;
    vector<int> vec1;
    vector<int> vec2;
    cout << "¬ведите первый вектор: " << endl;
    for (int i = 0; i < l1; i++) {
        int num;
        cin >> num;
        vec1.push_back(num);
    }
    cout << "¬ведите второй вектор: " << endl;
    for (int i = 0; i < l2; i++) {
        int num;
        cin >> num;
        vec2.push_back(num);
    }
    vector<int> vec3(vec1.begin(), vec1.end());
    vec3.insert(vec3.end(), vec2.begin(), vec2.end());

    int sum = 0;
    for (int num : vec3) {
        if (num > 0) {
            sum += num;
        }
    }

    cout << "—умма положительных элементов: " << sum << endl;

    return 0;
}
