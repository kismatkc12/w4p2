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

#ifndef SDDS_LABELMAKER_H_
#define SDDS_LABELMAKER_H_
namespace sdds
{
    class LabelMaker
    {
        int numberOfLabels;
        Label* labelsArr;
public:
    LabelMaker(int noOfLabels);
    void readLabels();
    void printLabels();
    ~LabelMaker();
};

}
#endif
