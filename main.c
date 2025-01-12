//this is the main function, pretty obvious but i'm marking it anyway -oriolenix aka Indigo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <espeak-ng/speak_lib.h>

//speak-ng is important
int main() {

    //told I must activate this before any espeak synthing
    espeak_Initialize(AUDIO_OUTPUT_PLAYBACK, 0, NULL, 0);

    char input[20];
    int talking;

    printf("Search for question here number here: ");
    fgets(input, sizeof(input), stdin);

    // may return 0 if ASCII to Integer fails
    talking = atoi(input);

    //this is not working because im incompetent and can't figure out the syntax, fix later
    printf("\nNumber: %d\n", talking);
    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d", talking);

    espeak_Synth(buffer, sizeof(buffer), 0, 0, 0, espeakCHARS_AUTO, NULL, NULL);

    espeak_Synchronize();

    return 0;
}
