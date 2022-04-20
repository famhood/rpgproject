/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** constants
*/

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#include "header.h"

static const coord poke = {
    {-180, 85},
    {190, 35},
    {455, 155},
    {415, 200},
}

static const string m_assets[] = {
    "ass/bg.png",
    "ass/play.png",
    "ass/htp.png",
    "ass/quit.png"
};

static const coord m_coord[] = {
    {0, 0},
    {100, 100},
    {100, 200},
    {100, 300}
};

static const string g_assets[] = {
    "ass/map.png",
    "ass/char.png",
    "ass/settings.png",
    "ass/msgbox.png"
};

static const coord g_coord[] = {
    {0, 0},
    {536, 386},
    {10, 10}
};

static const string s_assets[] = {
    "ass/bg.png",
    "ass/resume.png",
    "ass/music.png",
    "ass/quit.png"
};

static const string f_assets[] = {
    "ass/fight.png",
    "ass/char_fight.png",
    "ass/msgbox.png",
    "ass/mewtwofinal.png"
};

static const coord fb_coord[] = {
    {100, 600},
    {300, 600}
};

static const string fb_assets[] = {
    "ass/attack.png",
    "ass/attack_feu.png"
};

static const coord f_coord[] = {
    {0, 0},
    {180, 240},
    {0, 550},
    {600, 100}
};

static const string q_assets[] = {
    "ass/pnj1.png",
};

static const coord q_coord[] = {
    {10, -30},
};

static const string htp_assets[] = {
    "ass/bg.png",
    "ass/htptext.png"
};

static const coord gr[][2] = {
    {{505, 60}, {535, 80}},
    {{515, 120}, {535, 200}},
    {{455, 160}, {505, 210}}
};

static const coord g_map[][2] = {
    {{-210, -15}, {-35, 55}},
    {{-175, -115}, {-100, -50}},
    {{-145, -250}, {-35, -175}},
    {{65, -30}, {155, 30}},
    {{95, 85}, {160, 145}},
    {{0, -255}, {30, -225}},
    {{30, -255}, {105, -130}},
    {{110, -160}, {150, -130}},
    {{190, -160}, {260, -130}},
    {{255, -255}, {335, -90}},
    {{340, -150}, {430, -50}},
    {{430, -150}, {475, -90}},
    {{530, -150}, {550, -90}},
    {{340, 5}, {430, 115}},
    {{430, 25}, {460, 115}},
    {{310, 115}, {500, 154}},
    {{320, 145}, {440, 175}},
    {{320, 175}, {410, 215}},
    {{210, 55}, {315, 215}},
    {{145, 150}, {235, 215}},
    {{-110, 205}, {154, 215}},
    {{-80, 90}, {-40, 120}},
    {{-10, -75}, {20, -45}},
    {{160, 10}, {180, 60}},
    {{190, 10}, {200, 30}},
    {{210, 30}, {220, 40}},
    {{510, -55}, {550, -5}},
    {{500, -5}, {550, 45}},
    {{455, -210}, {550, -190}},
    {{425, -190}, {340, -210}},
    {{340, -255}, {360, -205}},
    {{500, -255}, {550, -225}},
    {{365, -215}, {425, -195}},
    {{110, -255}, {235, -225}}
};

#endif /* !CONSTANTS_H_ */