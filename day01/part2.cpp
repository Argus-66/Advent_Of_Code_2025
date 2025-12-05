#include <bits/stdc++.h>

using namespace std;

void part2(const vector<string>& lines) {
    // TODO: Implement part 2
    cout << "Part 2: " << endl;

    long long ans=50;
    int pass=0;

    for(string s:lines){
        int num = stoi(s.substr(1));
        
        // Count complete rotations
        pass += num / 100;
        
        int temp = ans;  // Use temp to preserve ans for checking
        
        if(s[0]=='L'){          // Subtraction condition
            // Check if partial rotation crosses 0
            if(temp - (num % 100) < 0) pass++;
            ans = (ans - num + 100) % 100;
        } 
        else{                   // Addition condition
            // Check if partial rotation crosses 0
            if((num % 100) + temp >= 100) pass++;
            ans = (ans + num) % 100;
        }
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
