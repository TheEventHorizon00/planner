#include "../headers/MonthlyPlan.h"

MonthlyPlan::MonthlyPlan( std::string description, std::string category, std::string month )
        : Plan( std::move( description ), std::move( category ) ), month {std::move( month )}
{
}

MonthlyPlan::MonthlyPlan( int id, std::string description, std::string category, std::string month, bool done )
        : Plan( id, std::move( description ), std::move( category ), done ), month {std::move( month )}
{
}

const std::string &MonthlyPlan::getMonth() const
{
    return month;
}
