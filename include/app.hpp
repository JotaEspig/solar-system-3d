#pragma once

#include <memory>
#include <sstream>
#include <vector>

#include <axolote/engine.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/string_cast.hpp>

#include <celestial_body.hpp>
#include <solar_system.hpp>

#define DT_MULTIPLIER 200000

class App : public axolote::Window
{
public:
    void main_loop();
};
