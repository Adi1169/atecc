#include "ndelay.h"
#include "nrf_log_default_backends.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "cryptoauthlib.h"
#include "nrf_delay.h"
int main(void) {
    ret_code_t err_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(err_code);
    nrf_delay_us(100);
    NRF_LOG_DEFAULT_BACKENDS_INIT();

    NRF_LOG_INFO("Hello world");
    ATCA_STATUS status;
    uint8_t revision[4];
    uint8_t randomnum[32];

    // status = atcab_init(&cfg_ateccx08a_i2c_default);
    // if (status != ATCA_SUCCESS)
    // {
    //     NRF_LOG_INFO("Error at init");
    // //    exit();
    // }else{
    //     NRF_LOG_INFO("not an Error at init");
    // }

status = atcab_random(randomnum);
    if (status != ATCA_SUCCESS)
    {
        printf("Error");
        // exit();
    }else{
	NRF_LOG_INFO("Hello world2");
}
    while(true){

    }
}

void ndelay_us(int time){
    nrf_delay_us(time);
}

void ndelay_ms(int time){
    nrf_delay_ms(time);
}