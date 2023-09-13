//
// Created by tiennam on 13/09/2023.
//

#ifndef SQLITE_INPUT_BUFFER_H
#define SQLITE_INPUT_BUFFER_H

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();

void print_prompt();

void read_input(InputBuffer* input_buffer);

void close_input_buffer(InputBuffer* input_buffer);

#endif //SQLITE_INPUT_BUFFER_H
