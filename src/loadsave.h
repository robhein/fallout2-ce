#ifndef LOAD_SAVE_GAME_H
#define LOAD_SAVE_GAME_H

typedef enum LoadSaveMode {
    // Special case - loading game from main menu.
    LOAD_SAVE_MODE_FROM_MAIN_MENU,

    // Normal (full-screen) save/load screen.
    LOAD_SAVE_MODE_NORMAL,

    // Quick load/save.
    LOAD_SAVE_MODE_QUICK,
} LoadSaveMode;

void _InitLoadSave();
void _ResetLoadSave();
int lsgSaveGame(int mode);
int lsgLoadGame(int mode);
int _isLoadingGame();
void lsgInit();
int _MapDirEraseFile_(const char* a1, const char* a2);

#endif /* LOAD_SAVE_GAME_H */
