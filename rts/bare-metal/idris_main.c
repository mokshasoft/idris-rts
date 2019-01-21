#include "idris_gmp.h"
#include "idris_opts.h"
#include "idris_rts.h"
#include "idris_stats.h"

#include "consoleUtils.h"

void _idris__123_runMain_95_0_125_(VM* vm, VAL* oldbase);

RTSOpts opts = {
    .init_heap_size = 10000,
    .max_stack_size = 5000,
    .show_summary   = 0
};

int main() {
    /* Initialize the UART console */
    ConsoleUtilsInit();

    /* Select the console type based on compile time check */
    ConsoleUtilsSetType(CONSOLE_UART);

    ConsoleUtilsPrintf("Setup UART logging\n");

    VM* vm = init_vm(opts.max_stack_size, opts.init_heap_size, 1);
    init_gmpalloc();
    init_nullaries();

    _idris__123_runMain_95_0_125_(vm, NULL);

#ifdef IDRIS_DEBUG
    if (opts.show_summary) {
        idris_gcInfo(vm, 1);
    }
#endif

    // Remove call to terminate since it crashes the application during a free
    //Stats stats = terminate(vm);

    return EXIT_SUCCESS;
}
