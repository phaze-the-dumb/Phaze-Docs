# Useful Hooks

### MainMenuViewController_DidActivate
Called when the main menu is loaded

Args:
```cpp
MainMenuViewController* self,
bool firstActivation,
bool addedToHierarchy,
bool screenSystemEnabling
```
Return Type: `void`

### AudioTimeSyncController_StartSong
Called when the song is loaded

Args:
```cpp
AudioTimeSyncController* self,
float startTimeOffset
```
Return Type: `void`

### ScoreController_HandleNoteWasCut
Called when the note was cut

Args:
```cpp
ScoreController* self,
NoteController* note,
ByRef<GlobalNamespace::NoteCutInfo> info
```
Return Type: `void`

### ScoreController_HandleNoteWasMissed
Called when the note was missed

Args:
```cpp
ScoreController* self,
NoteController* note
```
Return Type: `void`

### ScoreController_HandleNoteWasMissed
Called when the note was missed

Args:
```cpp
ScoreController* self,
NoteController* note
```
Return Type: `void`

### PlayerTransforms_Update
Called when the player moves their hands or hand

Args:
```cpp
PlayerTransforms* self
```
Return Type: `void`

### SaberClashEffect_LateUpdate
Called when the sabers clash good for stopping saber clash vibrations

Args:
```cpp
SaberClashEffect* self
```
Return Type: `void`

### NoteController_Init
Called when a note spawns

Args:
```cpp
NoteController* self,
NoteData* noteData,
float worldRotation,
UnityEngine::Vector3 moveStartPos,
UnityEngine::Vector3 moveEndPos,
UnityEngine::Vector3 jumpEndPos,
float moveDuration,
float jumpDuration,
float jumpGravity,
float endRotation,
float uniformScale
```
Return Type: `void`

### ObstacleController_Init
Called when a wall spawns

Args:
```cpp
ObstacleController* self,
ObstacleData* ObstacleData,
float worldRotation,
UnityEngine::Vector3 startPos,
UnityEngine::Vector3 midPos,
UnityEngine::Vector3 endPos,
float move1Duration,
float move2Duration,
float singleLineWidth,
float height
```
Return Type: `void`

### ResultsViewController_Init
Called when the results of a song are loaded

Args:
```cpp
ResultsViewController* self,
LevelCompletionResults* result,
IDifficultyBeatmap* beatmap,
bool practice,
bool newHighScore
```
Return Type: `void`

### PlatformLeaderboardViewController_DidActivate
Scoreboard view controller

Args:
```cpp
PlatformLeaderboardViewController* self,
bool firstActivation,
bool addedToHierarchy,
bool screenSystemEnabling
```
Return Type: `void`
