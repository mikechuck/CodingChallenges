#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    //Set the cutoff for values we will deail with
    int failingGrade = 37;
    
    for (int i = 0; i < grades.size(); i++)
    {
        //Find the remainder when dividing by 5. This number will determine if we round up or not
        int remainder = grades[i] % 5;
        
        //If the remainder is not 1 or 2, and the grade is greater than a failing grade, round up
        if (remainder > 2 && grades[i] > failingGrade)
        {
            //Add the difference of the remainder from 5 to the grade to round up
            grades[i] += (5 - remainder);
        }
    }
    
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}