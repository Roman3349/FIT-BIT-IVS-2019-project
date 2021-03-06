
// Generated from calculator.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calculatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calculatorParser.
 */
class  calculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calculatorParser.
   */
    virtual antlrcpp::Any visitInput(calculatorParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitMod(calculatorParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitRoot(calculatorParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitSqrt(calculatorParser::SqrtContext *context) = 0;

    virtual antlrcpp::Any visitEuler(calculatorParser::EulerContext *context) = 0;

    virtual antlrcpp::Any visitPercentageTimes(calculatorParser::PercentageTimesContext *context) = 0;

    virtual antlrcpp::Any visitPercentageDiv(calculatorParser::PercentageDivContext *context) = 0;

    virtual antlrcpp::Any visitDiv(calculatorParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitFactorial(calculatorParser::FactorialContext *context) = 0;

    virtual antlrcpp::Any visitFunction(calculatorParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitParenthesis(calculatorParser::ParenthesisContext *context) = 0;

    virtual antlrcpp::Any visitPercentageMinus(calculatorParser::PercentageMinusContext *context) = 0;

    virtual antlrcpp::Any visitAbs(calculatorParser::AbsContext *context) = 0;

    virtual antlrcpp::Any visitNumber(calculatorParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitTimes(calculatorParser::TimesContext *context) = 0;

    virtual antlrcpp::Any visitPi(calculatorParser::PiContext *context) = 0;

    virtual antlrcpp::Any visitPow(calculatorParser::PowContext *context) = 0;

    virtual antlrcpp::Any visitPlus(calculatorParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitMinus(calculatorParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitSignedExpression(calculatorParser::SignedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPercentagePlus(calculatorParser::PercentagePlusContext *context) = 0;

    virtual antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *context) = 0;


};

