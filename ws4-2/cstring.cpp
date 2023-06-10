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

#include "cstring.h"
#include <iostream>

namespace sdds {
void strCpy(char *destination, const char *source) {
  int i = 0;
  while (source[i] != '\0') {
    destination[i] = source[i];
    i++;
  }
  destination[i] = '\0';
}

void strnCpy(char *des, const char *src, int len) {
  int count;
  for (count = 0; count < len; count++) {
    des[count] = src[count];
  }
  des[count] = '\0';
}

int strCmp(const char *str1, const char *str2) {
  int i = 0;
  while (str1[i] == str2[i]) {
    if (str1[i] == '\0')
      return 0;
    i++;
  }
  return str1[i] - str2[i];
}

int strnCmp(const char *str1, const char *str2, int length) {
  int i = 0;
  while (str1[i] == str2[i] && i < length) {
    if (str1[i] == '\0')
      return 0;
    i++;
  }
  if (i == length)
    return 0;
  return str1[i] - str2[i];
}

int strLen(const char *str) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

const char *strStr(const char *str1, const char *str2) {
  int i, j;
  for (i = 0; str1[i] != '\0'; i++) {
    for (j = 0; str2[j] != '\0'; j++) {
      if (str1[i + j] != str2[j])
        break;
    }
    if (str2[j] == '\0')
      return &str1[i];
  }
  return nullptr;
}

void strCat(char *destination, const char *source) {
  int length = strLen(destination);
  int i = 0;
  while (source[i] != '\0') {
    destination[length + i] = source[i];
    i++;
  }
  destination[length + i] = '\0';
}
} // namespace sdds
