extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include <iostream>

int main() {
 lua_State* L = luaL_newstate();
luaL_openlibs(L);
luaL_dostring(L, "print('Hello from Lua in WASM!')");
lua_close(L);

    return 0;
}
