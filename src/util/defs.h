#pragma once

// Maximum buffer length to each EngineObject::process call.
//TODO: Replace this with mixxx::AudioParameters::bufferSize()
constexpr unsigned int MAX_BUFFER_LEN = 160000;

constexpr int kMaxNumberOfDecks = 4;

// Keyboard shortcut components for showing the Track Properties dialog and
// for displaying the shortcut in the track context menu
const Qt::Modifier kPropertiesShortcutModifier = Qt::CTRL;
const Qt::Key kPropertiesShortcutKey = Qt::Key_Return;

// Keyboard shortcut for hiding track and removing from Crate/Playlist/AutoDJ queue.
// This is also used to display the shortcut in the track context menu.
const Qt::Key kHideRemoveShortcutKey = Qt::Key_Delete;
