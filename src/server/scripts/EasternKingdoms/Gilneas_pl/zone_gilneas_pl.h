/*
 * Copyright (C) 2016-2017 ProjectLegion <https://bitbucket.org/projectlegion/projectlegion/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_GILNEAS_PL_H
#define DEF_GILNEAS_PL_H

enum GilneasQuests
{
    QUEST_LOCKDOWN = 14078
};

enum GilneasCreatureIds
{
    NPC_PANICKED_CITIZEN_GATE                  = 44086,
    NPC_PANICKED_CITIZEN                       = 34851,
    NPC_PRINCE_LIAM                            = 34913,
    NPC_FRIGHTENED_CITIZEN_WORGEN              = 35836,
    PLAYER_GUID                                = 99999,
    NPC_RAMPAGING_WORGEN                       = 35660,
    NPC_RAMPAGING_WORGEN_34884                 = 34884,
    NPC_BLOODFANG_WORGEN_35118                 = 35118,
    NPC_RAMPAGING_WORGEN_35660                 = 35660,
    NPC_FRIGHTENED_CITIZEN_34981               = 34981,
    NPC_GILNEAS_EVACUATION_FACING_MARKER_35830 = 35830,
    NPC_FRIGHTENED_CITIZEN_ALONE               = 34981,
};

enum GilneasGameObjectIds
{
    GO_MERCHANT_DOOR = 195327
};

enum GilneasEvents
{
    EVENT_START_TALK_WITH_CITIZEN = 1,
    EVENT_TALK_WITH_CITIZEN_1,
    EVENT_TALK_WITH_CITIZEN_2,
    EVENT_TALK_WITH_CITIZEN_3,
    EVENT_START_TALK_TO_GUARD,
    EVENT_TALK_TO_GUARD_1,
    EVENT_TALK_TO_GUARD_2,
    EVENT_TALK_TO_GUARD_3,
    EVENT_COUNT_COOLDOWN,
    EVENT_MASTER_RESET,
    EVENT_MOVE_TO_LIAM,
    EVENT_ATTACK_LIAM,
    EVENT_ENRAGE_COOLDOWN,
    EVENT_MOVE_TO_DOOR,
    EVENT_FOLLOW_CITIZEN1,
    EVENT_FOLLOW_CITIZEN2,
    EVENT_START_NEXT_SHOWFIGHT,
    EVENT_CHECK_SHOWFIGHT,
    EVENT_MOVE_TO_PLAYER,
    EVENT_MOVE_TO_MARKER,
    EVENT_MOVE_TO_END,
};

enum GilneasMoves
{
    MOVE_TO_START_POSITION = 1,
    MOVE_TO_PRINCE_LIAM,  
    MOVE_TO_DOOR,
    MOVE_TO_HOMEPOSITION,
    MOVE_TO_PLAYER,
    MOVE_TO_MARKER,
    MOVE_TO_END,
};

enum GilneasActions
{
    ACTION_START_ANIM_MERCANT = 1,
    ACTION_START_ANIM_LIAM,
    ACTION_START_ATTACK_LIAM,
    ACTION_START_ANIM_CITIZEN,
};

enum GilneasSpells
{
    SPELL_PHASE_QUEST_ZONE_SPECIFIC_01           = 59073,

    SPELL_UPDATE_PHASE_SHIFT                     = 82238,

    SPELL_ENRAGE                                 = 56646,
    SPELL_ENRAGE_WORGEN                          = 8599,
};

#endif