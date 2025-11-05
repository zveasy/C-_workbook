#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Delcre 2 empty vecotrs of intgers names
    // Vecotor1 and Vector2
    vector <int> vector1;
    vector <int> vector2;


    vector1.push_back(10);
    vector1.push_back(20);

    // Display Vector1 at index 0 and 1
    cout << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "Vector1 size: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "Vector2 size: " << vector2.size() << endl;

    // Create an empty 2D vector
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display the 2D vector

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // Change the value of vector1 at index 0
    vector1.at(0) = 1000;


    // Display the 2D vector again
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // Display the elemesnts of vector1
    cout << "Vector1: " << endl;
    cout << "" << vector1.at(0) << " " << vector1.at(1) << endl;
    return 0;
}