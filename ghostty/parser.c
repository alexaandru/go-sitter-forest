#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 144
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  anon_sym_EQ = 2,
  anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime = 3,
  anon_sym_adjust_DASHbox_DASHthickness = 4,
  anon_sym_adjust_DASHcell_DASHheight = 5,
  anon_sym_adjust_DASHcell_DASHwidth = 6,
  anon_sym_adjust_DASHcursor_DASHheight = 7,
  anon_sym_adjust_DASHcursor_DASHthickness = 8,
  anon_sym_adjust_DASHfont_DASHbaseline = 9,
  anon_sym_adjust_DASHoverline_DASHposition = 10,
  anon_sym_adjust_DASHoverline_DASHthickness = 11,
  anon_sym_adjust_DASHstrikethrough_DASHposition = 12,
  anon_sym_adjust_DASHstrikethrough_DASHthickness = 13,
  anon_sym_adjust_DASHunderline_DASHposition = 14,
  anon_sym_adjust_DASHunderline_DASHthickness = 15,
  anon_sym_adw_DASHtoolbar_DASHstyle = 16,
  anon_sym_auto_DASHupdate = 17,
  anon_sym_auto_DASHupdate_DASHchannel = 18,
  anon_sym_background = 19,
  anon_sym_background_DASHblur_DASHradius = 20,
  anon_sym_background_DASHopacity = 21,
  anon_sym_bold_DASHis_DASHbright = 22,
  anon_sym_class = 23,
  anon_sym_click_DASHrepeat_DASHinterval = 24,
  anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe = 25,
  anon_sym_clipboard_DASHpaste_DASHprotection = 26,
  anon_sym_clipboard_DASHread = 27,
  anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces = 28,
  anon_sym_clipboard_DASHwrite = 29,
  anon_sym_command = 30,
  anon_sym_config_DASHdefault_DASHfiles = 31,
  anon_sym_config_DASHfile = 32,
  anon_sym_confirm_DASHclose_DASHsurface = 33,
  anon_sym_copy_DASHon_DASHselect = 34,
  anon_sym_cursor_DASHclick_DASHto_DASHmove = 35,
  anon_sym_cursor_DASHcolor = 36,
  anon_sym_cursor_DASHinvert_DASHfg_DASHbg = 37,
  anon_sym_cursor_DASHopacity = 38,
  anon_sym_cursor_DASHstyle = 39,
  anon_sym_cursor_DASHstyle_DASHblink = 40,
  anon_sym_cursor_DASHtext = 41,
  anon_sym_custom_DASHshader = 42,
  anon_sym_custom_DASHshader_DASHanimation = 43,
  anon_sym_desktop_DASHnotifications = 44,
  anon_sym_enquiry_DASHresponse = 45,
  anon_sym_focus_DASHfollows_DASHmouse = 46,
  anon_sym_font_DASHcodepoint_DASHmap = 47,
  anon_sym_font_DASHfamily = 48,
  anon_sym_font_DASHfamily_DASHbold = 49,
  anon_sym_font_DASHfamily_DASHbold_DASHitalic = 50,
  anon_sym_font_DASHfamily_DASHitalic = 51,
  anon_sym_font_DASHfeature = 52,
  anon_sym_font_DASHsize = 53,
  anon_sym_font_DASHstyle = 54,
  anon_sym_font_DASHstyle_DASHbold = 55,
  anon_sym_font_DASHstyle_DASHbold_DASHitalic = 56,
  anon_sym_font_DASHstyle_DASHitalic = 57,
  anon_sym_font_DASHsynthetic_DASHstyle = 58,
  anon_sym_font_DASHthicken = 59,
  anon_sym_font_DASHvariation = 60,
  anon_sym_font_DASHvariation_DASHbold = 61,
  anon_sym_font_DASHvariation_DASHbold_DASHitalic = 62,
  anon_sym_font_DASHvariation_DASHitalic = 63,
  anon_sym_foreground = 64,
  anon_sym_freetype_DASHload_DASHflags = 65,
  anon_sym_fullscreen = 66,
  anon_sym_grapheme_DASHwidth_DASHmethod = 67,
  anon_sym_gtk_DASHadwaita = 68,
  anon_sym_gtk_DASHsingle_DASHinstance = 69,
  anon_sym_gtk_DASHtabs_DASHlocation = 70,
  anon_sym_gtk_DASHtitlebar = 71,
  anon_sym_gtk_DASHwide_DASHtabs = 72,
  anon_sym_image_DASHstorage_DASHlimit = 73,
  anon_sym_initial_DASHcommand = 74,
  anon_sym_initial_DASHwindow = 75,
  anon_sym_keybind = 76,
  anon_sym_link = 77,
  anon_sym_link_DASHurl = 78,
  anon_sym_linux_DASHcgroup = 79,
  anon_sym_linux_DASHcgroup_DASHhard_DASHfail = 80,
  anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit = 81,
  anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit = 82,
  anon_sym_macos_DASHauto_DASHsecure_DASHinput = 83,
  anon_sym_macos_DASHicon = 84,
  anon_sym_macos_DASHicon_DASHframe = 85,
  anon_sym_macos_DASHicon_DASHghost_DASHcolor = 86,
  anon_sym_macos_DASHicon_DASHscreen_DASHcolor = 87,
  anon_sym_macos_DASHnon_DASHnative_DASHfullscreen = 88,
  anon_sym_macos_DASHoption_DASHas_DASHalt = 89,
  anon_sym_macos_DASHsecure_DASHinput_DASHindication = 90,
  anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon = 91,
  anon_sym_macos_DASHtitlebar_DASHstyle = 92,
  anon_sym_macos_DASHwindow_DASHshadow = 93,
  anon_sym_minimum_DASHcontrast = 94,
  anon_sym_mouse_DASHhide_DASHwhile_DASHtyping = 95,
  anon_sym_mouse_DASHscroll_DASHmultiplier = 96,
  anon_sym_mouse_DASHshift_DASHcapture = 97,
  anon_sym_osc_DASHcolor_DASHreport_DASHformat = 98,
  anon_sym_palette = 99,
  anon_sym_quick_DASHterminal_DASHanimation_DASHduration = 100,
  anon_sym_quick_DASHterminal_DASHautohide = 101,
  anon_sym_quick_DASHterminal_DASHposition = 102,
  anon_sym_quick_DASHterminal_DASHscreen = 103,
  anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed = 104,
  anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay = 105,
  anon_sym_resize_DASHoverlay = 106,
  anon_sym_resize_DASHoverlay_DASHduration = 107,
  anon_sym_resize_DASHoverlay_DASHposition = 108,
  anon_sym_scrollback_DASHlimit = 109,
  anon_sym_selection_DASHbackground = 110,
  anon_sym_selection_DASHforeground = 111,
  anon_sym_selection_DASHinvert_DASHfg_DASHbg = 112,
  anon_sym_shell_DASHintegration = 113,
  anon_sym_shell_DASHintegration_DASHfeatures = 114,
  anon_sym_term = 115,
  anon_sym_theme = 116,
  anon_sym_title = 117,
  anon_sym_unfocused_DASHsplit_DASHfill = 118,
  anon_sym_unfocused_DASHsplit_DASHopacity = 119,
  anon_sym_vt_DASHkam_DASHallowed = 120,
  anon_sym_wait_DASHafter_DASHcommand = 121,
  anon_sym_window_DASHcolorspace = 122,
  anon_sym_window_DASHdecoration = 123,
  anon_sym_window_DASHheight = 124,
  anon_sym_window_DASHinherit_DASHfont_DASHsize = 125,
  anon_sym_window_DASHinherit_DASHworking_DASHdirectory = 126,
  anon_sym_window_DASHnew_DASHtab_DASHposition = 127,
  anon_sym_window_DASHpadding_DASHbalance = 128,
  anon_sym_window_DASHpadding_DASHcolor = 129,
  anon_sym_window_DASHpadding_DASHx = 130,
  anon_sym_window_DASHpadding_DASHy = 131,
  anon_sym_window_DASHsave_DASHstate = 132,
  anon_sym_window_DASHstep_DASHresize = 133,
  anon_sym_window_DASHtheme = 134,
  anon_sym_window_DASHtitle_DASHfont_DASHfamily = 135,
  anon_sym_window_DASHvsync = 136,
  anon_sym_window_DASHwidth = 137,
  anon_sym_working_DASHdirectory = 138,
  anon_sym_x11_DASHinstance_DASHname = 139,
  sym_invalid_keyword = 140,
  sym_value = 141,
  anon_sym_LF = 142,
  sym__whitespace = 143,
  sym_source = 144,
  sym__line = 145,
  sym_comment = 146,
  sym_assignment = 147,
  sym__keyword = 148,
  sym_keyword = 149,
  sym__newline = 150,
  aux_sym_source_repeat1 = 151,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime] = "abnormal-command-exit-runtime",
  [anon_sym_adjust_DASHbox_DASHthickness] = "adjust-box-thickness",
  [anon_sym_adjust_DASHcell_DASHheight] = "adjust-cell-height",
  [anon_sym_adjust_DASHcell_DASHwidth] = "adjust-cell-width",
  [anon_sym_adjust_DASHcursor_DASHheight] = "adjust-cursor-height",
  [anon_sym_adjust_DASHcursor_DASHthickness] = "adjust-cursor-thickness",
  [anon_sym_adjust_DASHfont_DASHbaseline] = "adjust-font-baseline",
  [anon_sym_adjust_DASHoverline_DASHposition] = "adjust-overline-position",
  [anon_sym_adjust_DASHoverline_DASHthickness] = "adjust-overline-thickness",
  [anon_sym_adjust_DASHstrikethrough_DASHposition] = "adjust-strikethrough-position",
  [anon_sym_adjust_DASHstrikethrough_DASHthickness] = "adjust-strikethrough-thickness",
  [anon_sym_adjust_DASHunderline_DASHposition] = "adjust-underline-position",
  [anon_sym_adjust_DASHunderline_DASHthickness] = "adjust-underline-thickness",
  [anon_sym_adw_DASHtoolbar_DASHstyle] = "adw-toolbar-style",
  [anon_sym_auto_DASHupdate] = "auto-update",
  [anon_sym_auto_DASHupdate_DASHchannel] = "auto-update-channel",
  [anon_sym_background] = "background",
  [anon_sym_background_DASHblur_DASHradius] = "background-blur-radius",
  [anon_sym_background_DASHopacity] = "background-opacity",
  [anon_sym_bold_DASHis_DASHbright] = "bold-is-bright",
  [anon_sym_class] = "class",
  [anon_sym_click_DASHrepeat_DASHinterval] = "click-repeat-interval",
  [anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe] = "clipboard-paste-bracketed-safe",
  [anon_sym_clipboard_DASHpaste_DASHprotection] = "clipboard-paste-protection",
  [anon_sym_clipboard_DASHread] = "clipboard-read",
  [anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces] = "clipboard-trim-trailing-spaces",
  [anon_sym_clipboard_DASHwrite] = "clipboard-write",
  [anon_sym_command] = "command",
  [anon_sym_config_DASHdefault_DASHfiles] = "config-default-files",
  [anon_sym_config_DASHfile] = "config-file",
  [anon_sym_confirm_DASHclose_DASHsurface] = "confirm-close-surface",
  [anon_sym_copy_DASHon_DASHselect] = "copy-on-select",
  [anon_sym_cursor_DASHclick_DASHto_DASHmove] = "cursor-click-to-move",
  [anon_sym_cursor_DASHcolor] = "cursor-color",
  [anon_sym_cursor_DASHinvert_DASHfg_DASHbg] = "cursor-invert-fg-bg",
  [anon_sym_cursor_DASHopacity] = "cursor-opacity",
  [anon_sym_cursor_DASHstyle] = "cursor-style",
  [anon_sym_cursor_DASHstyle_DASHblink] = "cursor-style-blink",
  [anon_sym_cursor_DASHtext] = "cursor-text",
  [anon_sym_custom_DASHshader] = "custom-shader",
  [anon_sym_custom_DASHshader_DASHanimation] = "custom-shader-animation",
  [anon_sym_desktop_DASHnotifications] = "desktop-notifications",
  [anon_sym_enquiry_DASHresponse] = "enquiry-response",
  [anon_sym_focus_DASHfollows_DASHmouse] = "focus-follows-mouse",
  [anon_sym_font_DASHcodepoint_DASHmap] = "font-codepoint-map",
  [anon_sym_font_DASHfamily] = "font-family",
  [anon_sym_font_DASHfamily_DASHbold] = "font-family-bold",
  [anon_sym_font_DASHfamily_DASHbold_DASHitalic] = "font-family-bold-italic",
  [anon_sym_font_DASHfamily_DASHitalic] = "font-family-italic",
  [anon_sym_font_DASHfeature] = "font-feature",
  [anon_sym_font_DASHsize] = "font-size",
  [anon_sym_font_DASHstyle] = "font-style",
  [anon_sym_font_DASHstyle_DASHbold] = "font-style-bold",
  [anon_sym_font_DASHstyle_DASHbold_DASHitalic] = "font-style-bold-italic",
  [anon_sym_font_DASHstyle_DASHitalic] = "font-style-italic",
  [anon_sym_font_DASHsynthetic_DASHstyle] = "font-synthetic-style",
  [anon_sym_font_DASHthicken] = "font-thicken",
  [anon_sym_font_DASHvariation] = "font-variation",
  [anon_sym_font_DASHvariation_DASHbold] = "font-variation-bold",
  [anon_sym_font_DASHvariation_DASHbold_DASHitalic] = "font-variation-bold-italic",
  [anon_sym_font_DASHvariation_DASHitalic] = "font-variation-italic",
  [anon_sym_foreground] = "foreground",
  [anon_sym_freetype_DASHload_DASHflags] = "freetype-load-flags",
  [anon_sym_fullscreen] = "fullscreen",
  [anon_sym_grapheme_DASHwidth_DASHmethod] = "grapheme-width-method",
  [anon_sym_gtk_DASHadwaita] = "gtk-adwaita",
  [anon_sym_gtk_DASHsingle_DASHinstance] = "gtk-single-instance",
  [anon_sym_gtk_DASHtabs_DASHlocation] = "gtk-tabs-location",
  [anon_sym_gtk_DASHtitlebar] = "gtk-titlebar",
  [anon_sym_gtk_DASHwide_DASHtabs] = "gtk-wide-tabs",
  [anon_sym_image_DASHstorage_DASHlimit] = "image-storage-limit",
  [anon_sym_initial_DASHcommand] = "initial-command",
  [anon_sym_initial_DASHwindow] = "initial-window",
  [anon_sym_keybind] = "keybind",
  [anon_sym_link] = "link",
  [anon_sym_link_DASHurl] = "link-url",
  [anon_sym_linux_DASHcgroup] = "linux-cgroup",
  [anon_sym_linux_DASHcgroup_DASHhard_DASHfail] = "linux-cgroup-hard-fail",
  [anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit] = "linux-cgroup-memory-limit",
  [anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit] = "linux-cgroup-processes-limit",
  [anon_sym_macos_DASHauto_DASHsecure_DASHinput] = "macos-auto-secure-input",
  [anon_sym_macos_DASHicon] = "macos-icon",
  [anon_sym_macos_DASHicon_DASHframe] = "macos-icon-frame",
  [anon_sym_macos_DASHicon_DASHghost_DASHcolor] = "macos-icon-ghost-color",
  [anon_sym_macos_DASHicon_DASHscreen_DASHcolor] = "macos-icon-screen-color",
  [anon_sym_macos_DASHnon_DASHnative_DASHfullscreen] = "macos-non-native-fullscreen",
  [anon_sym_macos_DASHoption_DASHas_DASHalt] = "macos-option-as-alt",
  [anon_sym_macos_DASHsecure_DASHinput_DASHindication] = "macos-secure-input-indication",
  [anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon] = "macos-titlebar-proxy-icon",
  [anon_sym_macos_DASHtitlebar_DASHstyle] = "macos-titlebar-style",
  [anon_sym_macos_DASHwindow_DASHshadow] = "macos-window-shadow",
  [anon_sym_minimum_DASHcontrast] = "minimum-contrast",
  [anon_sym_mouse_DASHhide_DASHwhile_DASHtyping] = "mouse-hide-while-typing",
  [anon_sym_mouse_DASHscroll_DASHmultiplier] = "mouse-scroll-multiplier",
  [anon_sym_mouse_DASHshift_DASHcapture] = "mouse-shift-capture",
  [anon_sym_osc_DASHcolor_DASHreport_DASHformat] = "osc-color-report-format",
  [anon_sym_palette] = "palette",
  [anon_sym_quick_DASHterminal_DASHanimation_DASHduration] = "quick-terminal-animation-duration",
  [anon_sym_quick_DASHterminal_DASHautohide] = "quick-terminal-autohide",
  [anon_sym_quick_DASHterminal_DASHposition] = "quick-terminal-position",
  [anon_sym_quick_DASHterminal_DASHscreen] = "quick-terminal-screen",
  [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed] = "quit-after-last-window-closed",
  [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay] = "quit-after-last-window-closed-delay",
  [anon_sym_resize_DASHoverlay] = "resize-overlay",
  [anon_sym_resize_DASHoverlay_DASHduration] = "resize-overlay-duration",
  [anon_sym_resize_DASHoverlay_DASHposition] = "resize-overlay-position",
  [anon_sym_scrollback_DASHlimit] = "scrollback-limit",
  [anon_sym_selection_DASHbackground] = "selection-background",
  [anon_sym_selection_DASHforeground] = "selection-foreground",
  [anon_sym_selection_DASHinvert_DASHfg_DASHbg] = "selection-invert-fg-bg",
  [anon_sym_shell_DASHintegration] = "shell-integration",
  [anon_sym_shell_DASHintegration_DASHfeatures] = "shell-integration-features",
  [anon_sym_term] = "term",
  [anon_sym_theme] = "theme",
  [anon_sym_title] = "title",
  [anon_sym_unfocused_DASHsplit_DASHfill] = "unfocused-split-fill",
  [anon_sym_unfocused_DASHsplit_DASHopacity] = "unfocused-split-opacity",
  [anon_sym_vt_DASHkam_DASHallowed] = "vt-kam-allowed",
  [anon_sym_wait_DASHafter_DASHcommand] = "wait-after-command",
  [anon_sym_window_DASHcolorspace] = "window-colorspace",
  [anon_sym_window_DASHdecoration] = "window-decoration",
  [anon_sym_window_DASHheight] = "window-height",
  [anon_sym_window_DASHinherit_DASHfont_DASHsize] = "window-inherit-font-size",
  [anon_sym_window_DASHinherit_DASHworking_DASHdirectory] = "window-inherit-working-directory",
  [anon_sym_window_DASHnew_DASHtab_DASHposition] = "window-new-tab-position",
  [anon_sym_window_DASHpadding_DASHbalance] = "window-padding-balance",
  [anon_sym_window_DASHpadding_DASHcolor] = "window-padding-color",
  [anon_sym_window_DASHpadding_DASHx] = "window-padding-x",
  [anon_sym_window_DASHpadding_DASHy] = "window-padding-y",
  [anon_sym_window_DASHsave_DASHstate] = "window-save-state",
  [anon_sym_window_DASHstep_DASHresize] = "window-step-resize",
  [anon_sym_window_DASHtheme] = "window-theme",
  [anon_sym_window_DASHtitle_DASHfont_DASHfamily] = "window-title-font-family",
  [anon_sym_window_DASHvsync] = "window-vsync",
  [anon_sym_window_DASHwidth] = "window-width",
  [anon_sym_working_DASHdirectory] = "working-directory",
  [anon_sym_x11_DASHinstance_DASHname] = "x11-instance-name",
  [sym_invalid_keyword] = "invalid_keyword",
  [sym_value] = "value",
  [anon_sym_LF] = "\n",
  [sym__whitespace] = "_whitespace",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym_assignment] = "assignment",
  [sym__keyword] = "_keyword",
  [sym_keyword] = "keyword",
  [sym__newline] = "_newline",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime] = anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime,
  [anon_sym_adjust_DASHbox_DASHthickness] = anon_sym_adjust_DASHbox_DASHthickness,
  [anon_sym_adjust_DASHcell_DASHheight] = anon_sym_adjust_DASHcell_DASHheight,
  [anon_sym_adjust_DASHcell_DASHwidth] = anon_sym_adjust_DASHcell_DASHwidth,
  [anon_sym_adjust_DASHcursor_DASHheight] = anon_sym_adjust_DASHcursor_DASHheight,
  [anon_sym_adjust_DASHcursor_DASHthickness] = anon_sym_adjust_DASHcursor_DASHthickness,
  [anon_sym_adjust_DASHfont_DASHbaseline] = anon_sym_adjust_DASHfont_DASHbaseline,
  [anon_sym_adjust_DASHoverline_DASHposition] = anon_sym_adjust_DASHoverline_DASHposition,
  [anon_sym_adjust_DASHoverline_DASHthickness] = anon_sym_adjust_DASHoverline_DASHthickness,
  [anon_sym_adjust_DASHstrikethrough_DASHposition] = anon_sym_adjust_DASHstrikethrough_DASHposition,
  [anon_sym_adjust_DASHstrikethrough_DASHthickness] = anon_sym_adjust_DASHstrikethrough_DASHthickness,
  [anon_sym_adjust_DASHunderline_DASHposition] = anon_sym_adjust_DASHunderline_DASHposition,
  [anon_sym_adjust_DASHunderline_DASHthickness] = anon_sym_adjust_DASHunderline_DASHthickness,
  [anon_sym_adw_DASHtoolbar_DASHstyle] = anon_sym_adw_DASHtoolbar_DASHstyle,
  [anon_sym_auto_DASHupdate] = anon_sym_auto_DASHupdate,
  [anon_sym_auto_DASHupdate_DASHchannel] = anon_sym_auto_DASHupdate_DASHchannel,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_background_DASHblur_DASHradius] = anon_sym_background_DASHblur_DASHradius,
  [anon_sym_background_DASHopacity] = anon_sym_background_DASHopacity,
  [anon_sym_bold_DASHis_DASHbright] = anon_sym_bold_DASHis_DASHbright,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_click_DASHrepeat_DASHinterval] = anon_sym_click_DASHrepeat_DASHinterval,
  [anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe] = anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe,
  [anon_sym_clipboard_DASHpaste_DASHprotection] = anon_sym_clipboard_DASHpaste_DASHprotection,
  [anon_sym_clipboard_DASHread] = anon_sym_clipboard_DASHread,
  [anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces] = anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces,
  [anon_sym_clipboard_DASHwrite] = anon_sym_clipboard_DASHwrite,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_config_DASHdefault_DASHfiles] = anon_sym_config_DASHdefault_DASHfiles,
  [anon_sym_config_DASHfile] = anon_sym_config_DASHfile,
  [anon_sym_confirm_DASHclose_DASHsurface] = anon_sym_confirm_DASHclose_DASHsurface,
  [anon_sym_copy_DASHon_DASHselect] = anon_sym_copy_DASHon_DASHselect,
  [anon_sym_cursor_DASHclick_DASHto_DASHmove] = anon_sym_cursor_DASHclick_DASHto_DASHmove,
  [anon_sym_cursor_DASHcolor] = anon_sym_cursor_DASHcolor,
  [anon_sym_cursor_DASHinvert_DASHfg_DASHbg] = anon_sym_cursor_DASHinvert_DASHfg_DASHbg,
  [anon_sym_cursor_DASHopacity] = anon_sym_cursor_DASHopacity,
  [anon_sym_cursor_DASHstyle] = anon_sym_cursor_DASHstyle,
  [anon_sym_cursor_DASHstyle_DASHblink] = anon_sym_cursor_DASHstyle_DASHblink,
  [anon_sym_cursor_DASHtext] = anon_sym_cursor_DASHtext,
  [anon_sym_custom_DASHshader] = anon_sym_custom_DASHshader,
  [anon_sym_custom_DASHshader_DASHanimation] = anon_sym_custom_DASHshader_DASHanimation,
  [anon_sym_desktop_DASHnotifications] = anon_sym_desktop_DASHnotifications,
  [anon_sym_enquiry_DASHresponse] = anon_sym_enquiry_DASHresponse,
  [anon_sym_focus_DASHfollows_DASHmouse] = anon_sym_focus_DASHfollows_DASHmouse,
  [anon_sym_font_DASHcodepoint_DASHmap] = anon_sym_font_DASHcodepoint_DASHmap,
  [anon_sym_font_DASHfamily] = anon_sym_font_DASHfamily,
  [anon_sym_font_DASHfamily_DASHbold] = anon_sym_font_DASHfamily_DASHbold,
  [anon_sym_font_DASHfamily_DASHbold_DASHitalic] = anon_sym_font_DASHfamily_DASHbold_DASHitalic,
  [anon_sym_font_DASHfamily_DASHitalic] = anon_sym_font_DASHfamily_DASHitalic,
  [anon_sym_font_DASHfeature] = anon_sym_font_DASHfeature,
  [anon_sym_font_DASHsize] = anon_sym_font_DASHsize,
  [anon_sym_font_DASHstyle] = anon_sym_font_DASHstyle,
  [anon_sym_font_DASHstyle_DASHbold] = anon_sym_font_DASHstyle_DASHbold,
  [anon_sym_font_DASHstyle_DASHbold_DASHitalic] = anon_sym_font_DASHstyle_DASHbold_DASHitalic,
  [anon_sym_font_DASHstyle_DASHitalic] = anon_sym_font_DASHstyle_DASHitalic,
  [anon_sym_font_DASHsynthetic_DASHstyle] = anon_sym_font_DASHsynthetic_DASHstyle,
  [anon_sym_font_DASHthicken] = anon_sym_font_DASHthicken,
  [anon_sym_font_DASHvariation] = anon_sym_font_DASHvariation,
  [anon_sym_font_DASHvariation_DASHbold] = anon_sym_font_DASHvariation_DASHbold,
  [anon_sym_font_DASHvariation_DASHbold_DASHitalic] = anon_sym_font_DASHvariation_DASHbold_DASHitalic,
  [anon_sym_font_DASHvariation_DASHitalic] = anon_sym_font_DASHvariation_DASHitalic,
  [anon_sym_foreground] = anon_sym_foreground,
  [anon_sym_freetype_DASHload_DASHflags] = anon_sym_freetype_DASHload_DASHflags,
  [anon_sym_fullscreen] = anon_sym_fullscreen,
  [anon_sym_grapheme_DASHwidth_DASHmethod] = anon_sym_grapheme_DASHwidth_DASHmethod,
  [anon_sym_gtk_DASHadwaita] = anon_sym_gtk_DASHadwaita,
  [anon_sym_gtk_DASHsingle_DASHinstance] = anon_sym_gtk_DASHsingle_DASHinstance,
  [anon_sym_gtk_DASHtabs_DASHlocation] = anon_sym_gtk_DASHtabs_DASHlocation,
  [anon_sym_gtk_DASHtitlebar] = anon_sym_gtk_DASHtitlebar,
  [anon_sym_gtk_DASHwide_DASHtabs] = anon_sym_gtk_DASHwide_DASHtabs,
  [anon_sym_image_DASHstorage_DASHlimit] = anon_sym_image_DASHstorage_DASHlimit,
  [anon_sym_initial_DASHcommand] = anon_sym_initial_DASHcommand,
  [anon_sym_initial_DASHwindow] = anon_sym_initial_DASHwindow,
  [anon_sym_keybind] = anon_sym_keybind,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_link_DASHurl] = anon_sym_link_DASHurl,
  [anon_sym_linux_DASHcgroup] = anon_sym_linux_DASHcgroup,
  [anon_sym_linux_DASHcgroup_DASHhard_DASHfail] = anon_sym_linux_DASHcgroup_DASHhard_DASHfail,
  [anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit] = anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit,
  [anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit] = anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit,
  [anon_sym_macos_DASHauto_DASHsecure_DASHinput] = anon_sym_macos_DASHauto_DASHsecure_DASHinput,
  [anon_sym_macos_DASHicon] = anon_sym_macos_DASHicon,
  [anon_sym_macos_DASHicon_DASHframe] = anon_sym_macos_DASHicon_DASHframe,
  [anon_sym_macos_DASHicon_DASHghost_DASHcolor] = anon_sym_macos_DASHicon_DASHghost_DASHcolor,
  [anon_sym_macos_DASHicon_DASHscreen_DASHcolor] = anon_sym_macos_DASHicon_DASHscreen_DASHcolor,
  [anon_sym_macos_DASHnon_DASHnative_DASHfullscreen] = anon_sym_macos_DASHnon_DASHnative_DASHfullscreen,
  [anon_sym_macos_DASHoption_DASHas_DASHalt] = anon_sym_macos_DASHoption_DASHas_DASHalt,
  [anon_sym_macos_DASHsecure_DASHinput_DASHindication] = anon_sym_macos_DASHsecure_DASHinput_DASHindication,
  [anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon] = anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon,
  [anon_sym_macos_DASHtitlebar_DASHstyle] = anon_sym_macos_DASHtitlebar_DASHstyle,
  [anon_sym_macos_DASHwindow_DASHshadow] = anon_sym_macos_DASHwindow_DASHshadow,
  [anon_sym_minimum_DASHcontrast] = anon_sym_minimum_DASHcontrast,
  [anon_sym_mouse_DASHhide_DASHwhile_DASHtyping] = anon_sym_mouse_DASHhide_DASHwhile_DASHtyping,
  [anon_sym_mouse_DASHscroll_DASHmultiplier] = anon_sym_mouse_DASHscroll_DASHmultiplier,
  [anon_sym_mouse_DASHshift_DASHcapture] = anon_sym_mouse_DASHshift_DASHcapture,
  [anon_sym_osc_DASHcolor_DASHreport_DASHformat] = anon_sym_osc_DASHcolor_DASHreport_DASHformat,
  [anon_sym_palette] = anon_sym_palette,
  [anon_sym_quick_DASHterminal_DASHanimation_DASHduration] = anon_sym_quick_DASHterminal_DASHanimation_DASHduration,
  [anon_sym_quick_DASHterminal_DASHautohide] = anon_sym_quick_DASHterminal_DASHautohide,
  [anon_sym_quick_DASHterminal_DASHposition] = anon_sym_quick_DASHterminal_DASHposition,
  [anon_sym_quick_DASHterminal_DASHscreen] = anon_sym_quick_DASHterminal_DASHscreen,
  [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed] = anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed,
  [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay] = anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay,
  [anon_sym_resize_DASHoverlay] = anon_sym_resize_DASHoverlay,
  [anon_sym_resize_DASHoverlay_DASHduration] = anon_sym_resize_DASHoverlay_DASHduration,
  [anon_sym_resize_DASHoverlay_DASHposition] = anon_sym_resize_DASHoverlay_DASHposition,
  [anon_sym_scrollback_DASHlimit] = anon_sym_scrollback_DASHlimit,
  [anon_sym_selection_DASHbackground] = anon_sym_selection_DASHbackground,
  [anon_sym_selection_DASHforeground] = anon_sym_selection_DASHforeground,
  [anon_sym_selection_DASHinvert_DASHfg_DASHbg] = anon_sym_selection_DASHinvert_DASHfg_DASHbg,
  [anon_sym_shell_DASHintegration] = anon_sym_shell_DASHintegration,
  [anon_sym_shell_DASHintegration_DASHfeatures] = anon_sym_shell_DASHintegration_DASHfeatures,
  [anon_sym_term] = anon_sym_term,
  [anon_sym_theme] = anon_sym_theme,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_unfocused_DASHsplit_DASHfill] = anon_sym_unfocused_DASHsplit_DASHfill,
  [anon_sym_unfocused_DASHsplit_DASHopacity] = anon_sym_unfocused_DASHsplit_DASHopacity,
  [anon_sym_vt_DASHkam_DASHallowed] = anon_sym_vt_DASHkam_DASHallowed,
  [anon_sym_wait_DASHafter_DASHcommand] = anon_sym_wait_DASHafter_DASHcommand,
  [anon_sym_window_DASHcolorspace] = anon_sym_window_DASHcolorspace,
  [anon_sym_window_DASHdecoration] = anon_sym_window_DASHdecoration,
  [anon_sym_window_DASHheight] = anon_sym_window_DASHheight,
  [anon_sym_window_DASHinherit_DASHfont_DASHsize] = anon_sym_window_DASHinherit_DASHfont_DASHsize,
  [anon_sym_window_DASHinherit_DASHworking_DASHdirectory] = anon_sym_window_DASHinherit_DASHworking_DASHdirectory,
  [anon_sym_window_DASHnew_DASHtab_DASHposition] = anon_sym_window_DASHnew_DASHtab_DASHposition,
  [anon_sym_window_DASHpadding_DASHbalance] = anon_sym_window_DASHpadding_DASHbalance,
  [anon_sym_window_DASHpadding_DASHcolor] = anon_sym_window_DASHpadding_DASHcolor,
  [anon_sym_window_DASHpadding_DASHx] = anon_sym_window_DASHpadding_DASHx,
  [anon_sym_window_DASHpadding_DASHy] = anon_sym_window_DASHpadding_DASHy,
  [anon_sym_window_DASHsave_DASHstate] = anon_sym_window_DASHsave_DASHstate,
  [anon_sym_window_DASHstep_DASHresize] = anon_sym_window_DASHstep_DASHresize,
  [anon_sym_window_DASHtheme] = anon_sym_window_DASHtheme,
  [anon_sym_window_DASHtitle_DASHfont_DASHfamily] = anon_sym_window_DASHtitle_DASHfont_DASHfamily,
  [anon_sym_window_DASHvsync] = anon_sym_window_DASHvsync,
  [anon_sym_window_DASHwidth] = anon_sym_window_DASHwidth,
  [anon_sym_working_DASHdirectory] = anon_sym_working_DASHdirectory,
  [anon_sym_x11_DASHinstance_DASHname] = anon_sym_x11_DASHinstance_DASHname,
  [sym_invalid_keyword] = sym_invalid_keyword,
  [sym_value] = sym_value,
  [anon_sym_LF] = anon_sym_LF,
  [sym__whitespace] = sym__whitespace,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym_assignment] = sym_assignment,
  [sym__keyword] = sym__keyword,
  [sym_keyword] = sym_keyword,
  [sym__newline] = sym__newline,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHbox_DASHthickness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHcell_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHcell_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHcursor_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHcursor_DASHthickness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHfont_DASHbaseline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHoverline_DASHposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHoverline_DASHthickness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHstrikethrough_DASHposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHstrikethrough_DASHthickness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHunderline_DASHposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_DASHunderline_DASHthickness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adw_DASHtoolbar_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHupdate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHupdate_DASHchannel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background_DASHblur_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background_DASHopacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold_DASHis_DASHbright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_click_DASHrepeat_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clipboard_DASHpaste_DASHprotection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clipboard_DASHread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clipboard_DASHwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_DASHdefault_DASHfiles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_confirm_DASHclose_DASHsurface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy_DASHon_DASHselect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHclick_DASHto_DASHmove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHinvert_DASHfg_DASHbg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHopacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHstyle_DASHblink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_DASHtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom_DASHshader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom_DASHshader_DASHanimation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desktop_DASHnotifications] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enquiry_DASHresponse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_DASHfollows_DASHmouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcodepoint_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHfamily] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHfamily_DASHbold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHfamily_DASHbold_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHfamily_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHfeature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHstyle_DASHbold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHstyle_DASHbold_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHstyle_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHsynthetic_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHthicken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHvariation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHvariation_DASHbold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHvariation_DASHbold_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHvariation_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freetype_DASHload_DASHflags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grapheme_DASHwidth_DASHmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gtk_DASHadwaita] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gtk_DASHsingle_DASHinstance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gtk_DASHtabs_DASHlocation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gtk_DASHtitlebar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gtk_DASHwide_DASHtabs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image_DASHstorage_DASHlimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initial_DASHcommand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initial_DASHwindow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keybind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux_DASHcgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux_DASHcgroup_DASHhard_DASHfail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHauto_DASHsecure_DASHinput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHicon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHicon_DASHframe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHicon_DASHghost_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHicon_DASHscreen_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHnon_DASHnative_DASHfullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHoption_DASHas_DASHalt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHsecure_DASHinput_DASHindication] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHtitlebar_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macos_DASHwindow_DASHshadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minimum_DASHcontrast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_DASHhide_DASHwhile_DASHtyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_DASHscroll_DASHmultiplier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_DASHshift_DASHcapture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_osc_DASHcolor_DASHreport_DASHformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_palette] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quick_DASHterminal_DASHanimation_DASHduration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quick_DASHterminal_DASHautohide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quick_DASHterminal_DASHposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quick_DASHterminal_DASHscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_DASHoverlay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_DASHoverlay_DASHduration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_DASHoverlay_DASHposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollback_DASHlimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selection_DASHbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selection_DASHforeground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selection_DASHinvert_DASHfg_DASHbg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell_DASHintegration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell_DASHintegration_DASHfeatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_term] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unfocused_DASHsplit_DASHfill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unfocused_DASHsplit_DASHopacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vt_DASHkam_DASHallowed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait_DASHafter_DASHcommand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHcolorspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHdecoration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHinherit_DASHfont_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHinherit_DASHworking_DASHdirectory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHnew_DASHtab_DASHposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHpadding_DASHbalance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHpadding_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHpadding_DASHx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHpadding_DASHy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHsave_DASHstate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHstep_DASHresize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHtheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHtitle_DASHfont_DASHfamily] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHvsync] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_working_DASHdirectory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x11_DASHinstance_DASHname] = {
    .visible = true,
    .named = false,
  },
  [sym_invalid_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') ADVANCE(1579);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(862);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == 'f') ADVANCE(1079);
      if (lookahead == 'g') ADVANCE(1223);
      if (lookahead == 'i') ADVANCE(950);
      if (lookahead == 'k') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(1313);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 'q') ADVANCE(1493);
      if (lookahead == 'r') ADVANCE(531);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(988);
      if (lookahead == 'v') ADVANCE(1372);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1578);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_adjust_DASHbox_DASHthickness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_adjust_DASHcell_DASHheight);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_adjust_DASHcell_DASHwidth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_adjust_DASHcursor_DASHheight);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_adjust_DASHcursor_DASHthickness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_adjust_DASHfont_DASHbaseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_adjust_DASHoverline_DASHposition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_adjust_DASHoverline_DASHthickness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_adjust_DASHstrikethrough_DASHposition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_adjust_DASHstrikethrough_DASHthickness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_adjust_DASHunderline_DASHposition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_adjust_DASHunderline_DASHthickness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_adw_DASHtoolbar_DASHstyle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_auto_DASHupdate);
      if (lookahead == '-') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_auto_DASHupdate_DASHchannel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_background);
      if (lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_background_DASHblur_DASHradius);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_background_DASHopacity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_bold_DASHis_DASHbright);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_click_DASHrepeat_DASHinterval);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_clipboard_DASHpaste_DASHprotection);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_clipboard_DASHread);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_clipboard_DASHwrite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_config_DASHdefault_DASHfiles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_config_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_confirm_DASHclose_DASHsurface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_copy_DASHon_DASHselect);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_cursor_DASHclick_DASHto_DASHmove);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_cursor_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_cursor_DASHinvert_DASHfg_DASHbg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_cursor_DASHopacity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_cursor_DASHstyle);
      if (lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_cursor_DASHstyle_DASHblink);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_cursor_DASHtext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_custom_DASHshader);
      if (lookahead == '-') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_custom_DASHshader_DASHanimation);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_desktop_DASHnotifications);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_enquiry_DASHresponse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_focus_DASHfollows_DASHmouse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_font_DASHcodepoint_DASHmap);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_font_DASHfamily);
      if (lookahead == '-') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_font_DASHfamily_DASHbold);
      if (lookahead == '-') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_font_DASHfamily_DASHbold_DASHitalic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_font_DASHfamily_DASHitalic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_font_DASHfeature);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_font_DASHstyle);
      if (lookahead == '-') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_font_DASHstyle_DASHbold);
      if (lookahead == '-') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_font_DASHstyle_DASHbold_DASHitalic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_font_DASHstyle_DASHitalic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_font_DASHsynthetic_DASHstyle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_font_DASHthicken);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_font_DASHvariation);
      if (lookahead == '-') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_font_DASHvariation_DASHbold);
      if (lookahead == '-') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_font_DASHvariation_DASHbold_DASHitalic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_font_DASHvariation_DASHitalic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_foreground);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_freetype_DASHload_DASHflags);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_grapheme_DASHwidth_DASHmethod);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_gtk_DASHadwaita);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_gtk_DASHsingle_DASHinstance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_gtk_DASHtabs_DASHlocation);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_gtk_DASHtitlebar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_gtk_DASHwide_DASHtabs);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_image_DASHstorage_DASHlimit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_initial_DASHcommand);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_initial_DASHwindow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_keybind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '-') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_link_DASHurl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_linux_DASHcgroup);
      if (lookahead == '-') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_linux_DASHcgroup_DASHhard_DASHfail);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_macos_DASHauto_DASHsecure_DASHinput);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_macos_DASHicon);
      if (lookahead == '-') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_macos_DASHicon_DASHframe);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_macos_DASHicon_DASHghost_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_macos_DASHicon_DASHscreen_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_macos_DASHnon_DASHnative_DASHfullscreen);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_macos_DASHoption_DASHas_DASHalt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_macos_DASHsecure_DASHinput_DASHindication);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_macos_DASHtitlebar_DASHstyle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_macos_DASHwindow_DASHshadow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_minimum_DASHcontrast);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_mouse_DASHhide_DASHwhile_DASHtyping);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mouse_DASHscroll_DASHmultiplier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_mouse_DASHshift_DASHcapture);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_osc_DASHcolor_DASHreport_DASHformat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_palette);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_quick_DASHterminal_DASHanimation_DASHduration);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_quick_DASHterminal_DASHautohide);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_quick_DASHterminal_DASHposition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_quick_DASHterminal_DASHscreen);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed);
      if (lookahead == '-') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_resize_DASHoverlay);
      if (lookahead == '-') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_resize_DASHoverlay_DASHduration);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_resize_DASHoverlay_DASHposition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_scrollback_DASHlimit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_selection_DASHbackground);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_selection_DASHforeground);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_selection_DASHinvert_DASHfg_DASHbg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_shell_DASHintegration);
      if (lookahead == '-') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_shell_DASHintegration_DASHfeatures);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_term);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_theme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_unfocused_DASHsplit_DASHfill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_unfocused_DASHsplit_DASHopacity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_vt_DASHkam_DASHallowed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_wait_DASHafter_DASHcommand);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_window_DASHcolorspace);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_window_DASHdecoration);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_window_DASHheight);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_window_DASHinherit_DASHfont_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_window_DASHinherit_DASHworking_DASHdirectory);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_window_DASHnew_DASHtab_DASHposition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_window_DASHpadding_DASHbalance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_window_DASHpadding_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_window_DASHpadding_DASHx);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_window_DASHpadding_DASHy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_window_DASHsave_DASHstate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_window_DASHstep_DASHresize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_window_DASHtheme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_window_DASHtitle_DASHfont_DASHfamily);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_window_DASHvsync);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_window_DASHwidth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_working_DASHdirectory);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_x11_DASHinstance_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '1') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == 'p') ADVANCE(1105);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead == 'o') ADVANCE(1494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == 'w') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead == 'i') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1319);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(1143);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead == 'w') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1528);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(1491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(989);
      if (lookahead == 'd') ADVANCE(840);
      if (lookahead == 'u') ADVANCE(1387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(917);
      if (lookahead == 'o') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1135);
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 'f') ADVANCE(1104);
      if (lookahead == 'o') ADVANCE(1525);
      if (lookahead == 's') ADVANCE(1438);
      if (lookahead == 'u') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1134);
      if (lookahead == 'i') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1285);
      if (lookahead == 'p') ADVANCE(1248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == 'f') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(1172);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == 'y') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(1447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'b') ADVANCE(1152);
      if (lookahead == 'i') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1226);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead == 'h') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(937);
      if (lookahead == 'i') ADVANCE(1043);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead == 's') ADVANCE(1458);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1138);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == 'v') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(846);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1095);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(847);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1501);
      if (lookahead == 'n') ADVANCE(1397);
      if (lookahead == 'r') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_invalid_keyword);
      ADVANCE_MAP(
        'c', 1170,
        'd', 542,
        'h', 553,
        'i', 1048,
        'n', 586,
        'p', 281,
        's', 312,
        't', 697,
        'v', 1316,
        'w', 726,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1289);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'c') ADVANCE(1521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1522);
      if (lookahead == 'p') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(1523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'd') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(1442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == 'u') ADVANCE(1284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'e') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1243);
      if (lookahead == 'g') ADVANCE(696);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(786);
      if (lookahead == 'o') ADVANCE(1208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead == 'w') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead == 'w') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(596);
      if (lookahead == 'i') ADVANCE(1452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(1245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(804);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(605);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(545);
      if (lookahead == 'p') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1573);
      if (lookahead == 't') ADVANCE(1566);
      if (lookahead == 'y') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'i') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'j') ADVANCE(1495);
      if (lookahead == 'w') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(1545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(1051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(1402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(1060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'k') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(948);
      if (lookahead == 'u') ADVANCE(1227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(1366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(951);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(1561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(1496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(1505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead == 'u') ADVANCE(1417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(1532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'o') ADVANCE(1299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 't') ADVANCE(1242);
      if (lookahead == 'w') ADVANCE(1275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1247);
      if (lookahead == 's') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1182);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1183);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'p') ADVANCE(1184);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'q') ADVANCE(1497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 't') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1342);
      if (lookahead == 's') ADVANCE(1390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(1160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(1472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(1570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 't') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'v') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(1337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'w') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'x') ADVANCE(1373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'x') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'x') ADVANCE(1565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'x') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(1200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'z') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1576);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'z') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1576);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'z') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1576);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == 'z') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1576);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_invalid_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\r') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1578);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1578);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\r') ADVANCE(1580);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1581);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1581);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym__whitespace);
      if (eof) ADVANCE(2);
      if (lookahead == '\r') ADVANCE(1580);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1581);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1582},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1582},
  [4] = {.lex_state = 1582},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1582},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1582},
  [10] = {.lex_state = 1582},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1582},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime] = ACTIONS(1),
    [anon_sym_adjust_DASHbox_DASHthickness] = ACTIONS(1),
    [anon_sym_adjust_DASHcell_DASHheight] = ACTIONS(1),
    [anon_sym_adjust_DASHcell_DASHwidth] = ACTIONS(1),
    [anon_sym_adjust_DASHcursor_DASHheight] = ACTIONS(1),
    [anon_sym_adjust_DASHcursor_DASHthickness] = ACTIONS(1),
    [anon_sym_adjust_DASHfont_DASHbaseline] = ACTIONS(1),
    [anon_sym_adjust_DASHoverline_DASHposition] = ACTIONS(1),
    [anon_sym_adjust_DASHoverline_DASHthickness] = ACTIONS(1),
    [anon_sym_adjust_DASHstrikethrough_DASHposition] = ACTIONS(1),
    [anon_sym_adjust_DASHstrikethrough_DASHthickness] = ACTIONS(1),
    [anon_sym_adjust_DASHunderline_DASHposition] = ACTIONS(1),
    [anon_sym_adjust_DASHunderline_DASHthickness] = ACTIONS(1),
    [anon_sym_adw_DASHtoolbar_DASHstyle] = ACTIONS(1),
    [anon_sym_auto_DASHupdate] = ACTIONS(1),
    [anon_sym_auto_DASHupdate_DASHchannel] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_background_DASHblur_DASHradius] = ACTIONS(1),
    [anon_sym_background_DASHopacity] = ACTIONS(1),
    [anon_sym_bold_DASHis_DASHbright] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_click_DASHrepeat_DASHinterval] = ACTIONS(1),
    [anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe] = ACTIONS(1),
    [anon_sym_clipboard_DASHpaste_DASHprotection] = ACTIONS(1),
    [anon_sym_clipboard_DASHread] = ACTIONS(1),
    [anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces] = ACTIONS(1),
    [anon_sym_clipboard_DASHwrite] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_config_DASHdefault_DASHfiles] = ACTIONS(1),
    [anon_sym_config_DASHfile] = ACTIONS(1),
    [anon_sym_confirm_DASHclose_DASHsurface] = ACTIONS(1),
    [anon_sym_copy_DASHon_DASHselect] = ACTIONS(1),
    [anon_sym_cursor_DASHclick_DASHto_DASHmove] = ACTIONS(1),
    [anon_sym_cursor_DASHcolor] = ACTIONS(1),
    [anon_sym_cursor_DASHinvert_DASHfg_DASHbg] = ACTIONS(1),
    [anon_sym_cursor_DASHopacity] = ACTIONS(1),
    [anon_sym_cursor_DASHstyle] = ACTIONS(1),
    [anon_sym_cursor_DASHstyle_DASHblink] = ACTIONS(1),
    [anon_sym_cursor_DASHtext] = ACTIONS(1),
    [anon_sym_custom_DASHshader] = ACTIONS(1),
    [anon_sym_custom_DASHshader_DASHanimation] = ACTIONS(1),
    [anon_sym_desktop_DASHnotifications] = ACTIONS(1),
    [anon_sym_enquiry_DASHresponse] = ACTIONS(1),
    [anon_sym_focus_DASHfollows_DASHmouse] = ACTIONS(1),
    [anon_sym_font_DASHcodepoint_DASHmap] = ACTIONS(1),
    [anon_sym_font_DASHfamily] = ACTIONS(1),
    [anon_sym_font_DASHfamily_DASHbold] = ACTIONS(1),
    [anon_sym_font_DASHfamily_DASHbold_DASHitalic] = ACTIONS(1),
    [anon_sym_font_DASHfamily_DASHitalic] = ACTIONS(1),
    [anon_sym_font_DASHfeature] = ACTIONS(1),
    [anon_sym_font_DASHsize] = ACTIONS(1),
    [anon_sym_font_DASHstyle] = ACTIONS(1),
    [anon_sym_font_DASHstyle_DASHbold] = ACTIONS(1),
    [anon_sym_font_DASHstyle_DASHbold_DASHitalic] = ACTIONS(1),
    [anon_sym_font_DASHstyle_DASHitalic] = ACTIONS(1),
    [anon_sym_font_DASHsynthetic_DASHstyle] = ACTIONS(1),
    [anon_sym_font_DASHthicken] = ACTIONS(1),
    [anon_sym_font_DASHvariation] = ACTIONS(1),
    [anon_sym_font_DASHvariation_DASHbold] = ACTIONS(1),
    [anon_sym_font_DASHvariation_DASHbold_DASHitalic] = ACTIONS(1),
    [anon_sym_font_DASHvariation_DASHitalic] = ACTIONS(1),
    [anon_sym_foreground] = ACTIONS(1),
    [anon_sym_freetype_DASHload_DASHflags] = ACTIONS(1),
    [anon_sym_fullscreen] = ACTIONS(1),
    [anon_sym_grapheme_DASHwidth_DASHmethod] = ACTIONS(1),
    [anon_sym_gtk_DASHadwaita] = ACTIONS(1),
    [anon_sym_gtk_DASHsingle_DASHinstance] = ACTIONS(1),
    [anon_sym_gtk_DASHtabs_DASHlocation] = ACTIONS(1),
    [anon_sym_gtk_DASHtitlebar] = ACTIONS(1),
    [anon_sym_gtk_DASHwide_DASHtabs] = ACTIONS(1),
    [anon_sym_image_DASHstorage_DASHlimit] = ACTIONS(1),
    [anon_sym_initial_DASHcommand] = ACTIONS(1),
    [anon_sym_initial_DASHwindow] = ACTIONS(1),
    [anon_sym_keybind] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_link_DASHurl] = ACTIONS(1),
    [anon_sym_linux_DASHcgroup] = ACTIONS(1),
    [anon_sym_linux_DASHcgroup_DASHhard_DASHfail] = ACTIONS(1),
    [anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit] = ACTIONS(1),
    [anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit] = ACTIONS(1),
    [anon_sym_macos_DASHauto_DASHsecure_DASHinput] = ACTIONS(1),
    [anon_sym_macos_DASHicon] = ACTIONS(1),
    [anon_sym_macos_DASHicon_DASHframe] = ACTIONS(1),
    [anon_sym_macos_DASHicon_DASHghost_DASHcolor] = ACTIONS(1),
    [anon_sym_macos_DASHicon_DASHscreen_DASHcolor] = ACTIONS(1),
    [anon_sym_macos_DASHnon_DASHnative_DASHfullscreen] = ACTIONS(1),
    [anon_sym_macos_DASHoption_DASHas_DASHalt] = ACTIONS(1),
    [anon_sym_macos_DASHsecure_DASHinput_DASHindication] = ACTIONS(1),
    [anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon] = ACTIONS(1),
    [anon_sym_macos_DASHtitlebar_DASHstyle] = ACTIONS(1),
    [anon_sym_macos_DASHwindow_DASHshadow] = ACTIONS(1),
    [anon_sym_minimum_DASHcontrast] = ACTIONS(1),
    [anon_sym_mouse_DASHhide_DASHwhile_DASHtyping] = ACTIONS(1),
    [anon_sym_mouse_DASHscroll_DASHmultiplier] = ACTIONS(1),
    [anon_sym_mouse_DASHshift_DASHcapture] = ACTIONS(1),
    [anon_sym_osc_DASHcolor_DASHreport_DASHformat] = ACTIONS(1),
    [anon_sym_palette] = ACTIONS(1),
    [anon_sym_quick_DASHterminal_DASHanimation_DASHduration] = ACTIONS(1),
    [anon_sym_quick_DASHterminal_DASHautohide] = ACTIONS(1),
    [anon_sym_quick_DASHterminal_DASHposition] = ACTIONS(1),
    [anon_sym_quick_DASHterminal_DASHscreen] = ACTIONS(1),
    [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed] = ACTIONS(1),
    [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay] = ACTIONS(1),
    [anon_sym_resize_DASHoverlay] = ACTIONS(1),
    [anon_sym_resize_DASHoverlay_DASHduration] = ACTIONS(1),
    [anon_sym_resize_DASHoverlay_DASHposition] = ACTIONS(1),
    [anon_sym_scrollback_DASHlimit] = ACTIONS(1),
    [anon_sym_selection_DASHbackground] = ACTIONS(1),
    [anon_sym_selection_DASHforeground] = ACTIONS(1),
    [anon_sym_selection_DASHinvert_DASHfg_DASHbg] = ACTIONS(1),
    [anon_sym_shell_DASHintegration] = ACTIONS(1),
    [anon_sym_shell_DASHintegration_DASHfeatures] = ACTIONS(1),
    [anon_sym_term] = ACTIONS(1),
    [anon_sym_theme] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_unfocused_DASHsplit_DASHfill] = ACTIONS(1),
    [anon_sym_unfocused_DASHsplit_DASHopacity] = ACTIONS(1),
    [anon_sym_vt_DASHkam_DASHallowed] = ACTIONS(1),
    [anon_sym_wait_DASHafter_DASHcommand] = ACTIONS(1),
    [anon_sym_window_DASHcolorspace] = ACTIONS(1),
    [anon_sym_window_DASHdecoration] = ACTIONS(1),
    [anon_sym_window_DASHheight] = ACTIONS(1),
    [anon_sym_window_DASHinherit_DASHfont_DASHsize] = ACTIONS(1),
    [anon_sym_window_DASHinherit_DASHworking_DASHdirectory] = ACTIONS(1),
    [anon_sym_window_DASHnew_DASHtab_DASHposition] = ACTIONS(1),
    [anon_sym_window_DASHpadding_DASHbalance] = ACTIONS(1),
    [anon_sym_window_DASHpadding_DASHcolor] = ACTIONS(1),
    [anon_sym_window_DASHpadding_DASHx] = ACTIONS(1),
    [anon_sym_window_DASHpadding_DASHy] = ACTIONS(1),
    [anon_sym_window_DASHsave_DASHstate] = ACTIONS(1),
    [anon_sym_window_DASHstep_DASHresize] = ACTIONS(1),
    [anon_sym_window_DASHtheme] = ACTIONS(1),
    [anon_sym_window_DASHtitle_DASHfont_DASHfamily] = ACTIONS(1),
    [anon_sym_window_DASHvsync] = ACTIONS(1),
    [anon_sym_window_DASHwidth] = ACTIONS(1),
    [anon_sym_working_DASHdirectory] = ACTIONS(1),
    [anon_sym_x11_DASHinstance_DASHname] = ACTIONS(1),
    [sym_invalid_keyword] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(7),
    [sym__line] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
  },
  [2] = {
    [sym_comment] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym__keyword] = STATE(10),
    [sym_keyword] = STATE(10),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_abnormal_DASHcommand_DASHexit_DASHruntime] = ACTIONS(9),
    [anon_sym_adjust_DASHbox_DASHthickness] = ACTIONS(9),
    [anon_sym_adjust_DASHcell_DASHheight] = ACTIONS(9),
    [anon_sym_adjust_DASHcell_DASHwidth] = ACTIONS(9),
    [anon_sym_adjust_DASHcursor_DASHheight] = ACTIONS(9),
    [anon_sym_adjust_DASHcursor_DASHthickness] = ACTIONS(9),
    [anon_sym_adjust_DASHfont_DASHbaseline] = ACTIONS(9),
    [anon_sym_adjust_DASHoverline_DASHposition] = ACTIONS(9),
    [anon_sym_adjust_DASHoverline_DASHthickness] = ACTIONS(9),
    [anon_sym_adjust_DASHstrikethrough_DASHposition] = ACTIONS(9),
    [anon_sym_adjust_DASHstrikethrough_DASHthickness] = ACTIONS(9),
    [anon_sym_adjust_DASHunderline_DASHposition] = ACTIONS(9),
    [anon_sym_adjust_DASHunderline_DASHthickness] = ACTIONS(9),
    [anon_sym_adw_DASHtoolbar_DASHstyle] = ACTIONS(9),
    [anon_sym_auto_DASHupdate] = ACTIONS(9),
    [anon_sym_auto_DASHupdate_DASHchannel] = ACTIONS(9),
    [anon_sym_background] = ACTIONS(9),
    [anon_sym_background_DASHblur_DASHradius] = ACTIONS(9),
    [anon_sym_background_DASHopacity] = ACTIONS(9),
    [anon_sym_bold_DASHis_DASHbright] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_click_DASHrepeat_DASHinterval] = ACTIONS(9),
    [anon_sym_clipboard_DASHpaste_DASHbracketed_DASHsafe] = ACTIONS(9),
    [anon_sym_clipboard_DASHpaste_DASHprotection] = ACTIONS(9),
    [anon_sym_clipboard_DASHread] = ACTIONS(9),
    [anon_sym_clipboard_DASHtrim_DASHtrailing_DASHspaces] = ACTIONS(9),
    [anon_sym_clipboard_DASHwrite] = ACTIONS(9),
    [anon_sym_command] = ACTIONS(9),
    [anon_sym_config_DASHdefault_DASHfiles] = ACTIONS(9),
    [anon_sym_config_DASHfile] = ACTIONS(9),
    [anon_sym_confirm_DASHclose_DASHsurface] = ACTIONS(9),
    [anon_sym_copy_DASHon_DASHselect] = ACTIONS(9),
    [anon_sym_cursor_DASHclick_DASHto_DASHmove] = ACTIONS(9),
    [anon_sym_cursor_DASHcolor] = ACTIONS(9),
    [anon_sym_cursor_DASHinvert_DASHfg_DASHbg] = ACTIONS(9),
    [anon_sym_cursor_DASHopacity] = ACTIONS(9),
    [anon_sym_cursor_DASHstyle] = ACTIONS(9),
    [anon_sym_cursor_DASHstyle_DASHblink] = ACTIONS(9),
    [anon_sym_cursor_DASHtext] = ACTIONS(9),
    [anon_sym_custom_DASHshader] = ACTIONS(9),
    [anon_sym_custom_DASHshader_DASHanimation] = ACTIONS(9),
    [anon_sym_desktop_DASHnotifications] = ACTIONS(9),
    [anon_sym_enquiry_DASHresponse] = ACTIONS(9),
    [anon_sym_focus_DASHfollows_DASHmouse] = ACTIONS(9),
    [anon_sym_font_DASHcodepoint_DASHmap] = ACTIONS(9),
    [anon_sym_font_DASHfamily] = ACTIONS(9),
    [anon_sym_font_DASHfamily_DASHbold] = ACTIONS(9),
    [anon_sym_font_DASHfamily_DASHbold_DASHitalic] = ACTIONS(9),
    [anon_sym_font_DASHfamily_DASHitalic] = ACTIONS(9),
    [anon_sym_font_DASHfeature] = ACTIONS(9),
    [anon_sym_font_DASHsize] = ACTIONS(9),
    [anon_sym_font_DASHstyle] = ACTIONS(9),
    [anon_sym_font_DASHstyle_DASHbold] = ACTIONS(9),
    [anon_sym_font_DASHstyle_DASHbold_DASHitalic] = ACTIONS(9),
    [anon_sym_font_DASHstyle_DASHitalic] = ACTIONS(9),
    [anon_sym_font_DASHsynthetic_DASHstyle] = ACTIONS(9),
    [anon_sym_font_DASHthicken] = ACTIONS(9),
    [anon_sym_font_DASHvariation] = ACTIONS(9),
    [anon_sym_font_DASHvariation_DASHbold] = ACTIONS(9),
    [anon_sym_font_DASHvariation_DASHbold_DASHitalic] = ACTIONS(9),
    [anon_sym_font_DASHvariation_DASHitalic] = ACTIONS(9),
    [anon_sym_foreground] = ACTIONS(9),
    [anon_sym_freetype_DASHload_DASHflags] = ACTIONS(9),
    [anon_sym_fullscreen] = ACTIONS(9),
    [anon_sym_grapheme_DASHwidth_DASHmethod] = ACTIONS(9),
    [anon_sym_gtk_DASHadwaita] = ACTIONS(9),
    [anon_sym_gtk_DASHsingle_DASHinstance] = ACTIONS(9),
    [anon_sym_gtk_DASHtabs_DASHlocation] = ACTIONS(9),
    [anon_sym_gtk_DASHtitlebar] = ACTIONS(9),
    [anon_sym_gtk_DASHwide_DASHtabs] = ACTIONS(9),
    [anon_sym_image_DASHstorage_DASHlimit] = ACTIONS(9),
    [anon_sym_initial_DASHcommand] = ACTIONS(9),
    [anon_sym_initial_DASHwindow] = ACTIONS(9),
    [anon_sym_keybind] = ACTIONS(9),
    [anon_sym_link] = ACTIONS(9),
    [anon_sym_link_DASHurl] = ACTIONS(9),
    [anon_sym_linux_DASHcgroup] = ACTIONS(9),
    [anon_sym_linux_DASHcgroup_DASHhard_DASHfail] = ACTIONS(9),
    [anon_sym_linux_DASHcgroup_DASHmemory_DASHlimit] = ACTIONS(9),
    [anon_sym_linux_DASHcgroup_DASHprocesses_DASHlimit] = ACTIONS(9),
    [anon_sym_macos_DASHauto_DASHsecure_DASHinput] = ACTIONS(9),
    [anon_sym_macos_DASHicon] = ACTIONS(9),
    [anon_sym_macos_DASHicon_DASHframe] = ACTIONS(9),
    [anon_sym_macos_DASHicon_DASHghost_DASHcolor] = ACTIONS(9),
    [anon_sym_macos_DASHicon_DASHscreen_DASHcolor] = ACTIONS(9),
    [anon_sym_macos_DASHnon_DASHnative_DASHfullscreen] = ACTIONS(9),
    [anon_sym_macos_DASHoption_DASHas_DASHalt] = ACTIONS(9),
    [anon_sym_macos_DASHsecure_DASHinput_DASHindication] = ACTIONS(9),
    [anon_sym_macos_DASHtitlebar_DASHproxy_DASHicon] = ACTIONS(9),
    [anon_sym_macos_DASHtitlebar_DASHstyle] = ACTIONS(9),
    [anon_sym_macos_DASHwindow_DASHshadow] = ACTIONS(9),
    [anon_sym_minimum_DASHcontrast] = ACTIONS(9),
    [anon_sym_mouse_DASHhide_DASHwhile_DASHtyping] = ACTIONS(9),
    [anon_sym_mouse_DASHscroll_DASHmultiplier] = ACTIONS(9),
    [anon_sym_mouse_DASHshift_DASHcapture] = ACTIONS(9),
    [anon_sym_osc_DASHcolor_DASHreport_DASHformat] = ACTIONS(9),
    [anon_sym_palette] = ACTIONS(9),
    [anon_sym_quick_DASHterminal_DASHanimation_DASHduration] = ACTIONS(9),
    [anon_sym_quick_DASHterminal_DASHautohide] = ACTIONS(9),
    [anon_sym_quick_DASHterminal_DASHposition] = ACTIONS(9),
    [anon_sym_quick_DASHterminal_DASHscreen] = ACTIONS(9),
    [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed] = ACTIONS(9),
    [anon_sym_quit_DASHafter_DASHlast_DASHwindow_DASHclosed_DASHdelay] = ACTIONS(9),
    [anon_sym_resize_DASHoverlay] = ACTIONS(9),
    [anon_sym_resize_DASHoverlay_DASHduration] = ACTIONS(9),
    [anon_sym_resize_DASHoverlay_DASHposition] = ACTIONS(9),
    [anon_sym_scrollback_DASHlimit] = ACTIONS(9),
    [anon_sym_selection_DASHbackground] = ACTIONS(9),
    [anon_sym_selection_DASHforeground] = ACTIONS(9),
    [anon_sym_selection_DASHinvert_DASHfg_DASHbg] = ACTIONS(9),
    [anon_sym_shell_DASHintegration] = ACTIONS(9),
    [anon_sym_shell_DASHintegration_DASHfeatures] = ACTIONS(9),
    [anon_sym_term] = ACTIONS(9),
    [anon_sym_theme] = ACTIONS(9),
    [anon_sym_title] = ACTIONS(9),
    [anon_sym_unfocused_DASHsplit_DASHfill] = ACTIONS(9),
    [anon_sym_unfocused_DASHsplit_DASHopacity] = ACTIONS(9),
    [anon_sym_vt_DASHkam_DASHallowed] = ACTIONS(9),
    [anon_sym_wait_DASHafter_DASHcommand] = ACTIONS(9),
    [anon_sym_window_DASHcolorspace] = ACTIONS(9),
    [anon_sym_window_DASHdecoration] = ACTIONS(9),
    [anon_sym_window_DASHheight] = ACTIONS(9),
    [anon_sym_window_DASHinherit_DASHfont_DASHsize] = ACTIONS(9),
    [anon_sym_window_DASHinherit_DASHworking_DASHdirectory] = ACTIONS(9),
    [anon_sym_window_DASHnew_DASHtab_DASHposition] = ACTIONS(9),
    [anon_sym_window_DASHpadding_DASHbalance] = ACTIONS(9),
    [anon_sym_window_DASHpadding_DASHcolor] = ACTIONS(9),
    [anon_sym_window_DASHpadding_DASHx] = ACTIONS(9),
    [anon_sym_window_DASHpadding_DASHy] = ACTIONS(9),
    [anon_sym_window_DASHsave_DASHstate] = ACTIONS(9),
    [anon_sym_window_DASHstep_DASHresize] = ACTIONS(9),
    [anon_sym_window_DASHtheme] = ACTIONS(9),
    [anon_sym_window_DASHtitle_DASHfont_DASHfamily] = ACTIONS(9),
    [anon_sym_window_DASHvsync] = ACTIONS(9),
    [anon_sym_window_DASHwidth] = ACTIONS(9),
    [anon_sym_working_DASHdirectory] = ACTIONS(9),
    [anon_sym_x11_DASHinstance_DASHname] = ACTIONS(9),
    [sym_invalid_keyword] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym__line,
      aux_sym_source_repeat1,
  [11] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__whitespace,
    STATE(4), 2,
      sym__line,
      aux_sym_source_repeat1,
  [22] = 2,
    ACTIONS(20), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__newline,
  [29] = 1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [34] = 1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(26), 1,
      anon_sym_LF,
  [42] = 1,
    ACTIONS(28), 1,
      sym__whitespace,
  [46] = 1,
    ACTIONS(30), 1,
      sym__whitespace,
  [50] = 1,
    ACTIONS(32), 1,
      anon_sym_EQ,
  [54] = 1,
    ACTIONS(34), 1,
      sym__whitespace,
  [58] = 1,
    ACTIONS(36), 1,
      sym_value,
  [62] = 1,
    ACTIONS(38), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 11,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 29,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 46,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 54,
  [SMALL_STATE(13)] = 58,
  [SMALL_STATE(14)] = 62,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ghostty(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
