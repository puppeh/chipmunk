/* Dop configuration file; HZ is 100 rather than the default 60 */

#ifndef _SYS_PARAM_H
# define _SYS_PARAM_H

# define HZ (100)
# define NOFILE (60)
# define PATHSIZE (1024)

#define BIG_ENDIAN      4321
#define LITTLE_ENDIAN   1234

#define BYTE_ORDER LITTLE_ENDIAN
#define __IEEE_LITTLE_ENDIAN 1

#endif

