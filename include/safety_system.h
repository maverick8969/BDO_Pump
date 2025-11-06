/**
 * @file safety_system.h
 * @brief 4-stage safety interlock system
 */

#ifndef SAFETY_SYSTEM_H
#define SAFETY_SYSTEM_H

#include "esp_err.h"
#include "system_state.h"

/**
 * @brief Initialize safety system (buttons and LEDs)
 * @return ESP_OK on success
 */
esp_err_t safety_init(void);

/**
 * @brief Run safety check sequence
 * @return ESP_OK if all checks pass, ESP_FAIL otherwise
 */
esp_err_t safety_run_checks(void);

/**
 * @brief Cancel safety check sequence
 */
void safety_cancel(void);

#endif // SAFETY_SYSTEM_H
