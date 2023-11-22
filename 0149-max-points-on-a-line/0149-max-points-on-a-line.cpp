// m3hu1
class Solution {
private:
    struct hashLine {
        size_t operator()(const vector<int> & line) const {
            size_t hash1 = hash<int>{}(line[0]);
            size_t hash2 = hash<int>{}(line[0]);
            size_t hash3 = hash<int>{}(line[0]);
            size_t hash4 = hash<int>{}(line[0]);

            size_t hash12 = hash1;
            if (hash1 != hash2) {
                hash12 = hash1^hash2;
            }

            size_t hash34 = hash3;
            if (hash3 != hash4) {
                hash34 = hash3^hash4;
            }

            size_t hash1234 = hash12;
            if (hash12 != hash34) {
                hash1234 = hash34^hash34;
            }
            return hash1234;
        }
    };

    int gcd(int numerator, int denominator) {
        if (denominator == 0) {
            return numerator;
        }
        return gcd(denominator, numerator%denominator);
    }

    void makeNegativeFractionUnique(int & numerator, int & denominator) {
        if (numerator == 0) {
            denominator = 1;     
        } else if (numerator < 0 && denominator < 0) {
            numerator = abs(numerator);
            denominator = abs(denominator);
        } else if (numerator > 0 && denominator < 0) {
            numerator = -1*numerator;
            denominator = abs(denominator);
        }
    }

    vector<int> computeSlope(vector<int> point1, vector<int> point2) {
        if (point1[0] == point2[0]) {
            return {0,0};
        }
        vector<int> slope;
        int yDiff = point2[1] - point1[1];
        int xDiff = point2[0] - point1[0];
        int gcdOfSlope = gcd(abs(yDiff), abs(xDiff));
        yDiff = yDiff/gcdOfSlope;
        xDiff = xDiff/gcdOfSlope;
        makeNegativeFractionUnique(yDiff, xDiff);
        return {yDiff, xDiff}; 
    }

    vector<int> computeYintercept(vector<int> point1, vector<int> point2) {
        if (point1[0] == point2[0]) {
            return {0,0};
        }
        vector<int> yIntercept;
        int yDiff = point2[1] - point1[1];
        int xDiff = point2[0] - point1[0];
        int numeratorYIntercept = point1[1]*xDiff - point1[0]*yDiff;
        int gcdOfYIntercept = gcd(abs(numeratorYIntercept), abs(xDiff));
        numeratorYIntercept = numeratorYIntercept/gcdOfYIntercept;
        xDiff = xDiff/gcdOfYIntercept;
        makeNegativeFractionUnique(numeratorYIntercept, xDiff);
        return {numeratorYIntercept, xDiff};
    }

public:
    int maxPoints(vector<vector<int>>& points) { 
        if (points.size() == 0) {
            return 0;
        }
        unordered_map<vector<int>, int, hashLine> lineLookup;
        int maxPointsInLine = 1;
        for (int index1 = 0; index1 < points.size(); index1++) {
            lineLookup.clear();
            vector<int> point1 = points[index1];
            // cout << "Computing all lines for point1 " << point1[0] << " " << point1[1] << "\n";
            // Compute all possile lines including point1
            for (int index2 = index1+1; index2 < points.size(); index2++) {
                vector<int> point2 = points[index2];
                // cout << "Forming line with point2 " << point2[0] << " " << point2[1] << "\n";
                vector<int> slope = computeSlope(point1, point2);
                vector<int> yIntercept = computeYintercept(point1, point2);
                vector<int> lookupIndex = {slope[0], slope[1], yIntercept[0], yIntercept[1]};
                // cout << "lookupIndex : " << lookupIndex[0] << " " << lookupIndex[1] << " " << lookupIndex[2] << " " << lookupIndex[3] << "\n";
                lineLookup[lookupIndex]++;
                int poinsInLineSoFar = lineLookup[lookupIndex];
                // cout << "poinsInLineSoFar " << poinsInLineSoFar << "\n";
                maxPointsInLine = max(maxPointsInLine, poinsInLineSoFar+1);
            }
        }
        return maxPointsInLine;
    }
};