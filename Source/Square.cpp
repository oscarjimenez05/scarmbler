//
// Created by oscar on 10/24/2025.
//

#include "Square.h"

void Square::paint (juce::Graphics& g) {
    g.fillAll (juce::Colours::yellow);

    g.setColour (juce::Colours::red);
    g.setFont (10.0f);
    g.drawFittedText ("Glorbo", getLocalBounds(), juce::Justification::centred, 1);
}
void Square::resized() {

}