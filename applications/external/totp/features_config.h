// Include Bluetooth token input automation
#ifndef TOTP_NO_BADBT_TYPE
#define TOTP_BADBT_TYPE_ENABLED
#endif

// Include token input automation icons on the main screen
#ifndef TOTP_NO_AUTOMATION_ICONS
#define TOTP_AUTOMATION_ICONS_ENABLED
#endif

// List of compatible firmwares
#define TOTP_FIRMWARE_OFFICIAL_STABLE (1)
#define TOTP_FIRMWARE_OFFICIAL_DEV (2)
#define TOTP_FIRMWARE_XTREME (3)
// End of list

// Checking FlipC.org definitions (https://github.com/playmean/fap-list/issues/9)
#if defined(TARGET_FIRMWARE_OFFICIAL)
#define TOTP_TARGET_FIRMWARE TOTP_FIRMWARE_OFFICIAL_STABLE
#elif defined(TARGET_FIRMWARE_UNLEASHED)
#define TOTP_TARGET_FIRMWARE TOTP_FIRMWARE_OFFICIAL_DEV
#elif defined(TARGET_FIRMWARE_XTREME)
#define TOTP_TARGET_FIRMWARE TOTP_FIRMWARE_XTREME
#endif
// End of FlipC.org definition checks

// If target firmware is not yet set, default it to Xtreme as I'm using it, and it is cool :)
#ifndef TOTP_TARGET_FIRMWARE
#define TOTP_TARGET_FIRMWARE TOTP_FIRMWARE_OFFICIAL_DEV
#endif