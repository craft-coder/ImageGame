#include "Gui.hpp"
#include "ImageGameLib.hpp"

namespace mari {

void Gui::update() {
    // Uncomment the following line to see many ImGui examples
    // ImGui::ShowDemoWindow();
    drawExampleWindow();
}

void Gui::drawExampleWindow() {
    if (ImGui::Button("Want to see a random number?")) {
        showText_ = !showText_;

        auto imageGameLib = ImageGameLib();
        randomNumber_ = imageGameLib.getRandomNumber(1, 100);
    }

    if (showText_) {

        ImGui::Text("Well done sir :-)!");
        ImGui::Text("Random number: %d", randomNumber_);
    }
}

}
