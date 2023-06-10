/*
 *********
 Workshop - #4 (P1)
 Full Name  : kismat kc
 Student ID#: 175036219
 Email      : kk-c5@myseneca.ca
 Date       : 2023/06/08
 Authenticity Declaration:
 I have done all the coding by myself and only copied the code that my professor
 provided to complete my workshops and assignments.
 *********
 */

#ifndef cs_string
#define cs_string

namespace sdds {
void strnCpy(char *des, const char *src, int len);
void strCpy(char *destination, const char *source);
int strCmp(const char *str1, const char *str2);
int strnCmp(const char *str1, const char *str2, int length);
int strLen(const char *str);
const char *strStr(const char *str1, const char *str2);
void strCat(char *destination, const char *source);
} // namespace sdds

#endif
