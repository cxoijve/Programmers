#include <string>
#include <sstream>
using namespace std;

string solution(string p) {
    stringstream ss(p);
    string temp;
    int xsum = 0, nsum = 0;
    while (getline(ss, temp, ' ')) {
        if (temp.back() == 'x') {
            if (temp.size() == 1) xsum++;
            else xsum += stoi(string(temp.begin(), temp.end() - 1));
        }
        else if(temp!="+") nsum += stoi(temp);
    }
    if (xsum == 0) return to_string(nsum);
    else {
        string xres;
        if (xsum == 1) xres = "x";
        else xres = to_string(xsum) + "x";
        if (nsum == 0) return xres;
        else return xres + " + " + to_string(nsum);
    }
}