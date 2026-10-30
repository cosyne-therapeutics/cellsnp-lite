// config.h - global configuration.


#ifndef CSP_CONFIG_H
#define CSP_CONFIG_H

#define DEBUG 0
#define VERBOSE 1
/* DEVELOP defined to 1 means some codes for future version of cellsnp will be included. */
#define DEVELOP 0

#define CSP_NAME "cellsnp-lite"
#define CSP_VERSION "1.2.4"
#define CSP_AUTHOR "xianjie5@connect.hku.hk"

#define JF_ZIP_TYPE         2  // 1, gzip; 2, bgzip.
#define CSP_FIT_MULTI_SMP   1  // nthread auto fit multi samples? 0, no; 1, yes.
/* BGZF block cache per input file per thread in fetch mode (-R). Neighbouring SNPs re-query
   the same blocks, so without it every SNP re-inflates them. */
#ifndef CSP_FETCH_CACHE_SIZE
#define CSP_FETCH_CACHE_SIZE (64 * 1024 * 1024)
#endif

#endif