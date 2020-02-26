#include <iostream>

using namespace std;

int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "\n The first vowel is: " << vowels[0] << endl;
    cout << "\n The last vowel is: " << vowels[4] << endl;
    
    double hi_temps[] = {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "The first temperature is now: " << hi_temps[0] << endl;

    // int test_scores[5];

    // //Array values generate junk when not initialized
    // cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    // cout << "Second score at index 1: " << test_scores[1] << endl;
    // cout << "Third score at index 2: " << test_scores[2] << endl;
    // cout << "Fourth score at index 3: " << test_scores[3] << endl;
    // cout << "Fifth score at index 4: " << test_scores[4] << endl;    
    
    
    // int test_scores[5] = {};

    // //Array values when initialized with curly brackets generates '0' value!
    // //Bottom line: always initialize arrays, else the values will generate junk!
    // cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    // cout << "Second score at index 1: " << test_scores[1] << endl;
    // cout << "Third score at index 2: " << test_scores[2] << endl;
    // cout << "Fourth score at index 3: " << test_scores[3] << endl;
    // cout << "Fifth score at index 4: " << test_scores[4] << endl;

    int test_scores[] = {100,90,80,70,60};

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    //Original initialized values in an array can be changed with input
    cout << "Insert 5 test scores!" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
  
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl;
    cout << endl;

    return 0;  
}