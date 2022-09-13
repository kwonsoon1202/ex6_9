#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using std::cout;    using std::endl;
using std::vector;  using std::string;
int main()
{
    vector<string> words = {"knocking", "on", "the", "heavens", "door" };
     string s;
        s = std::accumulate(words.cbegin(), words.cend(), string(""));

        cout << "s :" << s << endl;

        return 0;



}
