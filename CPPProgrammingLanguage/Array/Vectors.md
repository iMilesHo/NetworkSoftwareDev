# Vectors in C++

```cpp

vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

// array like syntax
cout << vowels[0];
vowels[0] = 100;

vector <int> test_scores {100, 98, 89};
cout << test_scores[0];
cout << test_scores.at(0);
test_scores.push_back(score_to_add); // add one more

// Example of a 2D-vector

vector <vector<int>> movie_ratings {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
};

 cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

     cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

```
