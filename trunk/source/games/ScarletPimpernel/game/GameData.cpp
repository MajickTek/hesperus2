/***
 * ScarletPimpernel: GameData.cpp
 * Copyright Stuart Golodetz, 2009. All rights reserved.
 ***/

#include "GameData.h"

namespace hesp {

//#################### CONSTRUCTORS ####################
GameData::GameData()
:	m_quitRequested(false)
{}

//#################### PUBLIC METHODS ####################
InputState& GameData::input()										{ return m_input; }
Level_Ptr GameData::level()											{ return m_level; }
const std::string& GameData::level_filename()						{ return m_levelFilename; }
int GameData::milliseconds() const									{ return m_milliseconds; }
bool GameData::quit_requested() const								{ return m_quitRequested; }
void GameData::set_level(const Level_Ptr& level)					{ m_level = level; }
void GameData::set_level_filename(const std::string& levelFilename)	{ m_levelFilename = levelFilename; }
void GameData::set_milliseconds(int milliseconds)					{ m_milliseconds = milliseconds; }
void GameData::set_quit_requested()									{ m_quitRequested = true;}
SoundSystem& GameData::sound_system()								{ return m_soundSystem; }

}