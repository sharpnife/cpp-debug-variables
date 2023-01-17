# cpp-debug-variables

## Purpose
  For help in debugging sessions, to print variable name and it's contents. 

## Motivation
  To help myself quickly debug variables when prototyping solutions, typically in programming competitions. 

## Usage
```
vector<int> a = {1, 2, 3};
debug(a);
```
> Output
> 
> a -> [1, 2, 3]

## Disclaimer
  Not all the types are supported, I've priotrized including all the common types which a person typically would use in programming compettions. Feel free to create a PR to include more types. 

> **List of supported types**
> - [All basic types](https://en.cppreference.com/w/cpp/language/types)
> - vector of basic types
> - vector pair of basic types
> - vector of vector of pair of basic types
> - vector of vector of basic types
> - vector of array of basic types ("array" being [c++ arrays](https://en.cppreference.com/w/cpp/container/array))
> - map[k, v] where k, v are basic types
> - map[k, pair<a, b>] where k, a, b are basic types
> - set of basic types
> - set of pair<a, b> where a, b are basic types
> - pair<a, b> where a, b are basic types
    
