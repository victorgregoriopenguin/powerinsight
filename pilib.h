/* Copyright (c) 2014  Penguin Computing, Inc.
 *  All rights reserved
 */

#ifndef PILIB_H
#define PILIB_H

/* Library of functions to handle low-level details of access
 *   to SPI hardware and Power Insight carriers
 */

#include <lua.h>

/* Import Globals */
extern char * ARGV0 ;

/* Library methods */
int pi_ioctl(lua_State * L);
int pi_setbank(lua_State * L);
int pi_init_ads1256(lua_State * L);
int pi_init_ads8344(lua_State * L);
int pi_init_sc620(lua_State * L);
int pi_getraw_temp(lua_State * L);
int pi_getraw_volt(lua_State * L);
int pi_getraw_amp(lua_State * L);
int pi_volt2temp_K(lua_State * L);
int pi_temp2volt_K(lua_State * L);
int pi_rt2temp_PTS(lua_State * L);
int pi_temp2rt_PTS(lua_State * L);
int pi_setled_temp(lua_State * L);
int pi_setled_main(lua_State * L);

/* Internal function */
int pi_register(lua_State * L);

/* Private Lua helpers */
void luaPI_doerror( lua_State * L, int ret, const char * attempt );

#endif /* PILIB_H */

/* ex: set sw=3 sta et : */
