#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> firstSubset, vector<int> secondSubset) {

    int n = 0;
    int j = 0;
    vector<int> rv;
    for(int i = 0; i < firstSubset.size() + secondSubset.size(); i++){

        if((firstSubset[n] < secondSubset[j]) && n < firstSubset.size()){
            rv.push_back(firstSubset[n]);
            n++;
        } else if((firstSubset[n] > secondSubset[j]) && j < secondSubset.size()){
            rv.push_back(secondSubset[j]);
            j++;
        } else if(n >= firstSubset.size()){
            rv.insert(rv.end(), secondSubset.begin() + j, secondSubset.end());
            return rv;
        } else if(j >= secondSubset.size()){
            rv.insert(rv.end(), firstSubset.begin() + n, firstSubset.end());
            return rv;
        }
    }

    return rv;
} // ending bracket of method merge

vector<int> mergeSort(vector<int> listToBeSorted) {
    if(listToBeSorted.size() <= 1){
        return listToBeSorted;
    }

    int mid = listToBeSorted.size() / 2;

    vector<int> c = mergeSort(vector<int> (listToBeSorted.begin(), listToBeSorted.begin() + mid));

    vector<int> d = mergeSort(vector<int> (listToBeSorted.begin() + mid, listToBeSorted.end()));

    return merge(c,d);

} // ending bracket of method mergeSort

int main () {
    srand(time(0)); // Seed the random number generator with the current time

    vector<int> nums;
    cout << "Generated Numbers: ";
    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 100; // Generate a random number between 0 and 99
        nums.push_back(randomNum);
        cout << randomNum << " ";
    }
    cout << endl;

    vector<int> sortedNums = mergeSort(nums);

    cout << "Sorted Numbers: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    // Check if the sorting is successful
    bool isSorted = true;
    for (int i = 1; i < sortedNums.size(); i++) {
        if (sortedNums[i] < sortedNums[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "Sorting is successful!" << endl;
    } else {
        cout << "Sorting failed." << endl;
    }

    return 0;
} // ending bracket for main program to test sort