#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <array>


//vector of "c++ arrays i.e. std::array"
template<typename T, std::size_t N>
void debug(const std::string name, const std::vector<std::array<T, N>> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [\n";
    int ind = 0;
    for (auto v: a) {
        auto it = v.begin();
        std::cerr << ind << ": [";
        for (int i = 0; i < (int)v.size(); i++) {
            std::cerr << *it;
            if (i < (int)v.size() - 1) std::cerr << ", ";
            std::advance(it, 1);
        }
        std::cerr << "]\n";
        ind += 1;
    }
    std::cerr << "]\n";
}


//vector of vector of pair<T, U> where U, V are basic types
template<typename T, typename U>
void debug(const std::string name, const std::vector<std::vector<std::pair<T, U>>> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [\n";
    int ind = 0;
    for (auto v: a) {
        auto it = v.begin();
        std::cerr << ind << ": [";
        for (int i = 0; i < (int)v.size(); i++) {
            std::cerr << "{" << (*it).first << ", " << (*it).second << "}";
            if (i < (int)v.size() - 1) std::cerr << ", ";
            std::advance(it, 1);
        }
        std::cerr << "]\n";
        ind += 1;
    }
    std::cerr << "]\n";
}

//vector of vector of basic types
template<typename T>
void debug(const std::string name, const std::vector<std::vector<T>> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [\n";
    int ind = 0;
    for (auto v: a) {
        auto it = v.begin();
        std::cerr << ind << ": [";
        for (int i = 0; i < (int)v.size(); i++) {
            std::cerr << *it;
            if (i < (int)v.size() - 1) std::cerr << ", ";
            std::advance(it, 1);
        }
        std::cerr << "]\n";
        ind += 1;
    }
    std::cerr << "]\n";
}

//map of <T, pair<U, V>> where T, U, V are basic types
template<typename T, typename U, typename V>
void debug(const std::string name, const std::map<T, std::pair<U, V>> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [\n";
    auto it = a.begin();
    for (int i = 0; i < (int)a.size(); i++) {
        std::cerr << "{k: " << (*it).first << ", v: {" << (*it).second.first << ", " << (*it).second.second<< "}}";
        if (i < (int)a.size() - 1) std::cerr << ",";
        std::cerr << "\n";
        std::advance(it, 1);
    }
    std::cerr << "]\n";
}

//map of <T, U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::map<T, U> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [\n";
    auto it = a.begin();
    for (int i = 0; i < (int)a.size(); i++) {
        std::cerr << "{k: " << (*it).first << ", v: " << (*it).second << "}";
        if (i < (int)a.size() - 1) std::cerr << ",";
        std::cerr << "\n";
        std::advance(it, 1);
    }
    std::cerr << "]\n";
}

//set of pair<T, U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::set<std::pair<T, U>> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [";
    auto it = a.begin();
    for (int i = 0; i < (int)a.size(); i++) {
        std::cerr << "{" << (*it).first << ", " << (*it).second << "}";
        if (i < (int)a.size() - 1) std::cerr << ", ";
        std::advance(it, 1);
    }
    std::cerr << "]\n";
}

//vector of pair<T. U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::vector<std::pair<T, U>> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [";
    for (int i = 0; i < (int)a.size(); i++) {
        std::cerr << "{" << a[i].first << ", " << a[i].second << "}";
        if (i < (int)a.size() - 1) std::cerr << ", ";
    }
    std::cerr << "]\n";
}

//pair<T, U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::pair<T, U> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> {" << a.first << ", " << a.second << "}" << "\n";
}

//set of basic types(int, string, etc)
template<typename T>
void debug(const std::string name, const std::set<T> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [";
    auto it = a.begin();
    for (int i = 0; i < (int)a.size(); i++) {
        std::cerr << (*it);
        if (i < (int)a.size() - 1) std::cerr << ", ";
        std::advance(it, 1);
    }
    std::cerr << "]\n";
}

//vector of basic types(int, string, etc)
template<typename T>
void debug(const std::string name, const std::vector<T> &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> [";
    for (int i = 0; i < (int)a.size(); i++) {
        std::cerr << a[i];
        if (i < (int)a.size() - 1) std::cerr << ", ";
    }
    std::cerr << "]\n";
}

//basic types(int, string, etc)
template<typename T>
void debug(const std::string name, const T &a) {
std::ios_base::sync_with_stdio(false);

    std::cerr << name << " -> " << a << "\n";
}

#define debug(x) debug(#x, x)
