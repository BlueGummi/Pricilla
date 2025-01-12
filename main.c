#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <espeak-ng/speak_lib.h>

int main() {
    espeak_Initialize(AUDIO_OUTPUT_PLAYBACK, 0, NULL, 0);

    char input[20];
    int talking;

    printf("Search for question here number here: ");
    fgets(input, sizeof(input), stdin);

    talking = atoi(input);

    printf("\nNumber: %d\n", talking);
    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d", talking);

    espeak_Synth(buffer, sizeof(buffer), 0, 0, 0, espeakCHARS_AUTO, NULL, NULL);

    espeak_Synchronize();

    return 0;
}