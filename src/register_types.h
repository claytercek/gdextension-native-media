#pragma once

#include <godot_cpp/core/class_db.hpp>
#include <gdextension_interface.h>

void gdextension_initialize(godot::ModuleInitializationLevel p_level);
void gdextension_terminate(godot::ModuleInitializationLevel p_level);
