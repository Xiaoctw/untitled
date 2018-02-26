#include <iostream>
#include <vector>

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<string> a;
    a.push_back("Hello");
    a.push_back("World");
    for (auto i = a.begin(); i !=a.end() ; ++i) {
       cout<<*i<<endl;
    }
    return 0;
}