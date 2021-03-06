#pragma once

#include <JuceHeader.h>

/** Base class to override (mostly) unused juce::AudioProcessor functions */
class ProcessorBase : public AudioProcessor
{
public:
    ProcessorBase (String name = String()) : name (name) {}

    const String getName() const override { return name; }

    double getTailLengthSeconds() const override { return 0.0; }

    void prepareToPlay (double /*sampleRate*/, int /*samplesPerBlock*/) override {}
    void processBlock (AudioBuffer<float>&, MidiBuffer&) override {}
    void releaseResources() override {}

    bool acceptsMidi() const override { return false; }
    bool producesMidi() const override { return false; }

    AudioProcessorEditor* createEditor() override { return nullptr; }
    bool hasEditor() const override { return false; }

    int getNumPrograms() override { return 0; }
    void setCurrentProgram (int /*index*/) override {}
    int getCurrentProgram() override { return 0; }

    const String getProgramName (int /*index*/) override { return {}; }
    void changeProgramName (int /*index*/, const String& /*newName*/) override {}

    void getStateInformation (MemoryBlock& /*destData*/) override {}
    void setStateInformation (const void* /*data*/, int /*sizeInBytes*/) override {}

private:
    String name;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ProcessorBase)
};
