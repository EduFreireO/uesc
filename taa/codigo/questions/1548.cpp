#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, students, grade;

    cin >> test;
    while(test)
    {
        vector <int> queue, sorted_queue;
        cin >> students;
        while(students)
        {
            cin >> grade;
            queue.push_back(grade); 
            sorted_queue.push_back(grade);
            students--;
        }

        sort(sorted_queue.begin(), sorted_queue.end(), greater <int>()) ;
        int stay_same_position = 0;

        for(int i = 0; i < queue.size(); i++)
        {
            if(queue[i] == sorted_queue[i])
                stay_same_position++;
        }

        cout << stay_same_position << endl;
        test--;
    }



}