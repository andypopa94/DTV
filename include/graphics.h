/*! \file graphics.h
    \brief Contains the graphics API
*/
#ifndef GRAPHICS_H
#define GRAPHICS_H


#include <stdbool.h>
#include <time.h>
#include "tdp_api.h"


/// \brief A struct that contains some basic channel info.
struct graphics_channel_info
{
	uint16_t ch_num; ///< The number of the channel.
	bool teletext; ///< Whether the channel has teletext.
	uint16_t vpid; ///< The video PID of the channel.
	uint16_t apid; ///< The audio PID of the channel.
        struct tm tm;
};


/// \brief Displays some basic information about a channel on the screen.
void graphics_show_channel_info(struct graphics_channel_info info);
/// \brief Displays volume information on the screen.
void graphics_show_volume(uint8_t vol);
/// \brief Clears all graphics elements from screen
void graphics_clear();
/// \brief Renders graphic elements on screen
t_Error graphics_render(int *argc, char ***argv);
/// \brief Stops graphics_render loop
void graphics_stop();

#endif

