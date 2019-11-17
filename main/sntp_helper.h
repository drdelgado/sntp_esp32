#include <time.h>
#include <time.h>
#include <sys/time.h>
#include "esp_sntp.h"
#include "esp_system.h"

#define RETRY_ATTEMPTS 10

typedef void (*sntp_on_connected_cb_t)(void);
void _time_sync_notification_cb(struct timeval *tv);
void sntp_set_on_connected_cb(sntp_on_connected_cb_t cb);

esp_err_t sntp_helper_init(const char* sntp_pool_uri);
uint64_t sntp_get_ms_since_epoch(void);
uint64_t sntp_get_sec_since_epoch(void);

esp_err_t sntp_get_tz_timeinfo(const char* tz, struct tm *timeinfo);