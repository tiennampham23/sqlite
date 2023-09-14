//
// Created by tiennam on 13/09/2023.
//

#ifndef SQLITE_COMMAND_H
#define SQLITE_COMMAND_H


#include "input_buffer.h"

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;


MetaCommandResult do_meta_command(InputBuffer* input_buffer);

#endif //SQLITE_COMMAND_H
