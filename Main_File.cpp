#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;
bool algorithm1(bool opponents_last_choice, int itr)
{
    static bool first_move = true;
    if (first_move)
    {
        first_move = false;
        return true;
    }
    return opponents_last_choice;
}
bool algorithm2(bool opponents_last_choice, int itr)
{
    static bool first_move = true;
    if (first_move)
    {
        first_move = false;
        return true;
    }
    return rand() % 2; 
}
vector<int> calculate_score(bool choice1, bool choice2)
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
        algo_2_point = x[1];
    }
};
int main()
{
    srand(time(0));
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
        last_bool_check_algo1 = algorithm1(last_bool_check_algo2, i);
        last_bool_check_algo2 = algorithm2(last_bool_check_algo1, i);
        vector<int> score_temp = calculate_score(last_bool_check_algo1, last_bool_check_algo2);
        table[i].update_point(score_temp);
    }
    for (int i = 0; i < total_number_of_iterations; i++)
    {
        cout << table[i].algo_1_point << " - ";
        total_number_of_points += table[i].algo_1_point;
    }
    cout << endl;
    for (int i = 0; i < total_number_of_iterations; i++)
    {
        cout << table[i].algo_2_point << " - ";
        total_number_of_points += table[i].algo_2_point;
    }
    cout<<endl;
    cout << "\nTotal points scored in this test case : " << total_number_of_points << endl;
    return 0;
}