#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

void color(int c) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); }

void clearText(string password){ system("cls"); cout<<" enter your password: "<<password; }

int score(string password, int points_Generic, int points_Numbers, int points_Lower_Case, int points_Upper_Case, int points_Special_Characters)
{
    int ASCII_Num_L = 48, ASCII_Num_H = 57, ASCII_LCase_L = 97, ASCII_LCase_H = 122, ASCII_UCase_L = 65, ASCII_UCase_H = 90,
    total_score=0, points=points_Generic, cnt=0, char_type_array[password.size()];
    char Password_CharacterS_Array[password.size()], current_char; strcpy(Password_CharacterS_Array, password.c_str());

    for ( int position_in_password=0; position_in_password < password.size(); position_in_password++) {
        current_char = Password_CharacterS_Array[position_in_password];
        if ( current_char >= ASCII_Num_L && current_char <= ASCII_Num_H) { char_type_array[position_in_password] = points_Numbers; }
        else if ( current_char >= ASCII_LCase_L && current_char <= ASCII_LCase_H) { char_type_array[position_in_password] = points_Lower_Case; }
        else if ( current_char >= ASCII_UCase_L && current_char <= ASCII_UCase_H) { char_type_array[position_in_password] = points_Upper_Case; }
        else { char_type_array[position_in_password] = points_Special_Characters; } }

    for (int i=0; i < password.size(); i++ ) {
    if (char_type_array[i] != char_type_array[i-1] && Password_CharacterS_Array[i] != Password_CharacterS_Array[i-1] ) { total_score += char_type_array[i];}
        else { cnt = 1; while (char_type_array[i] == char_type_array[i-cnt] && points != 0 ) { points = points_Generic; points-=cnt; cnt++; }
    total_score += points; } }

    return total_score;
}

int main()
{
    int low_score_limit = 90, mid_score_limit = 110, high_score_limit = 170, minimum_character_requirement = 6,
    pGen = 6, pNum = 20, pLCase = 30, pUcase = 35, pSpec = 40, points_scored;

    string password; cout<<" enter your password: "; cin>>password;

    while(score(password,pGen,pNum,pLCase,pUcase,pSpec) < low_score_limit || password.size() < minimum_character_requirement ) {
    clearText(password); color(12); cout<<" weak password "<<endl; color(7); cout<<" enter a stronger password: ", cin>>password; }

    points_scored = score(password,pGen,pNum,pLCase,pUcase,pSpec);
    if ( points_scored >= low_score_limit && points_scored <= mid_score_limit ) { clearText(password); color(14); cout<<" good password "<<endl; }
    if ( points_scored > mid_score_limit && points_scored <= high_score_limit ) { clearText(password); color(2); cout<<" strong password "<<endl; }
    if ( points_scored > high_score_limit ) { clearText(password); color(2); cout<<" excellent password "<<endl; } color(7);

    return 0;
}
