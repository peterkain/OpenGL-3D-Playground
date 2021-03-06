#pragma once

#include <string>

#include "Types.h"
#include "File.h"
#include "Vec2.h"

static class Settings
{
public:
    Settings();

    static bool get_config();

    static bool fullscreen();
    static bool show_fps();
    static bool vsync_enabled();
    static bool mouse_cursor_hidden();

    static uint width();
    static uint height();
    static uint8_t multisamples();

    static Vec2<float> entity_size();
    static float player_size();
    static float tex_size();

    static std::string settings_file_name();

    static void revert_to_defaults();


private:
    static bool m_fullscreen;
    static bool m_show_fps;
    static bool m_enable_vsync;
    static bool m_mode_found;
    static bool m_hide_mouse;

    static uint m_width, m_height;
    static uint8_t m_multisamples;

    static float m_entity_sizew;
    static float m_entity_sizeh;
    static float m_player_size;
    static float m_tex_size;
} settings;
