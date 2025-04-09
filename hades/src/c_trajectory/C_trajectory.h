//
// Created by caiom on 3/11/2025.
//

#ifndef C_TRAJECTORY_H
#define C_TRAJECTORY_H
#include <deque>
#include <vector>
#include "geometry/Vetop.h"
#include "geometry/circle.h"
#include "geometry/rectangle.h"

class C_trajectory {
    private:
        bool print_each = false;
        bool print_last = false;
        int each_iterations = 1;
        int max_iterations = 1000;
        double small_step = 300;
        double k = 0;


    public:
        C_trajectory(bool print_each, bool print_last, int each_iterations, int max_iterations, double small_step, double k) {
            this->print_each = print_each;
            this->print_last = print_last;
            this->each_iterations = each_iterations;
            this->max_iterations = max_iterations;
            this->small_step = small_step;
            this->k = k;
        }

        std::vector<std::vector<double>> path_find(std::vector<double>& start, std::vector<double>& goal,
            std::vector<circle>& obs_circular, std::vector<rectangle>& obs_retangular);

        std::vector<std::vector<double>> path_connect(std::vector<double>& start, std::vector<double>& goal,
            std::vector<circle>& obs_circular, std::vector<rectangle>& obs_retangular);

        std::vector<std::vector<double>> path_single(std::vector<double>& start, std::vector<double>& goal,
             std::vector<circle>& obs_circular, std::vector<rectangle>& obs_retangular);

        std::vector<std::vector<double>> path_single_inverted(std::vector<double>& start, std::vector<double>& goal,
            std::vector<circle>& obs_circular, std::vector<rectangle>& obs_retangular);

        void retrace_path(auto& trajectory, auto& obs_circular, auto& obs_retangular);

        std::vector<std::vector<double>> smoothing(auto& trajectory, auto& obs_circular, auto& obs_retangular);

        void invert_trajectory(auto& trajectory);

        std::vector<double> interference(auto point, auto& obs_circular, auto& obs_retangular);

        bool collision_test(auto& start, auto& goal, auto& obs_circular, auto& obs_retangular);

        void find_blocking_circles(auto& trajectory, auto& goal, auto& new_obs_circular, auto& obs_circular);
        void remove_invalide_points(auto& points, auto& trajectory);
        void remove_empty_alternatives(auto& alternatives, auto& trajectory);
        void shorten_path(auto& trajectory_1, auto& trajectory_2, auto& obs_circular, auto& obs_retangular);
        std::deque<std::vector<double>> c_point(auto& start, auto& goal, auto& obs_circular, auto& obs_retangular);




};



#endif //C_TRAJECTORY_H
