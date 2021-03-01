//cpp
#include <string>
#include <decision.h>

// USING IF STATEMENTS
std::string get_letter_grade_using_if(int grade)
{
    if (grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if (grade >= 80 && grade <= 89)
    {
        return "B";
    }
    else if (grade >= 70 && grade <= 79)
    {
        return "C";
    }
    else if (grade >= 60 && grade <= 69)
    {
        return "D";
    }
    else if (grade >= 00 && grade <=59)
    {
        return "F";
    }
    else
    {
        return "INVALID GRADE";
    }
}

// USING SWITCH CASES
std::string get_letter_grade_using_switch(int grade)
{
    std::string string_grade;

    switch (grade)
    {
    case 90 ... 100 :
        string_grade = "A";
        break;
    case 80 ... 89 :
        string_grade = "B";
        break;
    case 70 ... 79 :
        string_grade = "C";
        break;
    case 60 ... 69 :
        string_grade = "D";
        break;
    case 00 ... 59 :
        string_grade = "F";
        break;
    default:
        string_grade = "Invalid Grade!";
        break;
    }
    return string_grade;
}