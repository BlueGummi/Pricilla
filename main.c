//this is the main function, pretty obvious but i'm marking it anyway -oriolenix aka Indigo
 #include <stdio.h>
 #include <espeak-ng/speak_lib.h>
//speak-ng is important
int main() {
        //told I must activate this before any espeak synthing
        ESPEAK_API int espeak_Initialize(espeak_AUDIO_OUTPUT output, int buflength, const char *path, int options);


	int talking;

	printf("search for question here number here: ");
	scanf("%d", &talking);
       //this is not working because im incompetent and can't figure out the syntax, fix later 
	printf("\nnumber: %d", talking);
        espeak_Synth("%d", talking);
	return 0;

    }
