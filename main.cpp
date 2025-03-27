#include "frequencies.h"
#include "dynamics.h"
#include "durations.h"

#define SPEAKER_PIN 8
#define VOLUME_PIN 9

#define TEMPO 250

void play(int frequency, float duration, int loudness = MF)
{
    analogWrite(VOLUME_PIN, loudness);
    int drt = (int) (duration * TEMPO);
    tone(SPEAKER_PIN, frequency, drt);
    delay(drt);
}
void rest(float duration)
{
    delay((int) (duration * TEMPO));
}

