#ifndef STUDENT_RPN_CALCULATOR_H
#define STUDENT_RPN_CALCULATOR_H

#include <memory>
#include <queue>
#include <stack>
#include <string>


namespace student { namespace rpn_calculator {
        using stack_type = std::stack<double>;

        struct Element {
            virtual auto evaluate(stack_type&) const -> void = 0;
            virtual ~Element();
        };

        struct Literal : public Element {
            double const value{0.0};

            auto evaluate(stack_type&) const -> void override;

            Literal(double const);
        };

        struct Print : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Addition : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Substraction : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Division : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Multiplication : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Whole_Number_Division : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Modulo : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Power : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Square_Root : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Log : public Element {
            auto evaluate(stack_type&) const -> void override;
        };

        struct Calculator {
            stack_type stack;
            std::queue<std::unique_ptr<Element>> ops;

            /*
             * Schedule operation for evaluation.
             */
            auto push(std::unique_ptr<Element>) -> void;

            /*
             * Convert string to element and push it on the queue of operations to
             * perform.
             */
            auto push(std::string) -> void;

            /*
             * Evaluate scheduled operations.
             */
            auto evaluate() -> void;

            Calculator() = default;
            Calculator(stack_type);
        };
    }}  // namespace student::rpn_calculator

#endif
