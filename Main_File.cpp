#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool algorithm1(bool opponents_last_choice, int itr)
{
    return // bool;
}
bool algorithm2(bool opponents_last_choice, int itr){
    return // bool;
} vector<int> calculate_score(bool choice1, bool choice2)
{
    vector<int> to_return;

    if (choice1 && choice2)
    {
        to_return.push_back(3);
        to_return.push_back(3);
    }
    else if (choice1 && !choice2)
    {
        to_return.push_back(1);
        to_return.push_back(5);
    }
    else if (!choice1 && choice2)
    {
        to_return.push_back(5);
        to_return.push_back(1);
    }
    else
    {
        to_return.push_back(1);
        to_return.push_back(1);
    }

    return to_return;
}
struct points
{
    int algo_1_point = 0;
    int algo_2_point = 0;
    void update_point(vector<int> x)
    {
        algo_1_point = x[0];
        algo_1_point = x[1];
    }
} int main()
{
    long int total_number_of_iterations = 0;
    cout << "Enter the number of iterations in this test case : ";
    cin >> total_number_of_iterations;
    long int current_iteration = 1;
    points table[total_number_of_iterations];
    long int total_number_of_points = 0;
    // iteration starts here
    bool last_bool_check_algo1 = true;
    bool last_bool_check_algo2 = true;

    for (long int i = 0; i < total_number_of_iterations; i++)
    {
        if (i == 1)
        {
            last_bool_check_algo1 = algorithm1(last_bool_check_algo1, i);
            last_bool_check_algo2 = algorithm2(last_bool_check_algo2, i);
        }
        else
        {
        }
    }
}
