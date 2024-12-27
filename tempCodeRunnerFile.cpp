
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    insert_vec(vec1, size);
    cout << "The elements of the vector are: ";
    display_vec(vec1);
    cout << vec1.front() << endl;  // Returns the first element of the vector
    cout << vec1.back() << endl;   // Returns the last element of the vector

    vector<int> :: iterator iter1 = vec1.begin();
    vec1.insert(iter1, 50);  // Inserts 5 at the beginning of the vector
    display_vec(vec1);

    vector<int> :: iterator iter2 = vec1.end();
    vec1.insert(iter2, 50);  // Inserts 5 at the end of the vector
    display_vec(vec1);

    vec1.pop_back();  // Removes the last element of the vector
    display_vec(vec1);
