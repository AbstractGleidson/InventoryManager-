#ifndef __INTERFACE_H__ 
#define __INTERFACE_H__

/// @brief 
/// @param title - título do menu
/// @param option1 - opção 1 do menu
/// @param option2 - opção 2 do menu
/// @param option3 - opção 3 do menu
/// @return index selected by user 
int menu(char title[], char option1[], char option2[], char option3[]);

char *center(char string[], int size);
#endif