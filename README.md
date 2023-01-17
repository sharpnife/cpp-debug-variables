# cpp-debug-variables

## Purpose
  For help in debugging sessions, to print variable name and it's contents. 

## Motivation
  To help myself quickly debug variables when prototyping solutions, typically in programming competitions. 

## Usage
```cpp
    vector<string> fruits = {"apple", "mango", "orange"};
    debug(fruits); // fruits -> [apple, mango, orange]
    
    vector<pair<string, int>> nums = {{"one", 1}, {"two", 2}};
    debug(nums); // nums -> [{one, 1}, {two, 2}]
```

## Disclaimer
  Not all the types are supported, I've priotrized including all the common types, which one would typically use in programming competitions. Feel free to create PRs to include more types. 

> **List of supported types**
> - [All basic types](https://en.cppreference.com/w/cpp/language/types)
> - vector of basic types
> - vector of pair of basic types
> - vector of vector of pair of basic types
> - vector of vector of basic types
> - vector of array of basic types ("array" being [c++ arrays](https://en.cppreference.com/w/cpp/container/array))
> - map[k, v] where k, v are basic types
> - map[k, pair<a, b>] where k, a, b are basic types
> - set of basic types
> - set of pair<a, b> where a, b are basic types
> - pair<a, b> where a, b are basic types
    
