#ifndef SPARKLE_PROTOCOL_H
#define SPARKLE_PROTOCOL_H

#include "sparkle_packet.h"

//==================================================================================================

struct _SparklePacketType
{
    int code;
    WerePacker packer;
};
typedef struct _SparklePacketType SparklePacketType;

//==================================================================================================

struct _register_surface_file_request {const char *name; const char *path; int width; int height;};
extern const SparklePacketType register_surface_file_request;

struct _unregister_surface_request {const char *name;};
extern const SparklePacketType unregister_surface_request;

struct _set_surface_position_request {const char *name; int x1; int y1; int x2; int y2;};
extern const SparklePacketType set_surface_position_request;

struct _set_surface_strata_request {const char *name; int strata;};
extern const SparklePacketType set_surface_strata_request;

struct _set_surface_alpha_request {const char *name; float alpha;};
extern const SparklePacketType set_surface_alpha_request;

struct _add_surface_damage_request {const char *name; int x1; int y1; int x2; int y2;};
extern const SparklePacketType add_surface_damage_request;

struct _display_size_notification {int width; int height;};
extern const SparklePacketType display_size_notification;

struct _pointer_down_notification {const char *surface; int slot; int x; int y;};
extern const SparklePacketType pointer_down_notification;

struct _pointer_up_notification {const char *surface; int slot; int x; int y;};
extern const SparklePacketType pointer_up_notification;

struct _pointer_motion_notification {const char *surface; int slot; int x; int y;};
extern const SparklePacketType pointer_motion_notification;

struct _key_down_notification {int code;};
extern const SparklePacketType key_down_notification;

struct _key_up_notification {int code;};
extern const SparklePacketType key_up_notification;

struct _sound_data {unsigned int size; const unsigned char *data;};
extern const SparklePacketType sound_data;
extern const SparklePacketType sound_start;
extern const SparklePacketType sound_stop;

struct _key_down_request {int code;};
extern const SparklePacketType key_down_request;

struct _key_up_request {int code;};
extern const SparklePacketType key_up_request;

//==================================================================================================

#endif //SPARKLE_PROTOCOL_H

