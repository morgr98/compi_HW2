#ifndef _236360_2_
#define _236360_2_

namespace output {
    extern const std::string rules[];
    void printProductionRule(const int ruleno);
    void errorLex(const int lineno);
    void errorSyn(const int lineno);
};
#endif