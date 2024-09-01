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
        {1, 2, 4},
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

## Declaring and Initializing Vectors

```cpp
// one dimensional vector
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

// two dimensional vector
vector <vector<int>> movie_rating {
    {1, 2, 3, 4},
    {1, 2, 4, 4},
    {1, 3, 4, 5}
};
```

## Accessing Elements and modifying Vector Elements

```cpp
// Accessing elements
cout << vowels[0]; // a
cout << vowels.at(0); // a

cout << movie_rating[0][0]; // 1
cout << movie_rating.at(0).at(0); // 1

// Modifying elements
vowels[0] = 'z';
movie_rating.at(0).at(0) = 100;
```

## Adding Elements to a Vector

```cpp
// adding elements
vowels.push_back('x');
movie_rating.at(0).push_back(100);

// adding a new row
movie_rating.push_back({1, 2, 3, 4});
```

## removing elements from a vector

```cpp
// removing elements
vowels.pop_back(); // removes the last element
movie_rating.at(0).pop_back(); // removes the last element of the first row
movie_rating.pop_back(); // removes the last row

// removing all elements
vowels.clear();

// removing a element at a specific position
vowels.erase(vowels.begin() + 1); // removes the second element
```
