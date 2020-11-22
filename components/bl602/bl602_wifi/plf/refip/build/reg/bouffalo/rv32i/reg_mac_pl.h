
void blmac_compute_duration_setf(uint8_t computeduration);
uint32_t blmac_debug_rx_hdr_c_ptr_get(void);
uint32_t blmac_debug_rx_pay_c_ptr_get(void);
void blmac_dma_cntrl_clear(uint32_t value);
void blmac_dma_cntrl_set(uint32_t value);
void blmac_enable_imp_pri_tbtt_setf(uint8_t imppritbtt);
void blmac_enable_imp_sec_tbtt_setf(uint8_t impsectbtt);
void blmac_enable_master_gen_int_en_setf(uint8_t mastergeninten);
void blmac_enable_master_tx_rx_int_en_setf(uint8_t mastertxrxinten);
void blmac_gen_int_ack_clear(uint32_t value);
uint32_t blmac_gen_int_enable_get(void);
void blmac_gen_int_enable_set(uint32_t value);
uint32_t blmac_gen_int_status_get(void);
uint32_t blmac_next_tbtt_get(void);
void blmac_ppdu_mcs_index_setf(uint8_t ppdumcsindex);
void blmac_rx_header_head_ptr_set(uint32_t value);
void blmac_rx_payload_head_ptr_set(uint32_t value);
uint8_t blmac_soft_reset_getf(void);
void blmac_soft_reset_setf(uint8_t softreset);
uint8_t blmac_status_idle_interrupt_getf(void);
uint16_t blmac_time_on_air_getf(void);
void blmac_time_on_air_param_1_pack(uint8_t ppdustbc, uint8_t ppdunumextnss, uint8_t ppdushortgi, uint8_t ppdupretype, uint8_t ppdubw, uint32_t ppdulength);
uint8_t blmac_time_on_air_valid_getf(void);
void blmac_timers_int_event_clear(uint32_t value);
uint32_t blmac_timers_int_event_get(void);
uint32_t blmac_timers_int_un_mask_get(void);
void blmac_timers_int_un_mask_set(uint32_t value);
void blmac_tsf_hi_set(uint32_t value);
uint32_t blmac_tsf_lo_get(void);
void blmac_tsf_lo_set(uint32_t value);
void blmac_tx_ac_0_head_ptr_set(uint32_t value);
uint8_t blmac_tx_ac_0_state_getf(void);
void blmac_tx_ac_1_head_ptr_set(uint32_t value);
uint8_t blmac_tx_ac_1_state_getf(void);
void blmac_tx_ac_2_head_ptr_set(uint32_t value);
uint8_t blmac_tx_ac_2_state_getf(void);
void blmac_tx_ac_3_head_ptr_set(uint32_t value);
uint8_t blmac_tx_ac_3_state_getf(void);
void blmac_tx_bcn_head_ptr_set(uint32_t value);
uint8_t blmac_tx_bcn_state_getf(void);
void blmac_tx_rx_int_ack_clear(uint32_t value);
void blmac_tx_rx_int_enable_set(uint32_t value);
uint32_t blmac_tx_rx_int_status_get(void);
void blmac_wake_up_from_doze_setf(uint8_t wakeupfromdoze);
