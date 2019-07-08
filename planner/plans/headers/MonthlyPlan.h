#ifndef PLANNER_MONTHLYPLAN_H
#define PLANNER_MONTHLYPLAN_H

#include "Plan.h"

class MonthlyPlan :
        public Plan
{
public:
    MonthlyPlan( std::string description, std::string category, std::string month );
    MonthlyPlan( int id, std::string description, std::string category, std::string month, bool done );
    ~MonthlyPlan() override = default;
    const std::string &getMonth() const;
private:
    std::string month;
};

#endif //PLANNER_MONTHLYPLAN_H
