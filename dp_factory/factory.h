//
// Created by lhy on 2020/11/6.
//

#ifndef DESIGN_PATTERN_FACTORY_H
#define DESIGN_PATTERN_FACTORY_H

#include <exception>
#include <system_error>
#include <iostream>

using namespace std;

class Operation{
protected:
    double numberA;
    double numberB;

public:
    Operation() = default;

    Operation(double numbera, double numberb) : numberA(numbera), numberB(numberb){}

public:
    virtual double getresult(){
        return 0;
    }
};


class OperationAdd : public Operation{
public:
    OperationAdd(double numbera, double numberb) : Operation(numbera, numberb){}

    double getresult() override {
        cout << "OperationAdd here" << endl;
        cout << "numberA" << numberA << endl;
        cout << "numberB" << numberB << endl;
        return numberA + numberB;
    }
};

class OperationSub : public Operation{
public:
    OperationSub(double numbera, double numberb) : Operation(numbera, numberb){}

    double getresult() override {
        return numberA - numberB;
    }
};

class OperationMulti : public Operation{
public:
    OperationMulti(double numbera, double numberb) : Operation(numbera, numberb){}

    double getresult() override {
        return numberA * numberB;
    }
};

class OperationDiv : public Operation{
public:
    OperationDiv(double numbera, double numberb) : Operation(numbera, numberb){}

    double getresult() override {
        if(numberB == 0)
            throw logic_error("除数不能为0");
        return numberA / numberB;
    }
};

class OperationFactory{
public:
     Operation oper;
     Operation createOperate(string operate){
        if(operate == "+"){
            cout << "factory +" << endl;
            oper = OperationAdd(10, 2);

        }
//        else if(operate == "-")
//            oper = OperationSub(10, 2);
//        else if(operate == "*")
//            oper = OperationMulti(10, 2);
//        else if(operate == "/")
//            oper = OperationDiv(10, 2);
//        return oper;
    }
};

#endif //DESIGN_PATTERN_FACTORY_H
