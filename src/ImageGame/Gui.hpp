#pragma once

#include "GuiBase.hpp"

namespace mari {

class Gui : public GuiBase {
  protected:
    void update() override;

  private:
    void drawExampleWindow();

    bool showText_ = false;
    int randomNumber_ = 0;
};
}