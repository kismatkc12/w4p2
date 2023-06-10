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
#include "cstring.h" 
#include "Label.h"
using namespace std;
namespace sdds
{

    void Label::setToDefault()
    {
        frame = NULL;
        m_content = NULL;
        m_width = 0;
        char srcFrame[] = "+-+|+-+|";
        frame = new char[strLen(srcFrame) + 1];
        strCpy(frame, srcFrame);

    }
    bool Label::isEmpty()const
    {
        bool val = true;
        if (m_content != NULL && m_frame != NULL)
        {
            val = false;
        }
        return val;
    }
  void Label::setName(const char * str)
  {
      if (str != NULL)
      {
          delete[] frame;
          frame = new char[strLen(str) + 1];
          strCpy(frame, str);
      }
      else
      {
          frame = NULL;
      }
  }
  void Label::setContent(const char* content)
  {
      if (content != NULL)
      {
          delete[] m_content;
          m_content = new char[strLen(content) + 1];
          strCpy(m_content, content);
      }
      else
      {
          m_content = NULL;
      }
  }
      Label::Label()
      {
          setToDefault();
      }
    Label::Label(const char* frameArg)
    {
        setToDefault();
        if (frameArg != NULL)
        {
            strCpy(frame, frameArg);
        }
        
        
    }
    Label::Label(const char* frameArg, const char* content)
    {
        setToDefault();
        strCpy(frame, frameArg);
        if (strLen(content) < 70)
        {
            setContent(content);
        }
        else
        {
            cout << "too many value!";
        }
   

    }
    Label::~Label()
    {
        delete[] m_content;
        delete[] frame;
    }
    void Label::readLabel()
    {
        char read[71] = {};
        cin.getline(read, 71);
   

        setContent(read);
        
    }
    std::ostream& Label::printLabel()const
    {
        if (!isEmpty())
        {
  
           int  width  = strLen(m_content) + 3;
            cout << frame[0];
            cout.width(width);
            cout.fill(frame[1]);
            cout << frame[2] << endl;
            for (int i = 0; i < 3; i++)
            {
                if (i == 1)
                {
                    cout << frame[3];
                    cout << " ";
                    cout <<  m_content;
                    cout << " ";
                    cout << frame[7] << endl;
                    
                }
                else
                {
                    cout << frame[3];
                    cout.width(width);
                    cout.fill(' ');
                    cout << frame[7] << endl;
                }
          
            }
            cout << frame[6];
            cout.width(width);
            cout.fill(frame[5]);
            cout << frame[4];
           
           
        }
        

        return cout;
    }
    
}
