#pragma once

#include "scene.h"

void** star_scene_create(void);

void star_scene_destroy(void** context_ptr);

void star_scene_update(void** context_ptr);

extern scene_type star_scene;