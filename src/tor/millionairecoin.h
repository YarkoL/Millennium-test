/* Copyright (c) 2014, Neutrinocoin Developers */
/* See LICENSE for licensing information */

/**
 * \file millionairecoin.h
 * \brief Headers for millionairecoin.cpp
 **/

#ifndef TOR_MILLIONAIRECOIN_H
#define TOR_MILLIONAIRECOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* millionairecoin_tor_data_directory(
    );

    char const* millionairecoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

