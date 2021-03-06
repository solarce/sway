#ifndef _SWAY_EXTENSIONS_H
#define _SWAY_EXTENSIONS_H

#include "wayland-desktop-shell-server-protocol.h"
#include "list.h"
#include "wlc/wlc-wayland.h"

struct background_config {
        wlc_handle output;
        wlc_resource surface;
};

struct panel_config {
        wlc_handle output;
        wlc_resource surface;
};

struct desktop_shell_state {
        list_t *backgrounds;
        list_t *panels;
        enum desktop_shell_panel_position panel_position;
        struct wlc_size panel_size;
};

extern struct desktop_shell_state desktop_shell;

void register_extensions(void);

#endif
