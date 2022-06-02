#include <daisy_seed.h> 
#include <daisysp.h>

// TODO: This is just a placeholder file until the engine code is developed

// using namespace infrasonic;
using namespace daisy;
using namespace daisysp;

static const auto kSampleRate = SaiHandle::Config::SampleRate::SAI_48KHZ;
static const size_t kBlockSize = 4;

static DaisySeed hw;

void AudioCallback(AudioHandle::InputBuffer in, AudioHandle::OutputBuffer out, size_t size)
{
    for (size_t i=0; i<size; i++) {
        // engine.Process(OUT_L[i], OUT_R[i]);
    }
}

int main(void)
{
    hw.Init();

    hw.SetAudioSampleRate(kSampleRate);
    hw.SetAudioBlockSize(kBlockSize);
    hw.StartAudio(AudioCallback);

    while(1) {
        System::Delay(10);
    }

    return 0;
}
