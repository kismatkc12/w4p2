/*
 *********
 Workshop - #4 (P2)
 Full Name  : kismat kc
 Student ID#: 175036219
 Email      : kk-c5@myseneca.ca
 Date       : 2023/06/10
 Authenticity Declaration:
 I have done all the coding by myself and only copied the code that my professor
 provided to complete my workshops and assignments.
 *********
 */
#ifndef SDDS_LABEL_H_
#define SDDS_LABEL_H_
#include <iostream>
namespace sdds
{
    class Label
    {
        char* frame;
        char* m_content;
        int width;
        void setToDefault();
        void setName(const char* str);
        void setContent(const char* content);
        int Width();
        bool isEmpty()const;
    public: 
        Label();
        Label(const char* frameArg);
        Label(const char* frameArg, const char* content);
        ~Label();
        void readLabel();
        std::ostream& printLabel()const;


    };

}
#endif
