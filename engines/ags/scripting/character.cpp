/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/* Based on the Adventure Game Studio source code, copyright 1999-2011 Chris Jones,
 * which is licensed under the Artistic License 2.0.
 */

#include "engines/ags/scripting/scripting.h"
#include "engines/ags/constants.h"
#include "engines/ags/inventory.h"
#include "engines/ags/room.h"

namespace AGS {

// import int GetCharacterAt(int x,int y)
// Undocumented.
RuntimeValue Script_GetCharacterAt(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);

	// FIXME
	error("GetCharacterAt unimplemented");

	return RuntimeValue();
}

// import void AddInventory(int item)
// Obsolete character function.
RuntimeValue Script_AddInventory(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int item = params[0]._signedValue;
	UNUSED(item);

	// FIXME
	error("AddInventory unimplemented");

	return RuntimeValue();
}

// import void LoseInventory(int item)
// Obsolete character function.
RuntimeValue Script_LoseInventory(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int item = params[0]._signedValue;
	UNUSED(item);

	// FIXME
	error("LoseInventory unimplemented");

	return RuntimeValue();
}

// import void SetActiveInventory(int item)
// Obsolete character function.
RuntimeValue Script_SetActiveInventory(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int item = params[0]._signedValue;
	UNUSED(item);

	// FIXME
	error("SetActiveInventory unimplemented");

	return RuntimeValue();
}

// import void NewRoom(int roomNumber)
// Obsolete character function.
RuntimeValue Script_NewRoom(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int roomNumber = params[0]._signedValue;
	UNUSED(roomNumber);

	// FIXME
	error("NewRoom unimplemented");

	return RuntimeValue();
}

// import void NewRoomEx(int roomNumber, int x, int y)
// Obsolete character function.
RuntimeValue Script_NewRoomEx(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int roomNumber = params[0]._signedValue;
	UNUSED(roomNumber);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);

	// FIXME
	error("NewRoomEx unimplemented");

	return RuntimeValue();
}

// import void NewRoomNPC(CHARID, int roomNumber, int x, int y)
// Obsolete character function.
RuntimeValue Script_NewRoomNPC(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int roomNumber = params[1]._signedValue;
	UNUSED(roomNumber);
	int x = params[2]._signedValue;
	UNUSED(x);
	int y = params[3]._signedValue;
	UNUSED(y);

	// FIXME
	error("NewRoomNPC unimplemented");

	return RuntimeValue();
}

// import int GetCharacterProperty(CHARID, const string property)
// Obsolete character function.
RuntimeValue Script_GetCharacterProperty(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	ScriptString *property = (ScriptString *)params[1]._object;
	UNUSED(property);

	// FIXME
	error("GetCharacterProperty unimplemented");

	return RuntimeValue();
}

// import void GetCharacterPropertyText(CHARID, const string property, string buffer)
// Obsolete character function.
RuntimeValue Script_GetCharacterPropertyText(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	ScriptString *property = (ScriptString *)params[1]._object;
	UNUSED(property);
	ScriptString *buffer = (ScriptString *)params[2]._object;
	UNUSED(buffer);

	// FIXME
	error("GetCharacterPropertyText unimplemented");

	return RuntimeValue();
}

// import void RunCharacterInteraction (CHARID, CursorMode)
// Obsolete character function.
RuntimeValue Script_RunCharacterInteraction(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	uint32 cursormode = params[1]._value;
	UNUSED(cursormode);

	// FIXME
	error("RunCharacterInteraction unimplemented");

	return RuntimeValue();
}

// import void DisplaySpeech (CHARID, const string message, ...)
// Obsolete character function.
RuntimeValue Script_DisplaySpeech(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	ScriptString *message = (ScriptString *)params[1]._object;
	UNUSED(message);

	// FIXME
	error("DisplaySpeech unimplemented");

	return RuntimeValue();
}

// import int DisplaySpeechBackground(CHARID, const string message)
// Obsolete character function.
RuntimeValue Script_DisplaySpeechBackground(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	ScriptString *message = (ScriptString *)params[1]._object;
	UNUSED(message);

	// FIXME
	error("DisplaySpeechBackground unimplemented");

	return RuntimeValue();
}

// import void DisplaySpeechAt (int x, int y, int width, CHARID, const string message)
// Obsolete character function.
RuntimeValue Script_DisplaySpeechAt(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);
	int width = params[2]._signedValue;
	UNUSED(width);
	uint32 charid = params[3]._value;
	UNUSED(charid);
	ScriptString *message = (ScriptString *)params[4]._object;
	UNUSED(message);

	// FIXME
	error("DisplaySpeechAt unimplemented");

	return RuntimeValue();
}

// import void DisplayThought (CHARID, const string message, ...)
// Obsolete character function.
RuntimeValue Script_DisplayThought(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	ScriptString *message = (ScriptString *)params[1]._object;
	UNUSED(message);

	// FIXME
	error("DisplayThought unimplemented");

	return RuntimeValue();
}

// import void FollowCharacter(CHARID sheep, CHARID shepherd)
// Obsolete character function.
RuntimeValue Script_FollowCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 sheep = params[0]._value;
	UNUSED(sheep);
	uint32 shepherd = params[1]._value;
	UNUSED(shepherd);

	// FIXME
	error("FollowCharacter unimplemented");

	return RuntimeValue();
}

// import void FollowCharacterEx(CHARID sheep, CHARID shepherd, int dist, int eagerness)
// Obsolete character function.
RuntimeValue Script_FollowCharacterEx(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 sheep = params[0]._value;
	UNUSED(sheep);
	uint32 shepherd = params[1]._value;
	UNUSED(shepherd);
	int dist = params[2]._signedValue;
	UNUSED(dist);
	int eagerness = params[3]._signedValue;
	UNUSED(eagerness);

	// FIXME
	error("FollowCharacterEx unimplemented");

	return RuntimeValue();
}

// import void SetPlayerCharacter(CHARID)
// Obsolete character function.
RuntimeValue Script_SetPlayerCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);

	// FIXME
	error("SetPlayerCharacter unimplemented");

	return RuntimeValue();
}

// import void AddInventoryToCharacter(CHARID, int item)
// Obsolete character function.
RuntimeValue Script_AddInventoryToCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int item = params[1]._signedValue;
	UNUSED(item);

	// FIXME
	error("AddInventoryToCharacter unimplemented");

	return RuntimeValue();
}

// import void LoseInventoryFromCharacter(CHARID, int item)
// Obsolete character function.
RuntimeValue Script_LoseInventoryFromCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int item = params[1]._signedValue;
	UNUSED(item);

	// FIXME
	error("LoseInventoryFromCharacter unimplemented");

	return RuntimeValue();
}

// import void AnimateCharacter (CHARID, int loop, int delay, int repeat)
// Obsolete character function.
RuntimeValue Script_AnimateCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int loop = params[1]._signedValue;
	UNUSED(loop);
	int delay = params[2]._signedValue;
	UNUSED(delay);
	int repeat = params[3]._signedValue;
	UNUSED(repeat);

	// FIXME
	error("AnimateCharacter unimplemented");

	return RuntimeValue();
}

// import void AnimateCharacterEx (CHARID, int loop, int delay, int repeat, int direction, int blocking)
// Obsolete character function.
RuntimeValue Script_AnimateCharacterEx(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int loop = params[1]._signedValue;
	UNUSED(loop);
	int delay = params[2]._signedValue;
	UNUSED(delay);
	int repeat = params[3]._signedValue;
	UNUSED(repeat);
	int direction = params[4]._signedValue;
	UNUSED(direction);
	int blocking = params[5]._signedValue;
	UNUSED(blocking);

	// FIXME
	error("AnimateCharacterEx unimplemented");

	return RuntimeValue();
}

// import void MoveCharacter(CHARID, int x, int y)
// Obsolete character function.
RuntimeValue Script_MoveCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);

	// FIXME
	error("MoveCharacter unimplemented");

	return RuntimeValue();
}

// import void MoveCharacterDirect(CHARID, int x, int y)
// Obsolete character function.
RuntimeValue Script_MoveCharacterDirect(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);

	// FIXME
	error("MoveCharacterDirect unimplemented");

	return RuntimeValue();
}

// import void MoveCharacterPath(CHARID, int x, int y)
// Obsolete character function.
RuntimeValue Script_MoveCharacterPath(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);

	// FIXME
	error("MoveCharacterPath unimplemented");

	return RuntimeValue();
}

// import void MoveCharacterStraight(CHARID, int x,int y)
// Obsolete character function.
RuntimeValue Script_MoveCharacterStraight(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);

	// FIXME
	error("MoveCharacterStraight unimplemented");

	return RuntimeValue();
}

// import void MoveCharacterToHotspot(CHARID, int hotspot)
// Obsolete character function.
RuntimeValue Script_MoveCharacterToHotspot(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int hotspot = params[1]._signedValue;
	UNUSED(hotspot);

	// FIXME
	error("MoveCharacterToHotspot unimplemented");

	return RuntimeValue();
}

// import void MoveCharacterToObject(CHARID, int object)
// Obsolete character function.
RuntimeValue Script_MoveCharacterToObject(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int object = params[1]._signedValue;
	UNUSED(object);

	// FIXME
	error("MoveCharacterToObject unimplemented");

	return RuntimeValue();
}

// import void MoveCharacterBlocking(CHARID, int x, int y, int direct)
// Obsolete character function.
RuntimeValue Script_MoveCharacterBlocking(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);
	int direct = params[3]._signedValue;
	UNUSED(direct);

	// FIXME
	error("MoveCharacterBlocking unimplemented");

	return RuntimeValue();
}

// import void MoveToWalkableArea(CHARID)
// Obsolete character function.
RuntimeValue Script_MoveToWalkableArea(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);

	// FIXME
	error("MoveToWalkableArea unimplemented");

	return RuntimeValue();
}

// import void FaceCharacter(CHARID, CHARID toFace)
// Obsolete character function.
RuntimeValue Script_FaceCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	uint32 toFace = params[1]._value;
	UNUSED(toFace);

	// FIXME
	error("FaceCharacter unimplemented");

	return RuntimeValue();
}

// import void FaceLocation(CHARID, int x, int y)
// Obsolete character function.
RuntimeValue Script_FaceLocation(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x = params[1]._signedValue;
	UNUSED(x);
	int y = params[2]._signedValue;
	UNUSED(y);

	// FIXME
	error("FaceLocation unimplemented");

	return RuntimeValue();
}

// import void SetCharacterView(CHARID, int view)
// Obsolete character function.
RuntimeValue Script_SetCharacterView(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);

	// FIXME
	error("SetCharacterView unimplemented");

	return RuntimeValue();
}

// import void SetCharacterViewEx(CHARID, int view, int loop, int align)
// Obsolete character function.
RuntimeValue Script_SetCharacterViewEx(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);
	int loop = params[2]._signedValue;
	UNUSED(loop);
	int align = params[3]._signedValue;
	UNUSED(align);

	// FIXME
	error("SetCharacterViewEx unimplemented");

	return RuntimeValue();
}

// import void SetCharacterViewOffset(CHARID, int view, int x_offset, int y_offset)
// Obsolete character function.
RuntimeValue Script_SetCharacterViewOffset(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);
	int x_offset = params[2]._signedValue;
	UNUSED(x_offset);
	int y_offset = params[3]._signedValue;
	UNUSED(y_offset);

	// FIXME
	error("SetCharacterViewOffset unimplemented");

	return RuntimeValue();
}

// import void SetCharacterFrame(CHARID, int view, int loop, int frame)
// Obsolete character function.
RuntimeValue Script_SetCharacterFrame(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);
	int loop = params[2]._signedValue;
	UNUSED(loop);
	int frame = params[3]._signedValue;
	UNUSED(frame);

	// FIXME
	error("SetCharacterFrame unimplemented");

	return RuntimeValue();
}

// import void ReleaseCharacterView(CHARID)
// Obsolete character function.
RuntimeValue Script_ReleaseCharacterView(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);

	// FIXME
	error("ReleaseCharacterView unimplemented");

	return RuntimeValue();
}

// import void ChangeCharacterView(CHARID, int view)
// Obsolete character function.
RuntimeValue Script_ChangeCharacterView(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);

	// FIXME
	error("ChangeCharacterView unimplemented");

	return RuntimeValue();
}

// import void SetCharacterSpeechView(CHARID, int view)
// Obsolete character function.
RuntimeValue Script_SetCharacterSpeechView(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);

	// FIXME
	error("SetCharacterSpeechView unimplemented");

	return RuntimeValue();
}

// import void SetCharacterBlinkView(CHARID, int view, int interval)
// Obsolete character function.
RuntimeValue Script_SetCharacterBlinkView(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int view = params[1]._signedValue;
	UNUSED(view);
	int interval = params[2]._signedValue;
	UNUSED(interval);

	// FIXME
	error("SetCharacterBlinkView unimplemented");

	return RuntimeValue();
}

// import void SetCharacterIdle(CHARID, int idleView, int delay)
// Obsolete character function.
RuntimeValue Script_SetCharacterIdle(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int idleView = params[1]._signedValue;
	UNUSED(idleView);
	int delay = params[2]._signedValue;
	UNUSED(delay);

	// FIXME
	error("SetCharacterIdle unimplemented");

	return RuntimeValue();
}

// import void StopMoving(CHARID)
// Obsolete character function.
RuntimeValue Script_StopMoving(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);

	// FIXME
	error("StopMoving unimplemented");

	return RuntimeValue();
}

// import int AreCharObjColliding(CHARID, int object)
// Obsolete character function.
RuntimeValue Script_AreCharObjColliding(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int object = params[1]._signedValue;
	UNUSED(object);

	// FIXME
	error("AreCharObjColliding unimplemented");

	return RuntimeValue();
}

// import int AreCharactersColliding(CHARID, CHARID)
// Obsolete character function.
RuntimeValue Script_AreCharactersColliding(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid1 = params[0]._value;
	UNUSED(charid1);
	uint32 charid2 = params[1]._value;
	UNUSED(charid2);

	// FIXME
	error("AreCharactersColliding unimplemented");

	return RuntimeValue();
}

// import void SetCharacterSpeed(CHARID, int speed)
// Obsolete character function.
RuntimeValue Script_SetCharacterSpeed(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int speed = params[1]._signedValue;
	UNUSED(speed);

	// FIXME
	error("SetCharacterSpeed unimplemented");

	return RuntimeValue();
}

// import void SetCharacterSpeedEx(CHARID, int x_speed, int y_speed)
// Obsolete character function.
RuntimeValue Script_SetCharacterSpeedEx(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int x_speed = params[1]._signedValue;
	UNUSED(x_speed);
	int y_speed = params[2]._signedValue;
	UNUSED(y_speed);

	// FIXME
	error("SetCharacterSpeedEx unimplemented");

	return RuntimeValue();
}

// import void SetTalkingColor(CHARID, int colour)
// Obsolete character function.
RuntimeValue Script_SetTalkingColor(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int colour = params[1]._signedValue;
	UNUSED(colour);

	// FIXME
	error("SetTalkingColor unimplemented");

	return RuntimeValue();
}

// import void SetCharacterTransparency(CHARID, int transparency)
// Obsolete character function.
RuntimeValue Script_SetCharacterTransparency(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int transparency = params[1]._signedValue;
	UNUSED(transparency);

	// FIXME
	error("SetCharacterTransparency unimplemented");

	return RuntimeValue();
}

// import void SetCharacterClickable(CHARID, int clickable)
// Obsolete character function.
RuntimeValue Script_SetCharacterClickable(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	uint clickable = params[1]._value;

	if (charid >= vm->_characters.size())
		error("SetCharacterClickable: character %d is too high (only have %d)", charid, vm->_characters.size());

	Character *c = vm->_characters[charid];
	if (clickable)
		c->_flags &= ~CHF_NOINTERACT;
	else
		c->_flags |= CHF_NOINTERACT;

	return RuntimeValue();
}

// import void SetCharacterBaseline(CHARID, int baseline)
// Obsolete character function.
RuntimeValue Script_SetCharacterBaseline(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int baseline = params[1]._signedValue;
	UNUSED(baseline);

	// FIXME
	error("SetCharacterBaseline unimplemented");

	return RuntimeValue();
}

// import void SetCharacterIgnoreLight (CHARID, int ignoreLight)
// Obsolete character function.
RuntimeValue Script_SetCharacterIgnoreLight(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int ignoreLight = params[1]._signedValue;
	UNUSED(ignoreLight);

	// FIXME
	error("SetCharacterIgnoreLight unimplemented");

	return RuntimeValue();
}

// import void SetCharacterIgnoreWalkbehinds (CHARID, int ignoreWBs)
// Obsolete character function.
RuntimeValue Script_SetCharacterIgnoreWalkbehinds(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int ignoreWBs = params[1]._signedValue;
	UNUSED(ignoreWBs);

	// FIXME
	error("SetCharacterIgnoreWalkbehinds unimplemented");

	return RuntimeValue();
}

// import void SetCharacterProperty (CHARID, int property, int newValue)
// Obsolete character function.
RuntimeValue Script_SetCharacterProperty(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	uint32 charid = params[0]._value;
	UNUSED(charid);
	int property = params[1]._signedValue;
	UNUSED(property);
	int newValue = params[2]._signedValue;
	UNUSED(newValue);

	// FIXME
	error("SetCharacterProperty unimplemented");

	return RuntimeValue();
}

// import int GetPlayerCharacter()
// Obsolete character function.
RuntimeValue Script_GetPlayerCharacter(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("GetPlayerCharacter unimplemented");

	return RuntimeValue();
}

// Character: import function AddInventory(InventoryItem *item, int addAtIndex=SCR_NO_VALUE)
// Adds the specified item to the character's inventory.
RuntimeValue Script_Character_AddInventory(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotInventoryItem))
		error("Character::AddInventory got incorrect object type (expected a InventoryItem) for parameter 1");
	InventoryItem *item = (InventoryItem *)params[0]._object;
	UNUSED(item);
	int addAtIndex = params[1]._signedValue;
	UNUSED(addAtIndex);

	// FIXME
	error("Character::AddInventory unimplemented");

	return RuntimeValue();
}

// Character: import function AddWaypoint(int x, int y)
// Manually adds a waypoint to the character's movement path.
RuntimeValue Script_Character_AddWaypoint(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);

	// FIXME
	error("Character::AddWaypoint unimplemented");

	return RuntimeValue();
}

// Character: import function Animate(int loop, int delay, RepeatStyle=eOnce, BlockingStyle=eBlock, Direction=eForwards)
// Animates the character using its current locked view.
RuntimeValue Script_Character_Animate(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int loop = params[0]._signedValue;
	UNUSED(loop);
	int delay = params[1]._signedValue;
	UNUSED(delay);
	uint32 repeatstyle = params[2]._value;
	UNUSED(repeatstyle);
	uint32 blockingstyle = params[3]._value;
	UNUSED(blockingstyle);
	uint32 direction = params[4]._value;
	UNUSED(direction);

	// FIXME
	error("Character::Animate unimplemented");

	return RuntimeValue();
}

// Character: import function ChangeRoom(int room, int x=SCR_NO_VALUE, int y=SCR_NO_VALUE)
// Moves the character to another room. If this is the player character, the game will also switch to that room.
RuntimeValue Script_Character_ChangeRoom(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int room = params[0]._signedValue;
	int x = params[1]._signedValue;
	int y = params[2]._signedValue;

	if (self->_indexId != vm->_gameFile->_playerChar) {
		// NewRoomNPC
		if (x != SCR_NO_VALUE && y != SCR_NO_VALUE) {
			self->_x = x;
			self->_y = y;
		}
		self->_prevRoom = self->_room;
		self->_room = room;

		debugN(1, "%s moved to room %d, location %d,%d",
			self->_scriptName.c_str(), room, self->_x, self->_y);

		return RuntimeValue();
	}

	if (x != SCR_NO_VALUE && y != SCR_NO_VALUE) {
		vm->newRoomPos = 0;
		// don't check X or Y bounds, so that they can do a
		// walk-in animation if they want
		vm->newRoomX = x;
		vm->newRoomY = y;
	}

	vm->scheduleNewRoom(room);

	return RuntimeValue();
}

// Character: import function ChangeRoomAutoPosition(int room, int position=0)
// Moves the character to another room, using the old-style position variable
RuntimeValue Script_Character_ChangeRoomAutoPosition(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int room = params[0]._signedValue;
	UNUSED(room);
	int position = params[1]._signedValue;
	UNUSED(position);

	// FIXME
	error("Character::ChangeRoomAutoPosition unimplemented");

	return RuntimeValue();
}

// Character: import function ChangeView(int view)
// Changes the character's normal walking view.
RuntimeValue Script_Character_ChangeView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int view = params[0]._signedValue;
	UNUSED(view);

	// FIXME
	error("Character::ChangeView unimplemented");

	return RuntimeValue();
}

// Character: import function FaceCharacter(Character* , BlockingStyle=eBlock)
// Turns this character to face the other character.
RuntimeValue Script_Character_FaceCharacter(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotCharacter))
		error("Character::FaceCharacter got incorrect object type (expected a Character) for parameter 1");
	Character *character = (Character *)params[0]._object;
	UNUSED(character);
	uint32 blockingstyle = params[1]._value;
	UNUSED(blockingstyle);

	// FIXME
	error("Character::FaceCharacter unimplemented");

	return RuntimeValue();
}

// Character: import function FaceLocation(int x, int y, BlockingStyle=eBlock)
// Turns this character to face the specified location in the room.
RuntimeValue Script_Character_FaceLocation(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);
	uint32 blockingstyle = params[2]._value;
	UNUSED(blockingstyle);

	// FIXME
	error("Character::FaceLocation unimplemented");

	return RuntimeValue();
}

// Character: import function FaceObject(Object* , BlockingStyle=eBlock)
// Turns this character to face the specified object.
RuntimeValue Script_Character_FaceObject(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotRoomObject))
		error("Character::FaceObject got incorrect object type (expected a RoomObject) for parameter 1");
	RoomObject *object = (RoomObject *)params[0]._object;
	UNUSED(object);
	uint32 blockingstyle = params[1]._value;
	UNUSED(blockingstyle);

	// FIXME
	error("Character::FaceObject unimplemented");

	return RuntimeValue();
}

// Character: import function FollowCharacter(Character*, int dist=10, int eagerness=97)
// Starts this character following the other character.
RuntimeValue Script_Character_FollowCharacter(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotCharacter))
		error("Character::FollowCharacter got incorrect object type (expected a Character) for parameter 1");
	Character *character = (Character *)params[0]._object;
	UNUSED(character);
	int dist = params[1]._signedValue;
	UNUSED(dist);
	int eagerness = params[2]._signedValue;
	UNUSED(eagerness);

	// FIXME
	error("Character::FollowCharacter unimplemented");

	return RuntimeValue();
}

// Character: import static Character* GetAtScreenXY(int x, int y)
// Returns the character that is at the specified position on the screen.
RuntimeValue Script_Character_GetAtScreenXY(AGSEngine *vm, ScriptObject *, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);

	// FIXME
	error("Character::GetAtScreenXY unimplemented");

	return RuntimeValue();
}

// Character: import function GetProperty(const string property)
// Gets a numeric custom property for this character.
RuntimeValue Script_Character_GetProperty(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *property = (ScriptString *)params[0]._object;
	UNUSED(property);

	// FIXME
	error("Character::GetProperty unimplemented");

	return RuntimeValue();
}

// Character: import void GetPropertyText(const string property, string buffer)
// Undocumented.
RuntimeValue Script_Character_GetPropertyText(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *property = (ScriptString *)params[0]._object;
	UNUSED(property);
	ScriptString *buffer = (ScriptString *)params[1]._object;
	UNUSED(buffer);

	// FIXME
	error("Character::GetPropertyText unimplemented");

	return RuntimeValue();
}

// Character: import String GetTextProperty(const string property)
// Gets a text custom property for this character.
RuntimeValue Script_Character_GetTextProperty(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *property = (ScriptString *)params[0]._object;
	UNUSED(property);

	// FIXME
	error("Character::GetTextProperty unimplemented");

	return RuntimeValue();
}

// Character: import bool HasInventory(InventoryItem *item)
// Checks whether the character currently has the specified inventory item.
RuntimeValue Script_Character_HasInventory(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotInventoryItem))
		error("Character::HasInventory got incorrect object type (expected a InventoryItem) for parameter 1");
	InventoryItem *item = (InventoryItem *)params[0]._object;
	UNUSED(item);

	// FIXME
	error("Character::HasInventory unimplemented");

	return RuntimeValue();
}

// Character: import function IsCollidingWithChar(Character*)
// Checks whether this character is in collision with the other character.
RuntimeValue Script_Character_IsCollidingWithChar(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotCharacter))
		error("Character::IsCollidingWithChar got incorrect object type (expected a Character) for parameter 1");
	Character *character = (Character *)params[0]._object;
	UNUSED(character);

	// FIXME
	error("Character::IsCollidingWithChar unimplemented");

	return RuntimeValue();
}

// Character: import function IsCollidingWithObject(Object* )
// Checks whether this character is in collision with the object.
RuntimeValue Script_Character_IsCollidingWithObject(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotRoomObject))
		error("Character::IsCollidingWithObject got incorrect object type (expected a RoomObject) for parameter 1");
	RoomObject *object = (RoomObject *)params[0]._object;
	UNUSED(object);

	// FIXME
	error("Character::IsCollidingWithObject unimplemented");

	return RuntimeValue();
}

// Character: import function LockView(int view)
// Locks the character to this view, ready for doing animations.
RuntimeValue Script_Character_LockView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int view = params[0]._signedValue;
	UNUSED(view);

	// FIXME
	error("Character::LockView unimplemented");

	return RuntimeValue();
}

// Character: import function LockViewAligned(int view, int loop, Alignment)
// Locks the character to this view, and aligns it against one side of the existing sprite.
RuntimeValue Script_Character_LockViewAligned(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int view = params[0]._signedValue;
	UNUSED(view);
	int loop = params[1]._signedValue;
	UNUSED(loop);
	uint32 alignment = params[2]._value;
	UNUSED(alignment);

	// FIXME
	error("Character::LockViewAligned unimplemented");

	return RuntimeValue();
}

// Character: import function LockViewFrame(int view, int loop, int frame)
// Locks the character to the specified view frame
RuntimeValue Script_Character_LockViewFrame(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int view = params[0]._signedValue;
	UNUSED(view);
	int loop = params[1]._signedValue;
	UNUSED(loop);
	int frame = params[2]._signedValue;
	UNUSED(frame);

	// FIXME
	error("Character::LockViewFrame unimplemented");

	return RuntimeValue();
}

// Character: import function LockViewOffset(int view, int xOffset, int yOffset)
// Locks the character to is view, with high-resolution position adjustment.
RuntimeValue Script_Character_LockViewOffset(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int view = params[0]._signedValue;
	UNUSED(view);
	int xOffset = params[1]._signedValue;
	UNUSED(xOffset);
	int yOffset = params[2]._signedValue;
	UNUSED(yOffset);

	// FIXME
	error("Character::LockViewOffset unimplemented");

	return RuntimeValue();
}

// Character: import function LoseInventory(InventoryItem *item)
// Removes the item from this character's inventory.
RuntimeValue Script_Character_LoseInventory(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotInventoryItem))
		error("Character::LoseInventory got incorrect object type (expected a InventoryItem) for parameter 1");
	InventoryItem *item = (InventoryItem *)params[0]._object;
	UNUSED(item);

	// FIXME
	error("Character::LoseInventory unimplemented");

	return RuntimeValue();
}

// Character: import function Move(int x, int y, BlockingStyle=eNoBlock, WalkWhere=eWalkableAreas)
// Moves the character to the destination, without playing his walking animation.
RuntimeValue Script_Character_Move(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);
	uint32 blockingstyle = params[2]._value;
	UNUSED(blockingstyle);
	uint32 walkwhere = params[3]._value;
	UNUSED(walkwhere);

	// FIXME
	error("Character::Move unimplemented");

	return RuntimeValue();
}

// Character: import function PlaceOnWalkableArea()
// Moves the character to the nearest walkable area.
RuntimeValue Script_Character_PlaceOnWalkableArea(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::PlaceOnWalkableArea unimplemented");

	return RuntimeValue();
}

// Character: import void RemoveTint()
// Removes an existing colour tint from the character.
RuntimeValue Script_Character_RemoveTint(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::RemoveTint unimplemented");

	return RuntimeValue();
}

// Character: import function RunInteraction(CursorMode)
// Runs one of the character's interaction events.
RuntimeValue Script_Character_RunInteraction(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 cursormode = params[0]._value;
	UNUSED(cursormode);

	// FIXME
	error("Character::RunInteraction unimplemented");

	return RuntimeValue();
}

// Character: import function Say(const string message, ...)
// Says the specified text using the character's speech settings.
RuntimeValue Script_Character_Say(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *message = (ScriptString *)params[0]._object;
	UNUSED(message);

	// FIXME
	error("Character::Say unimplemented");

	return RuntimeValue();
}

// Character: import function SayAt(int x, int y, int width, const string message)
// Says the specified text at the specified position on the screen using the character's speech settings.
RuntimeValue Script_Character_SayAt(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);
	int width = params[2]._signedValue;
	UNUSED(width);
	ScriptString *message = (ScriptString *)params[3]._object;
	UNUSED(message);

	// FIXME
	error("Character::SayAt unimplemented");

	return RuntimeValue();
}

// Character: import Overlay* SayBackground(const string message)
// Displays the text as lucasarts-style speech but does not block the game.
RuntimeValue Script_Character_SayBackground(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *message = (ScriptString *)params[0]._object;
	UNUSED(message);

	// FIXME
	error("Character::SayBackground unimplemented");

	return RuntimeValue();
}

// Character: import function SetAsPlayer()
// Makes this character the player character.
RuntimeValue Script_Character_SetAsPlayer(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::SetAsPlayer unimplemented");

	return RuntimeValue();
}

// Character: import function SetIdleView(int view, int delay)
// Changes the character's idle view.
RuntimeValue Script_Character_SetIdleView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int view = params[0]._signedValue;
	UNUSED(view);
	int delay = params[1]._signedValue;
	UNUSED(delay);

	// FIXME
	error("Character::SetIdleView unimplemented");

	return RuntimeValue();
}

// Character: import function SetWalkSpeed(int x, int y)
// Changes the character's movement speed.
RuntimeValue Script_Character_SetWalkSpeed(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int xSpeed = params[0]._signedValue;
	int ySpeed = params[1]._signedValue;

	// can't be zero, nor too large
	if (xSpeed == 0 || xSpeed > 50 || ySpeed == 0 || ySpeed > 50)
		error("Character::SetWalkSpeed: invalid speed values %d, %d", xSpeed, ySpeed);

	if (self->_walking)
		error("Character::SetWalkSpeed: cannot change speed while walking");

	self->_walkSpeed = xSpeed;

	if (ySpeed == xSpeed)
		self->_walkSpeedY = UNIFORM_WALK_SPEED;
	else
		self->_walkSpeedY = ySpeed;

	return RuntimeValue();
}

// Character: import function StopMoving()
// Stops the character from moving.
RuntimeValue Script_Character_StopMoving(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::StopMoving unimplemented");

	return RuntimeValue();
}

// Character: import function Think(const string message, ...)
// The specified text is displayed in a thought-bubble GUI.
RuntimeValue Script_Character_Think(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *message = (ScriptString *)params[0]._object;
	UNUSED(message);

	// FIXME
	error("Character::Think unimplemented");

	return RuntimeValue();
}

// Character: import void Tint(int red, int green, int blue, int saturation, int luminance)
// Tints the character to the specified colour.
RuntimeValue Script_Character_Tint(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int red = params[0]._signedValue;
	UNUSED(red);
	int green = params[1]._signedValue;
	UNUSED(green);
	int blue = params[2]._signedValue;
	UNUSED(blue);
	int saturation = params[3]._signedValue;
	UNUSED(saturation);
	int luminance = params[4]._signedValue;
	UNUSED(luminance);

	// FIXME
	error("Character::Tint unimplemented");

	return RuntimeValue();
}

// Character: import function UnlockView()
// Unlocks the view after an animation has finished.
RuntimeValue Script_Character_UnlockView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::UnlockView unimplemented");

	return RuntimeValue();
}

// Character: import function Walk(int x, int y, BlockingStyle=eNoBlock, WalkWhere=eWalkableAreas)
// Moves the character to the destination, automatically playing his walking animation.
RuntimeValue Script_Character_Walk(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);
	uint32 blockingstyle = params[2]._value;
	UNUSED(blockingstyle);
	uint32 walkwhere = params[3]._value;
	UNUSED(walkwhere);

	// FIXME
	error("Character::Walk unimplemented");

	return RuntimeValue();
}

// Character: import function WalkStraight(int x, int y, BlockingStyle=eNoBlock)
// Moves the character in a straight line as far as possible towards the co-ordinates. Useful for keyboard movement.
RuntimeValue Script_Character_WalkStraight(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int x = params[0]._signedValue;
	UNUSED(x);
	int y = params[1]._signedValue;
	UNUSED(y);
	uint32 blockingstyle = params[2]._value;
	UNUSED(blockingstyle);

	// FIXME
	error("Character::WalkStraight unimplemented");

	return RuntimeValue();
}

// Character: import attribute InventoryItem* ActiveInventory
// Gets/sets the character's current inventory item. null if no item selected.
RuntimeValue Script_Character_get_ActiveInventory(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_ActiveInventory unimplemented");

	return RuntimeValue();
}

// Character: import attribute InventoryItem* ActiveInventory
// Gets/sets the character's current inventory item. null if no item selected.
RuntimeValue Script_Character_set_ActiveInventory(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	if (!params[0]._object->isOfType(sotInventoryItem))
		error("Character::set_ActiveInventory got incorrect object type (expected a InventoryItem) for parameter 1");
	InventoryItem *value = (InventoryItem *)params[0]._object;
	UNUSED(value);

	// FIXME
	error("Character::set_ActiveInventory unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute bool Animating
// Gets whether the character is currently animating.
RuntimeValue Script_Character_get_Animating(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_animating ? 1 : 0;
}

// Character: import attribute int AnimationSpeed
// Gets/sets the character's animation speed.
RuntimeValue Script_Character_get_AnimationSpeed(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_AnimationSpeed unimplemented");

	return RuntimeValue();
}

// Character: import attribute int AnimationSpeed
// Gets/sets the character's animation speed.
RuntimeValue Script_Character_set_AnimationSpeed(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int animSpeed = params[0]._signedValue;

	self->_animSpeed = animSpeed;

	return RuntimeValue();
}

// Character: import attribute int Baseline
// Gets/sets a specific baseline for the character. 0 means character's Y-pos will be used.
RuntimeValue Script_Character_get_Baseline(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Baseline unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Baseline
// Gets/sets a specific baseline for the character. 0 means character's Y-pos will be used.
RuntimeValue Script_Character_set_Baseline(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_Baseline unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlinkInterval
// Gets/sets the interval at which the character will blink while talking, in game loops.
RuntimeValue Script_Character_get_BlinkInterval(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_BlinkInterval unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlinkInterval
// Gets/sets the interval at which the character will blink while talking, in game loops.
RuntimeValue Script_Character_set_BlinkInterval(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_BlinkInterval unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlinkView
// Gets/sets the view used for the character's blinking animation. -1 to disable.
RuntimeValue Script_Character_get_BlinkView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_BlinkView unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlinkView
// Gets/sets the view used for the character's blinking animation. -1 to disable.
RuntimeValue Script_Character_set_BlinkView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_BlinkView unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool BlinkWhileThinking
// Gets/sets whether the character will blink while thinking as well as talking.
RuntimeValue Script_Character_get_BlinkWhileThinking(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_BlinkWhileThinking unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool BlinkWhileThinking
// Gets/sets whether the character will blink while thinking as well as talking.
RuntimeValue Script_Character_set_BlinkWhileThinking(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_BlinkWhileThinking unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlockingHeight
// Allows you to manually specify the height of the blocking area at the character's feet.
RuntimeValue Script_Character_get_BlockingHeight(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_BlockingHeight unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlockingHeight
// Allows you to manually specify the height of the blocking area at the character's feet.
RuntimeValue Script_Character_set_BlockingHeight(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_BlockingHeight unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlockingWidth
// Allows you to manually specify the width of the blocking area at the character's feet.
RuntimeValue Script_Character_get_BlockingWidth(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_BlockingWidth unimplemented");

	return RuntimeValue();
}

// Character: import attribute int BlockingWidth
// Allows you to manually specify the width of the blocking area at the character's feet.
RuntimeValue Script_Character_set_BlockingWidth(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_BlockingWidth unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool Clickable
// Gets/sets whether the mouse can be clicked on the character, or whether it passes straight through.
RuntimeValue Script_Character_get_Clickable(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Clickable unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool Clickable
// Gets/sets whether the mouse can be clicked on the character, or whether it passes straight through.
RuntimeValue Script_Character_set_Clickable(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_Clickable unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool DiagonalLoops
// Gets/sets whether this character has an 8-loop walking view with diagonal loops.
RuntimeValue Script_Character_get_DiagonalLoops(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_DiagonalLoops unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool DiagonalLoops
// Gets/sets whether this character has an 8-loop walking view with diagonal loops.
RuntimeValue Script_Character_set_DiagonalLoops(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_DiagonalLoops unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Frame
// Gets/sets the character's current frame number within its current view.
RuntimeValue Script_Character_get_Frame(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Frame unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Frame
// Gets/sets the character's current frame number within its current view.
RuntimeValue Script_Character_set_Frame(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_Frame unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute bool HasExplicitTint
// Gets whether the character has an explicit tint set.
RuntimeValue Script_Character_get_HasExplicitTint(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_HasExplicitTint unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int ID
// Gets the character's ID number.
RuntimeValue Script_Character_get_ID(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_ID unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int IdleView
// Gets the character's idle view (-1 if none).
RuntimeValue Script_Character_get_IdleView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_IdleView unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool IgnoreLighting
// Gets/sets whether the character ignores region tints and lighting.
RuntimeValue Script_Character_get_IgnoreLighting(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_IgnoreLighting unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool IgnoreLighting
// Gets/sets whether the character ignores region tints and lighting.
RuntimeValue Script_Character_set_IgnoreLighting(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_IgnoreLighting unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool IgnoreScaling
// Undocumented.
RuntimeValue Script_Character_get_IgnoreScaling(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_IgnoreScaling unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool IgnoreScaling
// Undocumented.
RuntimeValue Script_Character_set_IgnoreScaling(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_IgnoreScaling unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool IgnoreWalkbehinds
// Gets/sets whether the character ignores walk-behind areas and is always placed on top.
RuntimeValue Script_Character_get_IgnoreWalkbehinds(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_IgnoreWalkbehinds unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool IgnoreWalkbehinds
// Gets/sets whether the character ignores walk-behind areas and is always placed on top.
RuntimeValue Script_Character_set_IgnoreWalkbehinds(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_IgnoreWalkbehinds unimplemented");

	return RuntimeValue();
}

// Character: import attribute int InventoryQuantity[]
// Accesses the number of each inventory item that the character currently has.
RuntimeValue Script_Character_geti_InventoryQuantity(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int index = params[0]._signedValue;
	UNUSED(index);

	// FIXME
	error("Character::geti_InventoryQuantity unimplemented");

	return RuntimeValue();
}

// Character: import attribute int InventoryQuantity[]
// Accesses the number of each inventory item that the character currently has.
RuntimeValue Script_Character_seti_InventoryQuantity(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int index = params[0]._signedValue;
	UNUSED(index);
	int value = params[1]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::seti_InventoryQuantity unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Loop
// Gets/sets the character's current loop number within its current view.
RuntimeValue Script_Character_get_Loop(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_loop;
}

// Character: import attribute int Loop
// Gets/sets the character's current loop number within its current view.
RuntimeValue Script_Character_set_Loop(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_Loop unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool ManualScaling
// Gets/sets whether the character uses manually specified scaling instead of using walkable area scaling.
RuntimeValue Script_Character_get_ManualScaling(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_ManualScaling unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool ManualScaling
// Gets/sets whether the character uses manually specified scaling instead of using walkable area scaling.
RuntimeValue Script_Character_set_ManualScaling(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_ManualScaling unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool MovementLinkedToAnimation
// Gets/sets whether the character only moves when their animation frame changes.
RuntimeValue Script_Character_get_MovementLinkedToAnimation(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_MovementLinkedToAnimation unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool MovementLinkedToAnimation
// Gets/sets whether the character only moves when their animation frame changes.
RuntimeValue Script_Character_set_MovementLinkedToAnimation(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_MovementLinkedToAnimation unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute bool Moving
// Gets whether the character is currently moving.
RuntimeValue Script_Character_get_Moving(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_walking ? 1 : 0;
}

// Character: import attribute String Name
// Gets/sets the character's name.
RuntimeValue Script_Character_get_Name(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Name unimplemented");

	return RuntimeValue();
}

// Character: import attribute String Name
// Gets/sets the character's name.
RuntimeValue Script_Character_set_Name(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	ScriptString *value = (ScriptString *)params[0]._object;
	UNUSED(value);

	// FIXME
	error("Character::set_Name unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int NormalView
// Gets the character's normal walking view.
RuntimeValue Script_Character_get_NormalView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_NormalView unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int PreviousRoom
// Gets the room number that the character was in before this one.
RuntimeValue Script_Character_get_PreviousRoom(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_PreviousRoom unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int Room
// Gets the room number that the character is currently in.
RuntimeValue Script_Character_get_Room(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_room;
}

// Character: import attribute bool ScaleMoveSpeed
// Gets/sets whether the character's movement speed is adjusted in line with its scaling level.
RuntimeValue Script_Character_get_ScaleMoveSpeed(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_ScaleMoveSpeed unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool ScaleMoveSpeed
// Gets/sets whether the character's movement speed is adjusted in line with its scaling level.
RuntimeValue Script_Character_set_ScaleMoveSpeed(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint adjustSpeed = params[0]._value;

	if (adjustSpeed > 1)
		error("Character::set_ScaleMoveSpeed: value must be true or false (1 or 0), but got %d", adjustSpeed);

	self->_flags &= ~CHF_SCALEMOVESPEED;
	if (adjustSpeed)
		self->_flags |= CHF_SCALEMOVESPEED;

	return RuntimeValue();
}

// Character: import attribute bool ScaleVolume
// Gets/sets whether the volume of frame-linked sounds for the character are adjusted in line with its scaling level.
RuntimeValue Script_Character_get_ScaleVolume(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_ScaleVolume unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool ScaleVolume
// Gets/sets whether the volume of frame-linked sounds for the character are adjusted in line with its scaling level.
RuntimeValue Script_Character_set_ScaleVolume(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_ScaleVolume unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Scaling
// Gets/sets the character's current scaling level.
RuntimeValue Script_Character_get_Scaling(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Scaling unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Scaling
// Gets/sets the character's current scaling level.
RuntimeValue Script_Character_set_Scaling(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_Scaling unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool Solid
// Gets/sets whether this character blocks other objects and characters from moving through it.
RuntimeValue Script_Character_get_Solid(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Solid unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool Solid
// Gets/sets whether this character blocks other objects and characters from moving through it.
RuntimeValue Script_Character_set_Solid(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_Solid unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute bool Speaking
// Gets whether the character is currently in the middle of a Say command.
RuntimeValue Script_Character_get_Speaking(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Speaking unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int SpeakingFrame
// Gets the current frame of the character's speaking animation (only valid when Speaking is true)
RuntimeValue Script_Character_get_SpeakingFrame(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_SpeakingFrame unimplemented");

	return RuntimeValue();
}

// Character: import attribute int SpeechAnimationDelay
// Gets/sets the character's speech animation delay.
RuntimeValue Script_Character_get_SpeechAnimationDelay(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_SpeechAnimationDelay unimplemented");

	return RuntimeValue();
}

// Character: import attribute int SpeechAnimationDelay
// Gets/sets the character's speech animation delay.
RuntimeValue Script_Character_set_SpeechAnimationDelay(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_SpeechAnimationDelay unimplemented");

	return RuntimeValue();
}

// Character: import attribute int SpeechColor
// Gets/sets the character's speech text colour.
RuntimeValue Script_Character_get_SpeechColor(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_SpeechColor unimplemented");

	return RuntimeValue();
}

// Character: import attribute int SpeechColor
// Gets/sets the character's speech text colour.
RuntimeValue Script_Character_set_SpeechColor(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_SpeechColor unimplemented");

	return RuntimeValue();
}

// Character: import attribute int SpeechView
// Gets/sets the character's speech view.
RuntimeValue Script_Character_get_SpeechView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_talkView + 1;
}

// Character: import attribute int SpeechView
// Gets/sets the character's speech view.
RuntimeValue Script_Character_set_SpeechView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_SpeechView unimplemented");

	return RuntimeValue();
}

// Character: import attribute int ThinkView
// Gets/sets the character's thinking view.
RuntimeValue Script_Character_get_ThinkView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_ThinkView unimplemented");

	return RuntimeValue();
}

// Character: import attribute int ThinkView
// Gets/sets the character's thinking view.
RuntimeValue Script_Character_set_ThinkView(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_ThinkView unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Transparency
// Gets/sets the character's current transparency level.
RuntimeValue Script_Character_get_Transparency(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_Transparency unimplemented");

	return RuntimeValue();
}

// Character: import attribute int Transparency
// Gets/sets the character's current transparency level.
RuntimeValue Script_Character_set_Transparency(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint trans = params[0]._value;

	if (trans > 100)
		error("Character::set_Transparency: transparency value must be between 0 and 100, but got %d", trans);

	if (trans == 0)
		self->_transparency = 0;
	else if (trans == 100)
		self->_transparency = 255;
	else
		self->_transparency = ((100 - trans) * 25) / 10;

	return RuntimeValue();
}

// Character: import attribute bool TurnBeforeWalking
// Gets/sets whether the character turns on the spot to face the correct direction before walking.
RuntimeValue Script_Character_get_TurnBeforeWalking(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_TurnBeforeWalking unimplemented");

	return RuntimeValue();
}

// Character: import attribute bool TurnBeforeWalking
// Gets/sets whether the character turns on the spot to face the correct direction before walking.
RuntimeValue Script_Character_set_TurnBeforeWalking(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	uint32 value = params[0]._value;
	UNUSED(value);

	// FIXME
	error("Character::set_TurnBeforeWalking unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int View
// Gets the character's current view number.
RuntimeValue Script_Character_get_View(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_view + 1;
}

// Character: readonly import attribute int WalkSpeedX
// Gets the character's X movement speed.
RuntimeValue Script_Character_get_WalkSpeedX(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_WalkSpeedX unimplemented");

	return RuntimeValue();
}

// Character: readonly import attribute int WalkSpeedY
// Gets the character's Y movement speed.
RuntimeValue Script_Character_get_WalkSpeedY(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	// FIXME
	error("Character::get_WalkSpeedY unimplemented");

	return RuntimeValue();
}

// Character: import attribute int x
// The character's current X-position.
RuntimeValue Script_Character_get_x(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_x;
}

// Character: import attribute int x
// The character's current X-position.
RuntimeValue Script_Character_set_x(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_x unimplemented");

	return RuntimeValue();
}

// Character: import attribute int y
// The character's current Y-position.
RuntimeValue Script_Character_get_y(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_y;
}

// Character: import attribute int y
// The character's current Y-position.
RuntimeValue Script_Character_set_y(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_y unimplemented");

	return RuntimeValue();
}

// Character: import attribute int z
// The character's current Z-position.
RuntimeValue Script_Character_get_z(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	return self->_z;
}

// Character: import attribute int z
// The character's current Z-position.
RuntimeValue Script_Character_set_z(AGSEngine *vm, Character *self, const Common::Array<RuntimeValue> &params) {
	int value = params[0]._signedValue;
	UNUSED(value);

	// FIXME
	error("Character::set_z unimplemented");

	return RuntimeValue();
}

static const ScriptSystemFunctionInfo ourFunctionList[] = {
	{ "GetCharacterAt", (ScriptAPIFunction *)&Script_GetCharacterAt, "ii", sotNone },
	{ "AddInventory", (ScriptAPIFunction *)&Script_AddInventory, "i", sotNone },
	{ "LoseInventory", (ScriptAPIFunction *)&Script_LoseInventory, "i", sotNone },
	{ "SetActiveInventory", (ScriptAPIFunction *)&Script_SetActiveInventory, "i", sotNone },
	{ "NewRoom", (ScriptAPIFunction *)&Script_NewRoom, "i", sotNone },
	{ "NewRoomEx", (ScriptAPIFunction *)&Script_NewRoomEx, "iii", sotNone },
	{ "NewRoomNPC", (ScriptAPIFunction *)&Script_NewRoomNPC, "iiii", sotNone },
	{ "GetCharacterProperty", (ScriptAPIFunction *)&Script_GetCharacterProperty, "is", sotNone },
	{ "GetCharacterPropertyText", (ScriptAPIFunction *)&Script_GetCharacterPropertyText, "iss", sotNone },
	{ "RunCharacterInteraction", (ScriptAPIFunction *)&Script_RunCharacterInteraction, "ii", sotNone },
	{ "DisplaySpeech", (ScriptAPIFunction *)&Script_DisplaySpeech, "is", sotNone },
	{ "DisplaySpeechBackground", (ScriptAPIFunction *)&Script_DisplaySpeechBackground, "is", sotNone },
	{ "DisplaySpeechAt", (ScriptAPIFunction *)&Script_DisplaySpeechAt, "iiiis", sotNone },
	{ "DisplayThought", (ScriptAPIFunction *)&Script_DisplayThought, "is", sotNone },
	{ "FollowCharacter", (ScriptAPIFunction *)&Script_FollowCharacter, "ii", sotNone },
	{ "FollowCharacterEx", (ScriptAPIFunction *)&Script_FollowCharacterEx, "iiii", sotNone },
	{ "SetPlayerCharacter", (ScriptAPIFunction *)&Script_SetPlayerCharacter, "i", sotNone },
	{ "AddInventoryToCharacter", (ScriptAPIFunction *)&Script_AddInventoryToCharacter, "ii", sotNone },
	{ "LoseInventoryFromCharacter", (ScriptAPIFunction *)&Script_LoseInventoryFromCharacter, "ii", sotNone },
	{ "AnimateCharacter", (ScriptAPIFunction *)&Script_AnimateCharacter, "iiii", sotNone },
	{ "AnimateCharacterEx", (ScriptAPIFunction *)&Script_AnimateCharacterEx, "iiiiii", sotNone },
	{ "MoveCharacter", (ScriptAPIFunction *)&Script_MoveCharacter, "iii", sotNone },
	{ "MoveCharacterDirect", (ScriptAPIFunction *)&Script_MoveCharacterDirect, "iii", sotNone },
	{ "MoveCharacterPath", (ScriptAPIFunction *)&Script_MoveCharacterPath, "iii", sotNone },
	{ "MoveCharacterStraight", (ScriptAPIFunction *)&Script_MoveCharacterStraight, "iii", sotNone },
	{ "MoveCharacterToHotspot", (ScriptAPIFunction *)&Script_MoveCharacterToHotspot, "ii", sotNone },
	{ "MoveCharacterToObject", (ScriptAPIFunction *)&Script_MoveCharacterToObject, "ii", sotNone },
	{ "MoveCharacterBlocking", (ScriptAPIFunction *)&Script_MoveCharacterBlocking, "iiii", sotNone },
	{ "MoveToWalkableArea", (ScriptAPIFunction *)&Script_MoveToWalkableArea, "i", sotNone },
	{ "FaceCharacter", (ScriptAPIFunction *)&Script_FaceCharacter, "ii", sotNone },
	{ "FaceLocation", (ScriptAPIFunction *)&Script_FaceLocation, "iii", sotNone },
	{ "SetCharacterView", (ScriptAPIFunction *)&Script_SetCharacterView, "ii", sotNone },
	{ "SetCharacterViewEx", (ScriptAPIFunction *)&Script_SetCharacterViewEx, "iiii", sotNone },
	{ "SetCharacterViewOffset", (ScriptAPIFunction *)&Script_SetCharacterViewOffset, "iiii", sotNone },
	{ "SetCharacterFrame", (ScriptAPIFunction *)&Script_SetCharacterFrame, "iiii", sotNone },
	{ "ReleaseCharacterView", (ScriptAPIFunction *)&Script_ReleaseCharacterView, "i", sotNone },
	{ "ChangeCharacterView", (ScriptAPIFunction *)&Script_ChangeCharacterView, "ii", sotNone },
	{ "SetCharacterSpeechView", (ScriptAPIFunction *)&Script_SetCharacterSpeechView, "ii", sotNone },
	{ "SetCharacterBlinkView", (ScriptAPIFunction *)&Script_SetCharacterBlinkView, "iii", sotNone },
	{ "SetCharacterIdle", (ScriptAPIFunction *)&Script_SetCharacterIdle, "iii", sotNone },
	{ "StopMoving", (ScriptAPIFunction *)&Script_StopMoving, "i", sotNone },
	{ "AreCharObjColliding", (ScriptAPIFunction *)&Script_AreCharObjColliding, "ii", sotNone },
	{ "AreCharactersColliding", (ScriptAPIFunction *)&Script_AreCharactersColliding, "ii", sotNone },
	{ "SetCharacterSpeed", (ScriptAPIFunction *)&Script_SetCharacterSpeed, "ii", sotNone },
	{ "SetCharacterSpeedEx", (ScriptAPIFunction *)&Script_SetCharacterSpeedEx, "iii", sotNone },
	{ "SetTalkingColor", (ScriptAPIFunction *)&Script_SetTalkingColor, "ii", sotNone },
	{ "SetCharacterTransparency", (ScriptAPIFunction *)&Script_SetCharacterTransparency, "ii", sotNone },
	{ "SetCharacterClickable", (ScriptAPIFunction *)&Script_SetCharacterClickable, "ii", sotNone },
	{ "SetCharacterBaseline", (ScriptAPIFunction *)&Script_SetCharacterBaseline, "ii", sotNone },
	{ "SetCharacterIgnoreLight", (ScriptAPIFunction *)&Script_SetCharacterIgnoreLight, "ii", sotNone },
	{ "SetCharacterIgnoreWalkbehinds", (ScriptAPIFunction *)&Script_SetCharacterIgnoreWalkbehinds, "ii", sotNone },
	{ "SetCharacterProperty", (ScriptAPIFunction *)&Script_SetCharacterProperty, "iii", sotNone },
	{ "GetPlayerCharacter", (ScriptAPIFunction *)&Script_GetPlayerCharacter, "", sotNone },
	{ "Character::AddInventory^2", (ScriptAPIFunction *)&Script_Character_AddInventory, "oi", sotCharacter },
	{ "Character::AddWaypoint^2", (ScriptAPIFunction *)&Script_Character_AddWaypoint, "ii", sotCharacter },
	{ "Character::Animate^5", (ScriptAPIFunction *)&Script_Character_Animate, "iiiii", sotCharacter },
	{ "Character::ChangeRoom^3", (ScriptAPIFunction *)&Script_Character_ChangeRoom, "iii", sotCharacter },
	{ "Character::ChangeRoomAutoPosition^2", (ScriptAPIFunction *)&Script_Character_ChangeRoomAutoPosition, "ii", sotCharacter },
	{ "Character::ChangeView^1", (ScriptAPIFunction *)&Script_Character_ChangeView, "i", sotCharacter },
	{ "Character::FaceCharacter^2", (ScriptAPIFunction *)&Script_Character_FaceCharacter, "oi", sotCharacter },
	{ "Character::FaceLocation^3", (ScriptAPIFunction *)&Script_Character_FaceLocation, "iii", sotCharacter },
	{ "Character::FaceObject^2", (ScriptAPIFunction *)&Script_Character_FaceObject, "oi", sotCharacter },
	{ "Character::FollowCharacter^3", (ScriptAPIFunction *)&Script_Character_FollowCharacter, "oii", sotCharacter },
	{ "Character::GetAtScreenXY^2", (ScriptAPIFunction *)&Script_Character_GetAtScreenXY, "ii", sotNone },
	{ "Character::GetProperty^1", (ScriptAPIFunction *)&Script_Character_GetProperty, "s", sotCharacter },
	{ "Character::GetPropertyText^2", (ScriptAPIFunction *)&Script_Character_GetPropertyText, "ss", sotCharacter },
	{ "Character::GetTextProperty^1", (ScriptAPIFunction *)&Script_Character_GetTextProperty, "s", sotCharacter },
	{ "Character::HasInventory^1", (ScriptAPIFunction *)&Script_Character_HasInventory, "o", sotCharacter },
	{ "Character::IsCollidingWithChar^1", (ScriptAPIFunction *)&Script_Character_IsCollidingWithChar, "o", sotCharacter },
	{ "Character::IsCollidingWithObject^1", (ScriptAPIFunction *)&Script_Character_IsCollidingWithObject, "o", sotCharacter },
	{ "Character::LockView^1", (ScriptAPIFunction *)&Script_Character_LockView, "i", sotCharacter },
	{ "Character::LockViewAligned^3", (ScriptAPIFunction *)&Script_Character_LockViewAligned, "iii", sotCharacter },
	{ "Character::LockViewFrame^3", (ScriptAPIFunction *)&Script_Character_LockViewFrame, "iii", sotCharacter },
	{ "Character::LockViewOffset^3", (ScriptAPIFunction *)&Script_Character_LockViewOffset, "iii", sotCharacter },
	{ "Character::LoseInventory^1", (ScriptAPIFunction *)&Script_Character_LoseInventory, "o", sotCharacter },
	{ "Character::Move^4", (ScriptAPIFunction *)&Script_Character_Move, "iiii", sotCharacter },
	{ "Character::PlaceOnWalkableArea^0", (ScriptAPIFunction *)&Script_Character_PlaceOnWalkableArea, "", sotCharacter },
	{ "Character::RemoveTint^0", (ScriptAPIFunction *)&Script_Character_RemoveTint, "", sotCharacter },
	{ "Character::RunInteraction^1", (ScriptAPIFunction *)&Script_Character_RunInteraction, "i", sotCharacter },
	{ "Character::Say^101", (ScriptAPIFunction *)&Script_Character_Say, "s", sotCharacter },
	{ "Character::SayAt^4", (ScriptAPIFunction *)&Script_Character_SayAt, "iiis", sotCharacter },
	{ "Character::SayBackground^1", (ScriptAPIFunction *)&Script_Character_SayBackground, "s", sotCharacter },
	{ "Character::SetAsPlayer^0", (ScriptAPIFunction *)&Script_Character_SetAsPlayer, "", sotCharacter },
	{ "Character::SetIdleView^2", (ScriptAPIFunction *)&Script_Character_SetIdleView, "ii", sotCharacter },
	{ "Character::SetWalkSpeed^2", (ScriptAPIFunction *)&Script_Character_SetWalkSpeed, "ii", sotCharacter },
	{ "Character::StopMoving^0", (ScriptAPIFunction *)&Script_Character_StopMoving, "", sotCharacter },
	{ "Character::Think^101", (ScriptAPIFunction *)&Script_Character_Think, "s", sotCharacter },
	{ "Character::Tint^5", (ScriptAPIFunction *)&Script_Character_Tint, "iiiii", sotCharacter },
	{ "Character::UnlockView^0", (ScriptAPIFunction *)&Script_Character_UnlockView, "", sotCharacter },
	{ "Character::Walk^4", (ScriptAPIFunction *)&Script_Character_Walk, "iiii", sotCharacter },
	{ "Character::WalkStraight^3", (ScriptAPIFunction *)&Script_Character_WalkStraight, "iii", sotCharacter },
	{ "Character::get_ActiveInventory", (ScriptAPIFunction *)&Script_Character_get_ActiveInventory, "", sotCharacter },
	{ "Character::set_ActiveInventory", (ScriptAPIFunction *)&Script_Character_set_ActiveInventory, "o", sotCharacter },
	{ "Character::get_Animating", (ScriptAPIFunction *)&Script_Character_get_Animating, "", sotCharacter },
	{ "Character::get_AnimationSpeed", (ScriptAPIFunction *)&Script_Character_get_AnimationSpeed, "", sotCharacter },
	{ "Character::set_AnimationSpeed", (ScriptAPIFunction *)&Script_Character_set_AnimationSpeed, "i", sotCharacter },
	{ "Character::get_Baseline", (ScriptAPIFunction *)&Script_Character_get_Baseline, "", sotCharacter },
	{ "Character::set_Baseline", (ScriptAPIFunction *)&Script_Character_set_Baseline, "i", sotCharacter },
	{ "Character::get_BlinkInterval", (ScriptAPIFunction *)&Script_Character_get_BlinkInterval, "", sotCharacter },
	{ "Character::set_BlinkInterval", (ScriptAPIFunction *)&Script_Character_set_BlinkInterval, "i", sotCharacter },
	{ "Character::get_BlinkView", (ScriptAPIFunction *)&Script_Character_get_BlinkView, "", sotCharacter },
	{ "Character::set_BlinkView", (ScriptAPIFunction *)&Script_Character_set_BlinkView, "i", sotCharacter },
	{ "Character::get_BlinkWhileThinking", (ScriptAPIFunction *)&Script_Character_get_BlinkWhileThinking, "", sotCharacter },
	{ "Character::set_BlinkWhileThinking", (ScriptAPIFunction *)&Script_Character_set_BlinkWhileThinking, "i", sotCharacter },
	{ "Character::get_BlockingHeight", (ScriptAPIFunction *)&Script_Character_get_BlockingHeight, "", sotCharacter },
	{ "Character::set_BlockingHeight", (ScriptAPIFunction *)&Script_Character_set_BlockingHeight, "i", sotCharacter },
	{ "Character::get_BlockingWidth", (ScriptAPIFunction *)&Script_Character_get_BlockingWidth, "", sotCharacter },
	{ "Character::set_BlockingWidth", (ScriptAPIFunction *)&Script_Character_set_BlockingWidth, "i", sotCharacter },
	{ "Character::get_Clickable", (ScriptAPIFunction *)&Script_Character_get_Clickable, "", sotCharacter },
	{ "Character::set_Clickable", (ScriptAPIFunction *)&Script_Character_set_Clickable, "i", sotCharacter },
	{ "Character::get_DiagonalLoops", (ScriptAPIFunction *)&Script_Character_get_DiagonalLoops, "", sotCharacter },
	{ "Character::set_DiagonalLoops", (ScriptAPIFunction *)&Script_Character_set_DiagonalLoops, "i", sotCharacter },
	{ "Character::get_Frame", (ScriptAPIFunction *)&Script_Character_get_Frame, "", sotCharacter },
	{ "Character::set_Frame", (ScriptAPIFunction *)&Script_Character_set_Frame, "i", sotCharacter },
	{ "Character::get_HasExplicitTint", (ScriptAPIFunction *)&Script_Character_get_HasExplicitTint, "", sotCharacter },
	{ "Character::get_ID", (ScriptAPIFunction *)&Script_Character_get_ID, "", sotCharacter },
	{ "Character::get_IdleView", (ScriptAPIFunction *)&Script_Character_get_IdleView, "", sotCharacter },
	{ "Character::get_IgnoreLighting", (ScriptAPIFunction *)&Script_Character_get_IgnoreLighting, "", sotCharacter },
	{ "Character::set_IgnoreLighting", (ScriptAPIFunction *)&Script_Character_set_IgnoreLighting, "i", sotCharacter },
	{ "Character::get_IgnoreScaling", (ScriptAPIFunction *)&Script_Character_get_IgnoreScaling, "", sotCharacter },
	{ "Character::set_IgnoreScaling", (ScriptAPIFunction *)&Script_Character_set_IgnoreScaling, "i", sotCharacter },
	{ "Character::get_IgnoreWalkbehinds", (ScriptAPIFunction *)&Script_Character_get_IgnoreWalkbehinds, "", sotCharacter },
	{ "Character::set_IgnoreWalkbehinds", (ScriptAPIFunction *)&Script_Character_set_IgnoreWalkbehinds, "i", sotCharacter },
	{ "Character::geti_InventoryQuantity", (ScriptAPIFunction *)&Script_Character_geti_InventoryQuantity, "i", sotCharacter },
	{ "Character::seti_InventoryQuantity", (ScriptAPIFunction *)&Script_Character_seti_InventoryQuantity, "ii", sotCharacter },
	{ "Character::get_Loop", (ScriptAPIFunction *)&Script_Character_get_Loop, "", sotCharacter },
	{ "Character::set_Loop", (ScriptAPIFunction *)&Script_Character_set_Loop, "i", sotCharacter },
	{ "Character::get_ManualScaling", (ScriptAPIFunction *)&Script_Character_get_ManualScaling, "", sotCharacter },
	{ "Character::set_ManualScaling", (ScriptAPIFunction *)&Script_Character_set_ManualScaling, "i", sotCharacter },
	{ "Character::get_MovementLinkedToAnimation", (ScriptAPIFunction *)&Script_Character_get_MovementLinkedToAnimation, "", sotCharacter },
	{ "Character::set_MovementLinkedToAnimation", (ScriptAPIFunction *)&Script_Character_set_MovementLinkedToAnimation, "i", sotCharacter },
	{ "Character::get_Moving", (ScriptAPIFunction *)&Script_Character_get_Moving, "", sotCharacter },
	{ "Character::get_Name", (ScriptAPIFunction *)&Script_Character_get_Name, "", sotCharacter },
	{ "Character::set_Name", (ScriptAPIFunction *)&Script_Character_set_Name, "s", sotCharacter },
	{ "Character::get_NormalView", (ScriptAPIFunction *)&Script_Character_get_NormalView, "", sotCharacter },
	{ "Character::get_PreviousRoom", (ScriptAPIFunction *)&Script_Character_get_PreviousRoom, "", sotCharacter },
	{ "Character::get_Room", (ScriptAPIFunction *)&Script_Character_get_Room, "", sotCharacter },
	{ "Character::get_ScaleMoveSpeed", (ScriptAPIFunction *)&Script_Character_get_ScaleMoveSpeed, "", sotCharacter },
	{ "Character::set_ScaleMoveSpeed", (ScriptAPIFunction *)&Script_Character_set_ScaleMoveSpeed, "i", sotCharacter },
	{ "Character::get_ScaleVolume", (ScriptAPIFunction *)&Script_Character_get_ScaleVolume, "", sotCharacter },
	{ "Character::set_ScaleVolume", (ScriptAPIFunction *)&Script_Character_set_ScaleVolume, "i", sotCharacter },
	{ "Character::get_Scaling", (ScriptAPIFunction *)&Script_Character_get_Scaling, "", sotCharacter },
	{ "Character::set_Scaling", (ScriptAPIFunction *)&Script_Character_set_Scaling, "i", sotCharacter },
	{ "Character::get_Solid", (ScriptAPIFunction *)&Script_Character_get_Solid, "", sotCharacter },
	{ "Character::set_Solid", (ScriptAPIFunction *)&Script_Character_set_Solid, "i", sotCharacter },
	{ "Character::get_Speaking", (ScriptAPIFunction *)&Script_Character_get_Speaking, "", sotCharacter },
	{ "Character::get_SpeakingFrame", (ScriptAPIFunction *)&Script_Character_get_SpeakingFrame, "", sotCharacter },
	{ "Character::get_SpeechAnimationDelay", (ScriptAPIFunction *)&Script_Character_get_SpeechAnimationDelay, "", sotCharacter },
	{ "Character::set_SpeechAnimationDelay", (ScriptAPIFunction *)&Script_Character_set_SpeechAnimationDelay, "i", sotCharacter },
	{ "Character::get_SpeechColor", (ScriptAPIFunction *)&Script_Character_get_SpeechColor, "", sotCharacter },
	{ "Character::set_SpeechColor", (ScriptAPIFunction *)&Script_Character_set_SpeechColor, "i", sotCharacter },
	{ "Character::get_SpeechView", (ScriptAPIFunction *)&Script_Character_get_SpeechView, "", sotCharacter },
	{ "Character::set_SpeechView", (ScriptAPIFunction *)&Script_Character_set_SpeechView, "i", sotCharacter },
	{ "Character::get_ThinkView", (ScriptAPIFunction *)&Script_Character_get_ThinkView, "", sotCharacter },
	{ "Character::set_ThinkView", (ScriptAPIFunction *)&Script_Character_set_ThinkView, "i", sotCharacter },
	{ "Character::get_Transparency", (ScriptAPIFunction *)&Script_Character_get_Transparency, "", sotCharacter },
	{ "Character::set_Transparency", (ScriptAPIFunction *)&Script_Character_set_Transparency, "i", sotCharacter },
	{ "Character::get_TurnBeforeWalking", (ScriptAPIFunction *)&Script_Character_get_TurnBeforeWalking, "", sotCharacter },
	{ "Character::set_TurnBeforeWalking", (ScriptAPIFunction *)&Script_Character_set_TurnBeforeWalking, "i", sotCharacter },
	{ "Character::get_View", (ScriptAPIFunction *)&Script_Character_get_View, "", sotCharacter },
	{ "Character::get_WalkSpeedX", (ScriptAPIFunction *)&Script_Character_get_WalkSpeedX, "", sotCharacter },
	{ "Character::get_WalkSpeedY", (ScriptAPIFunction *)&Script_Character_get_WalkSpeedY, "", sotCharacter },
	{ "Character::get_x", (ScriptAPIFunction *)&Script_Character_get_x, "", sotCharacter },
	{ "Character::set_x", (ScriptAPIFunction *)&Script_Character_set_x, "i", sotCharacter },
	{ "Character::get_y", (ScriptAPIFunction *)&Script_Character_get_y, "", sotCharacter },
	{ "Character::set_y", (ScriptAPIFunction *)&Script_Character_set_y, "i", sotCharacter },
	{ "Character::get_z", (ScriptAPIFunction *)&Script_Character_get_z, "", sotCharacter },
	{ "Character::set_z", (ScriptAPIFunction *)&Script_Character_set_z, "i", sotCharacter },
};

void addCharacterSystemScripting(AGSEngine *vm) {
	GlobalScriptState *state = vm->getScriptState();

	state->addSystemFunctionImportList(ourFunctionList, ARRAYSIZE(ourFunctionList));
}

} // End of namespace AGS
