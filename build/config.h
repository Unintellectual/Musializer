//// Build target. Pick only one!
#define MUSIALIZER_TARGET TARGET_LINUX
// #define MUSIALIZER_TARGET TARGET_WIN64_MINGW
// #define MUSIALIZER_TARGET TARGET_WIN64_MSVC
// #define MUSIALIZER_TARGET TARGET_MACOS

//// Moves everything in src/plub.c to a separate "DLL" so it can be hotreloaded. Works only for Linux right now
// #define MUSIALIZER_HOTRELOAD

//// Unfinished feature that enables capturing sound from the mic.
// #define MUSIALIZER_MICROPHONE
