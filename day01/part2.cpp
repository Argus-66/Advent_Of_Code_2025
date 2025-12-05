#include <bits/stdc++.h>

using namespace std;

void part2(const vector<string>& lines) {
    // TODO: Implement part 2
    cout << "Part 2: " << endl;

    long long ans=50;
    int pass=0;

    for(string s:lines){
        int num = stoi(s.substr(1));
        

        if(s[0]=='L'){          // Subtraction condition
            ans = (ans - num + 100) % 100;
        } 
        else{                   // Addition condition
            ans = (ans + num) % 100;
        }
        if(ans==0) pass++;
    } 
    cout<<pass<<endl;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << argv[1] << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    part2(lines);

    return 0;
}
