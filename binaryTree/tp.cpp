#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

vector<string> circles(const vector<string>& circlePairs) {
    vector<string> results;
    
    for (const string& pair : circlePairs) {
        int x1, y1, r1, x2, y2, r2;
        sscanf(pair.c_str(), "%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        
        if (dist == 0) {
            if (r1 == r2) {
                results.push_back("Concentric");
            } else {
                results.push_back("Touching");
            }
        } else if (dist < abs(r1 - r2)) {
            results.push_back("Disjoint-Inside");
        } else if (dist == abs(r1 - r2)) {
            results.push_back("Touching");
        } else if (dist < r1 + r2) {
            results.push_back("Intersecting");
        } else {
            results.push_back("Disjoint-Outside");
        }
    }
    
    return results;
}

int main() {
    vector<string> circlePairs = {"12 0 21 14 0 23", "0 45 8 0 94 9", "35 0 13 10 0 38"};
    vector<string> result = circles(circlePairs);
    
    for (const string& res : result) {
        cout << res << endl;
    }
    
    return 0;
}




