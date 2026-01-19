#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/mouse.h>

#if __has_include("flags.h")
#include "flags.h"
#endif

#include "helpers.h"
#include "config.dtsi"

#include <locale/keys_de.h>

#include "../features/mouse.dtsi"
#include "../features/vim.dtsi" // Not setup on host side yet

#include "../features/accents_DE.dtsi"
#include "../features/shortcuts_DE.dtsi"
#include "../features/select.dtsi"

#include "../features/sentence.dtsi"
#include "../features/smart.dtsi"
#include "../features/adaptive_DE.dtsi"
#include "../features/symbols_DE.dtsi"

#include "../features/combos_DE.dtsi"
#include "../features/leader.dtsi"

#if __has_include("../secret.dtsi")
#include "../secret.dtsi"
#endif
