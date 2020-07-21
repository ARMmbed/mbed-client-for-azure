/**
 * NOTE:
 * This file and azure_c_shared_utility/.mbedignore force the Mbed OS build system to
 *   - pass to the compiler -I<this directory>
 *   - NOT pass to the compiler -I<this directory>/azure_c_shared_utility
 * so that
 *   - "#include <strings.h>" resolves to GCC's header ONLY
 *   - "#include "azure_c_shared_utility/strings.h" resolves to the SDK's header
 */
