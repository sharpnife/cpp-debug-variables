#include <iostream>

//vector of "c++ arrays i.e. std::array"
template<typename T, std::size_t N>
void debug(const std::string name, const std::vector<std::array<T, N>> &a) {
    std::cout << name << " -> [\n";
    int ind = 0;
    for (auto v: a) {
        auto it = v.begin();
        std::cout << ind << ": [";
        for (int i = 0; i < v.size(); i++) {
            std::cout << *it;
            if (i < v.size() - 1) std::cout << ", ";
            std::advance(it, 1);
        }
        std::cout << "]\n";
        ind += 1;
    }
    std::cout << "]\n";
}


//vector of vector of pair<T, U> where U, V are basic types
template<typename T, typename U>
void debug(const std::string name, const std::vector<std::vector<std::pair<T, U>>> &a) {
    std::cout << name << " -> [\n";
    int ind = 0;
    for (auto v: a) {
        auto it = v.begin();
        std::cout << ind << ": [";
        for (int i = 0; i < v.size(); i++) {
            std::cout << "{" << (*it).first << ", " << (*it).second << "}";
            if (i < v.size() - 1) std::cout << ", ";
            std::advance(it, 1);
        }
        std::cout << "]\n";
        ind += 1;
    }
    std::cout << "]\n";
}

//vector of vector of basic types
template<typename T>
void debug(const std::string name, const std::vector<std::vector<T>> &a) {
    std::cout << name << " -> [\n";
    int ind = 0;
    for (auto v: a) {
        auto it = v.begin();
        std::cout << ind << ": [";
        for (int i = 0; i < v.size(); i++) {
            std::cout << *it;
            if (i < v.size() - 1) std::cout << ", ";
            std::advance(it, 1);
        }
        std::cout << "]\n";
        ind += 1;
    }
    std::cout << "]\n";
}

//map of <T, pair<U, V>> where T, U, V are basic types
template<typename T, typename U, typename V>
void debug(const std::string name, const std::map<T, std::pair<U, V>> &a) {
    std::cout << name << " -> [\n";
    auto it = a.begin();
    for (int i = 0; i < a.size(); i++) {
        std::cout << "{k: " << (*it).first << ", v: {" << (*it).second.first << ", " << (*it).second.second<< "}}";
        if (i < a.size() - 1) std::cout << ",";
        std::cout << "\n";
        std::advance(it, 1);
    }
    std::cout << "]\n";
}

//map of <T, U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::map<T, U> &a) {
    std::cout << name << " -> [\n";
    auto it = a.begin();
    for (int i = 0; i < a.size(); i++) {
        std::cout << "{k: " << (*it).first << ", v: " << (*it).second << "}";
        if (i < a.size() - 1) std::cout << ",";
        std::cout << "\n";
        std::advance(it, 1);
    }
    std::cout << "]\n";
}

//set of pair<T, U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::set<std::pair<T, U>> &a) {
    std::cout << name << " -> [";
    auto it = a.begin();
    for (int i = 0; i < a.size(); i++) {
        std::cout << "{" << (*it).first << ", " << (*it).second << "}";
        if (i < a.size() - 1) std::cout << ", ";
        std::advance(it, 1);
    }
    std::cout << "]\n";
}

//vector of pair<T. U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::vector<std::pair<T, U>> &a) {
    std::cout << name << " -> [";
    for (int i = 0; i < a.size(); i++) {
        std::cout << "{" << a[i].first << ", " << a[i].second << "}";
        if (i < a.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}

//pair<T, U> where T, U are basic types
template<typename T, typename U>
void debug(const std::string name, const std::pair<T, U> &a) {
    std::cout << name << " -> {" << a.first << ", " << a.second << "}" << "\n";
}

//set of basic types(int, string, etc)
template<typename T>
void debug(const std::string name, const std::set<T> &a) {
    std::cout << name << " -> [";
    auto it = a.begin();
    for (int i = 0; i < a.size(); i++) {
        std::cout << (*it);
        if (i < a.size() - 1) std::cout << ", ";
        std::advance(it, 1);
    }
    std::cout << "]\n";
}

//vector of basic types(int, string, etc)
template<typename T>
void debug(const std::string name, const std::vector<T> &a) {
    std::cout << name << " -> [";
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i];
        if (i < a.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}

//basic types(int, string, etc)
template<typename T>
void debug(const std::string name, const T &a) {
    std::cout << name << " -> " << a << "\n";
}

#define debug(x) debug(#x, x)
