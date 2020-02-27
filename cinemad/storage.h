#pragma once

#define MAXLEN 16

#define MSG_SUCC "OPERATION SUCCEDED"
#define MSG_FAIL "OPERATION FAILED"

typedef void* storage_t;

extern storage_t storage_init(const char* filename);

extern int storage_close(const storage_t handle);

extern int storage_store(const storage_t handle, char* key, char* value, char** result);

extern int storage_load(const storage_t handle, char* key, char** result);

extern int storage_lock_shared(const storage_t handle, char* key);

extern int storage_lock_exclusive(const storage_t handle, char* key);

extern int storage_unlock(const storage_t handle, char* key);