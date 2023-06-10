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

#include <iostream>
#include "Label.h"
#include "LabelMaker.h"
using namespace std;
namespace sdds
{
        LabelMaker::LabelMaker(int noOfLabels)
        {
            numberOfLabels = noOfLabels;
            labelsArr = new Label[noOfLabels];
        }
        void LabelMaker::readLabels()
        {
            cout << "Enter " << numberOfLabels << " labels:" << endl;
            for (int i = 0; i < numberOfLabels; i++)
            {
                cout << "Enter label number " << i+1 << endl;
                cout << "> ";
                labelsArr[i].readLabel();
            }
        }
        void LabelMaker::printLabels()
        {
            for (int i = 0; i < numberOfLabels; i++)
            {
                if (i != numberOfLabels-1)
                {
                    labelsArr[i].printLabel();
                    cout << endl;
                }
                else
                {
                    labelsArr[i].printLabel() << endl;
                }
 
            }

        }
        LabelMaker::~LabelMaker()
        {
           
            
                delete[] labelsArr;
            
            
        }
        

}
