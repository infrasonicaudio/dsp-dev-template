#pragma once
#ifndef INFS_FEEDBACKSYNTHMIDIHANDLER_H
#define INFS_FEEDBACKSYNTHMIDIHANDLER_H

namespace infrasonic {
namespace Synth {

class MIDIHandler {

    public:
        MIDIHandler() = delete;

        // static void Init(Controls * const controls)
        // {
        //     controls_ = controls;
        // }

        static void NoteOn(unsigned char channel, unsigned char nn, unsigned char velocity)
        {
        }

        static void NoteOff(unsigned char channel, unsigned char nn, unsigned char velocity)
        {
        }

        static void ControlChange(unsigned char channel, unsigned char cc, unsigned char value)
        {
        }

    private:

        enum class CCParam: unsigned char {
        };

        // inline static Controls *controls_ = nullptr;
};

// namespace
}
}

#endif