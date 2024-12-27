#include <iostream>
#include <vector>
using namespace std;


template <class T>
void insert_vec(vector<T> &vec , int size){
    int elements;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> elements;
        vec.push_back(elements);   

    }
}

template <class T>
void display_vec(vector<T> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        // cout << vec[i] << " ";
        cout << vec.at(i) << " ";
    }
    cout << endl;
}



int main() {
    // vector<int> vec1;
    // int size;
    // cout << "Enter the size of the vector: ";
    // cin >> size;
    // insert_vec(vec1, size);
    // cout << "The elements of the vector are: ";
    // display_vec(vec1);
    // cout << vec1.front() << endl;  // Returns the first element of the vector
    // cout << vec1.back() << endl;   // Returns the last element of the vector

    // vector<int> :: iterator iter1 = vec1.begin();
    // vec1.insert(iter1, 50);  // Inserts 5 at the beginning of the vector
    // display_vec(vec1);

    // vector<int> :: iterator iter2 = vec1.end();
    // vec1.insert(iter2, 50);  // Inserts 5 at the end of the vector
    // display_vec(vec1);

    // vec1.pop_back();  // Removes the last element of the vector
    // display_vec(vec1);

    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};
    display_vec(vec2);
    vector<char> :: iterator iter3 = vec2.begin();
    vec2.insert(iter3, 'f');  // Inserts 'f' at the beginning of the vector
    display_vec(vec2);


    vector<char> vec3(vec2);  // Copying the elements of vec2 to vec3
    display_vec(vec3);

    vector<float> vec4(6,3.7);  // Creates a vector of size 6 with all elements as 3.7
    display_vec(vec4);


    return 0;
}