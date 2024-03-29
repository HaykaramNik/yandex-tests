#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintWorryCount(const vector<bool>& is_nervous) {
    // подсчитываем количество элементов в векторе is_nervous, равных true
    int worry_count = 0;
    for (bool status : is_nervous) {
        if (status) {
            ++worry_count;
        }
    }
    cout << worry_count << endl;
}

int main() {
    // не меняйте содержимое функции main
    // PrintWorryCount({true, true, false, true});
		vector<bool> is_ner = {true, true, false, true, false};
		int cnt = count(is_ner.begin(), is_ner.end(), true);
		cout << cnt << endl;
    return 0;
}
