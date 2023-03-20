/* ---------------------------------------------------------------------------- */
/*                  Atmel Microcontroller Software Support                      */
/*                       SAM Software Package License                           */
/* ---------------------------------------------------------------------------- */
/* Copyright (c) 2015, Atmel Corporation                                        */
/*                                                                              */
/* All rights reserved.                                                         */
/*                                                                              */
/* Redistribution and use in source and binary forms, with or without           */
/* modification, are permitted provided that the following condition is met:    */
/*                                                                              */
/* - Redistributions of source code must retain the above copyright notice,     */
/* this list of conditions and the disclaimer below.                            */
/*                                                                              */
/* Atmel's name may not be used to endorse or promote products derived from     */
/* this software without specific prior written permission.                     */
/*                                                                              */
/* DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR   */
/* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE   */
/* DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,      */
/* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,  */
/* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    */
/* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING         */
/* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, */
/* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                           */
/* ---------------------------------------------------------------------------- */

#ifndef _SAMA5D2_I2SC_COMPONENT_
#define _SAMA5D2_I2SC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Inter-IC Sound Controller */
/* ============================================================================= */
/** \addtogroup SAMA5D2_I2SC Inter-IC Sound Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief I2sc hardware registers */
typedef struct {
  __O  uint32_t I2SC_CR;      /**< \brief (I2sc Offset: 0x00) Control Register */
  __IO uint32_t I2SC_MR;      /**< \brief (I2sc Offset: 0x04) Mode Register */
  __I  uint32_t I2SC_SR;      /**< \brief (I2sc Offset: 0x08) Status Register */
  __O  uint32_t I2SC_SCR;     /**< \brief (I2sc Offset: 0x0C) Status Clear Register */
  __O  uint32_t I2SC_SSR;     /**< \brief (I2sc Offset: 0x10) Status Set Register */
  __O  uint32_t I2SC_IER;     /**< \brief (I2sc Offset: 0x14) Interrupt Enable Register */
  __O  uint32_t I2SC_IDR;     /**< \brief (I2sc Offset: 0x18) Interrupt Disable Register */
  __I  uint32_t I2SC_IMR;     /**< \brief (I2sc Offset: 0x1C) Interrupt Mask Register */
  __I  uint32_t I2SC_RHR;     /**< \brief (I2sc Offset: 0x20) Receiver Holding Register */
  __O  uint32_t I2SC_THR;     /**< \brief (I2sc Offset: 0x24) Transmitter Holding Register */
  __I  uint32_t I2SC_VERSION; /**< \brief (I2sc Offset: 0x28) Version Register */
} I2sc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- I2SC_CR : (I2SC Offset: 0x00) Control Register -------- */
#define I2SC_CR_RXEN (0x1u << 0) /**< \brief (I2SC_CR) Receiver Enable */
#define I2SC_CR_RXDIS (0x1u << 1) /**< \brief (I2SC_CR) Receiver Disable */
#define I2SC_CR_CKEN (0x1u << 2) /**< \brief (I2SC_CR) Clocks Enable */
#define I2SC_CR_CKDIS (0x1u << 3) /**< \brief (I2SC_CR) Clocks Disable */
#define I2SC_CR_TXEN (0x1u << 4) /**< \brief (I2SC_CR) Transmitter Enable */
#define I2SC_CR_TXDIS (0x1u << 5) /**< \brief (I2SC_CR) Transmitter Disable */
#define I2SC_CR_SWRST (0x1u << 7) /**< \brief (I2SC_CR) Software Reset */
/* -------- I2SC_MR : (I2SC Offset: 0x04) Mode Register -------- */
#define I2SC_MR_MODE (0x1u << 0) /**< \brief (I2SC_MR) Inter-IC Sound Controller Mode */
#define   I2SC_MR_MODE_SLAVE (0x0u << 0) /**< \brief (I2SC_MR) I2SCK and i2SWS pin inputs used as bit clock and word select/frame synchronization. */
#define   I2SC_MR_MODE_MASTER (0x1u << 0) /**< \brief (I2SC_MR) Bit clock and word select/frame synchronization generated by I2SC from MCK and output to I2SCK and I2SWS pins. MCK is output as master clock on I2SMCK if I2SC_MR.IMCKMODE is set. */
#define I2SC_MR_DATALENGTH_Pos 2
#define I2SC_MR_DATALENGTH_Msk (0x7u << I2SC_MR_DATALENGTH_Pos) /**< \brief (I2SC_MR) Data Word Length */
#define I2SC_MR_DATALENGTH(value) ((I2SC_MR_DATALENGTH_Msk & ((value) << I2SC_MR_DATALENGTH_Pos)))
#define   I2SC_MR_DATALENGTH_32_BITS (0x0u << 2) /**< \brief (I2SC_MR) Data length is set to 32 bits */
#define   I2SC_MR_DATALENGTH_24_BITS (0x1u << 2) /**< \brief (I2SC_MR) Data length is set to 24 bits */
#define   I2SC_MR_DATALENGTH_20_BITS (0x2u << 2) /**< \brief (I2SC_MR) Data length is set to 20 bits */
#define   I2SC_MR_DATALENGTH_18_BITS (0x3u << 2) /**< \brief (I2SC_MR) Data length is set to 18 bits */
#define   I2SC_MR_DATALENGTH_16_BITS (0x4u << 2) /**< \brief (I2SC_MR) Data length is set to 16 bits */
#define   I2SC_MR_DATALENGTH_16_BITS_COMPACT (0x5u << 2) /**< \brief (I2SC_MR) Data length is set to 16-bit compact stereo. Left sample in bits 15:0 and right sample in bits 31:16 of same word. */
#define   I2SC_MR_DATALENGTH_8_BITS (0x6u << 2) /**< \brief (I2SC_MR) Data length is set to 8 bits */
#define   I2SC_MR_DATALENGTH_8_BITS_COMPACT (0x7u << 2) /**< \brief (I2SC_MR) Data length is set to 8-bit compact stereo. Left sample in bits 7:0 and right sample in bits 15:8 of the same word. */
#define I2SC_MR_FORMAT_Pos 6
#define I2SC_MR_FORMAT_Msk (0x3u << I2SC_MR_FORMAT_Pos) /**< \brief (I2SC_MR) Data Format */
#define I2SC_MR_FORMAT(value) ((I2SC_MR_FORMAT_Msk & ((value) << I2SC_MR_FORMAT_Pos)))
#define   I2SC_MR_FORMAT_I2S (0x0u << 6) /**< \brief (I2SC_MR) I2S format, stereo with I2SWS low for left channel, and MSB of sample starting one I2SCK period after I2SWS edge */
#define   I2SC_MR_FORMAT_LJ (0x1u << 6) /**< \brief (I2SC_MR) Left-justified format, stereo with I2SWS high for left channel, and MSB of sample starting on I2SWS edge */
#define   I2SC_MR_FORMAT_TDM (0x2u << 6) /**< \brief (I2SC_MR) TDM format, with (NBCHAN + 1) channels, I2SWS high at beginning of first channel, and MSB of sample starting one ISCK period after I2SWS edge */
#define   I2SC_MR_FORMAT_TDMLJ (0x3u << 6) /**< \brief (I2SC_MR) TDM format, left-justified, with (NBCHAN + 1) channels, I2SWS high at beginning of first channel, and MSB of sample starting on I2SWS edge */
#define I2SC_MR_RXMONO (0x1u << 8) /**< \brief (I2SC_MR) Receive Mono */
#define I2SC_MR_RXDMA (0x1u << 9) /**< \brief (I2SC_MR) Single or Multiple DMA Controller Channels for Receiver */
#define I2SC_MR_RXLOOP (0x1u << 10) /**< \brief (I2SC_MR) Loop-back Test Mode */
#define I2SC_MR_TXMONO (0x1u << 12) /**< \brief (I2SC_MR) Transmit Mono */
#define I2SC_MR_TXDMA (0x1u << 13) /**< \brief (I2SC_MR) Single or Multiple DMA Controller Channels for Transmitter */
#define I2SC_MR_TXSAME (0x1u << 14) /**< \brief (I2SC_MR) Transmit Data when Underrun */
#define I2SC_MR_NBCHAN_Pos 16
#define I2SC_MR_NBCHAN_Msk (0x7u << I2SC_MR_NBCHAN_Pos) /**< \brief (I2SC_MR) Number of TDM Channels-1 */
#define I2SC_MR_NBCHAN(value) ((I2SC_MR_NBCHAN_Msk & ((value) << I2SC_MR_NBCHAN_Pos)))
#define I2SC_MR_TDMFS_Pos 22
#define I2SC_MR_TDMFS_Msk (0x3u << I2SC_MR_TDMFS_Pos) /**< \brief (I2SC_MR) TDM Frame Synchronization */
#define I2SC_MR_TDMFS(value) ((I2SC_MR_TDMFS_Msk & ((value) << I2SC_MR_TDMFS_Pos)))
#define   I2SC_MR_TDMFS_SLOT (0x0u << 22) /**< \brief (I2SC_MR) I2SWS pulse is high for one time slot at beginning of frame */
#define   I2SC_MR_TDMFS_HALF (0x1u << 22) /**< \brief (I2SC_MR) I2SWS pulse is high for half the time slots at beginning of frame, i.e., half the IWS period */
#define   I2SC_MR_TDMFS_BIT (0x2u << 22) /**< \brief (I2SC_MR) I2SWS pulse is high for one bit period at beginning of frame, i.e., one ISCK period */
#define I2SC_MR_IMCKFS_Pos 24
#define I2SC_MR_IMCKFS_Msk (0x3fu << I2SC_MR_IMCKFS_Pos) /**< \brief (I2SC_MR) Master Clock to fs Ratio */
#define I2SC_MR_IMCKFS(value) ((I2SC_MR_IMCKFS_Msk & ((value) << I2SC_MR_IMCKFS_Pos)))
#define   I2SC_MR_IMCKFS_M2SF32_64_96_128 (0x0u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 32 for two channels, set to 64 for 4 channels, set to 96 for 6 channels and set to 128 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF64_128_192_256 (0x1u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 64 for two channels, set to 128 for 4 channels, set to 192 for 6 channels and set to 256 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF96_192_384 (0x2u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 96 for two channels, set to 192 for 4 channels and set to 384 for 8 channels */
#define   I2SC_MR_IMCKFS_M2SF128_256_384_512 (0x3u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 128 for two channels, set to 256 for 4 channels set to 384 for 6 channels and set to 512 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF192_384_768 (0x5u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 192 for two channels, set to 384 for 4 channels and set to 768 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF256_512_768_1024 (0x7u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 256 for two channels, set to 512 for 4 channels, set to 768 for 6 channels and set to 1024 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF384_768_1536 (0xBu << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 384 for two channels, set to 768 for 4 channels and set to 1536 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF512_1024_1536_2048 (0xFu << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 512 for two channels, set to 1024 for 4 channels, set to 1536 for 6 channels and set to 2048 for 8 channels. */
#define   I2SC_MR_IMCKFS_M2SF768_1536 (0x17u << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 768 for two channels and set to 1536 for 4 channels. */
#define   I2SC_MR_IMCKFS_M2SF1024_2048 (0x1Fu << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 1024 for two channels and set to 2048 for 4 channels. */
#define   I2SC_MR_IMCKFS_M2SF1536 (0x2Fu << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 1536. */
#define   I2SC_MR_IMCKFS_M2SF2048 (0x3Fu << 24) /**< \brief (I2SC_MR) Sample frequency ratio set to 2048. */
#define I2SC_MR_IMCKMODE (0x1u << 30) /**< \brief (I2SC_MR) Master Clock Mode */
#define I2SC_MR_IWS (0x1u << 31) /**< \brief (I2SC_MR) I2SWS Slot Width */
/* -------- I2SC_SR : (I2SC Offset: 0x08) Status Register -------- */
#define I2SC_SR_RXEN (0x1u << 0) /**< \brief (I2SC_SR) Receiver Enabled */
#define I2SC_SR_RXRDY (0x1u << 1) /**< \brief (I2SC_SR) Receive Ready */
#define I2SC_SR_RXOR (0x1u << 2) /**< \brief (I2SC_SR) Receive Overrun */
#define I2SC_SR_TXEN (0x1u << 4) /**< \brief (I2SC_SR) Transmitter Enabled */
#define I2SC_SR_TXRDY (0x1u << 5) /**< \brief (I2SC_SR) Transmit Ready */
#define I2SC_SR_TXUR (0x1u << 6) /**< \brief (I2SC_SR) Transmit Underrun */
#define I2SC_SR_RXORCH_Pos 8
#define I2SC_SR_RXORCH_Msk (0xffu << I2SC_SR_RXORCH_Pos) /**< \brief (I2SC_SR) Receive Overrun Channel */
#define I2SC_SR_TXURCH30_Pos 20
#define I2SC_SR_TXURCH30_Msk (0xfu << I2SC_SR_TXURCH30_Pos) /**< \brief (I2SC_SR) Transmit Underrun Channel */
#define I2SC_SR_TXURCH74_Pos 24
#define I2SC_SR_TXURCH74_Msk (0xfu << I2SC_SR_TXURCH74_Pos) /**< \brief (I2SC_SR) Transmit Underrun Channel */
/* -------- I2SC_SCR : (I2SC Offset: 0x0C) Status Clear Register -------- */
#define I2SC_SCR_RXOR (0x1u << 2) /**< \brief (I2SC_SCR) Receive Overrun Status Clear */
#define I2SC_SCR_TXUR (0x1u << 6) /**< \brief (I2SC_SCR) Transmit Underrun Status Clear */
#define I2SC_SCR_RXORCH_Pos 8
#define I2SC_SCR_RXORCH_Msk (0xffu << I2SC_SCR_RXORCH_Pos) /**< \brief (I2SC_SCR) Receive Overrun Per Channel Status Clear */
#define I2SC_SCR_RXORCH(value) ((I2SC_SCR_RXORCH_Msk & ((value) << I2SC_SCR_RXORCH_Pos)))
#define I2SC_SCR_TXURCH30_Pos 20
#define I2SC_SCR_TXURCH30_Msk (0xfu << I2SC_SCR_TXURCH30_Pos) /**< \brief (I2SC_SCR) Transmit Underrun Per Channel for Channel 30 Status Clear */
#define I2SC_SCR_TXURCH30(value) ((I2SC_SCR_TXURCH30_Msk & ((value) << I2SC_SCR_TXURCH30_Pos)))
#define I2SC_SCR_TXURCH74_Pos 24
#define I2SC_SCR_TXURCH74_Msk (0xfu << I2SC_SCR_TXURCH74_Pos) /**< \brief (I2SC_SCR) Transmit Underrun Per Channel for Channel 74 Status Clear */
#define I2SC_SCR_TXURCH74(value) ((I2SC_SCR_TXURCH74_Msk & ((value) << I2SC_SCR_TXURCH74_Pos)))
/* -------- I2SC_SSR : (I2SC Offset: 0x10) Status Set Register -------- */
#define I2SC_SSR_RXOR (0x1u << 2) /**< \brief (I2SC_SSR) Receive Overrun Status Set */
#define I2SC_SSR_TXUR (0x1u << 6) /**< \brief (I2SC_SSR) Transmit Underrun Status Set */
#define I2SC_SSR_RXORCH_Pos 8
#define I2SC_SSR_RXORCH_Msk (0xffu << I2SC_SSR_RXORCH_Pos) /**< \brief (I2SC_SSR) Receive Overrun Per Channel Status Set */
#define I2SC_SSR_RXORCH(value) ((I2SC_SSR_RXORCH_Msk & ((value) << I2SC_SSR_RXORCH_Pos)))
#define I2SC_SSR_TXURCH30_Pos 20
#define I2SC_SSR_TXURCH30_Msk (0xfu << I2SC_SSR_TXURCH30_Pos) /**< \brief (I2SC_SSR) Transmit Underrun Per Channel for Channel 30 Status Set */
#define I2SC_SSR_TXURCH30(value) ((I2SC_SSR_TXURCH30_Msk & ((value) << I2SC_SSR_TXURCH30_Pos)))
#define I2SC_SSR_TXURCH74_Pos 24
#define I2SC_SSR_TXURCH74_Msk (0xfu << I2SC_SSR_TXURCH74_Pos) /**< \brief (I2SC_SSR) Transmit Underrun Per Channel for Channel 74 Status Set */
#define I2SC_SSR_TXURCH74(value) ((I2SC_SSR_TXURCH74_Msk & ((value) << I2SC_SSR_TXURCH74_Pos)))
/* -------- I2SC_IER : (I2SC Offset: 0x14) Interrupt Enable Register -------- */
#define I2SC_IER_RXRDY (0x1u << 1) /**< \brief (I2SC_IER) Receiver Ready Interrupt Enable */
#define I2SC_IER_RXOR (0x1u << 2) /**< \brief (I2SC_IER) Receiver Overrun Interrupt Enable */
#define I2SC_IER_TXRDY (0x1u << 5) /**< \brief (I2SC_IER) Transmit Ready Interrupt Enable */
#define I2SC_IER_TXUR (0x1u << 6) /**< \brief (I2SC_IER) Transmit Underflow Interrupt Enable */
/* -------- I2SC_IDR : (I2SC Offset: 0x18) Interrupt Disable Register -------- */
#define I2SC_IDR_RXRDY (0x1u << 1) /**< \brief (I2SC_IDR) Receiver Ready Interrupt Disable */
#define I2SC_IDR_RXOR (0x1u << 2) /**< \brief (I2SC_IDR) Receiver Overrun Interrupt Disable */
#define I2SC_IDR_TXRDY (0x1u << 5) /**< \brief (I2SC_IDR) Transmit Ready Interrupt Disable */
#define I2SC_IDR_TXUR (0x1u << 6) /**< \brief (I2SC_IDR) Transmit Underflow Interrupt Disable */
/* -------- I2SC_IMR : (I2SC Offset: 0x1C) Interrupt Mask Register -------- */
#define I2SC_IMR_RXRDY (0x1u << 1) /**< \brief (I2SC_IMR) Receiver Ready Interrupt Disable */
#define I2SC_IMR_RXOR (0x1u << 2) /**< \brief (I2SC_IMR) Receiver Overrun Interrupt Disable */
#define I2SC_IMR_TXRDY (0x1u << 5) /**< \brief (I2SC_IMR) Transmit Ready Interrupt Disable */
#define I2SC_IMR_TXUR (0x1u << 6) /**< \brief (I2SC_IMR) Transmit Underflow Interrupt Disable */
/* -------- I2SC_RHR : (I2SC Offset: 0x20) Receiver Holding Register -------- */
#define I2SC_RHR_RHR_Pos 0
#define I2SC_RHR_RHR_Msk (0xffffffffu << I2SC_RHR_RHR_Pos) /**< \brief (I2SC_RHR) Receiver Holding Register */
/* -------- I2SC_THR : (I2SC Offset: 0x24) Transmitter Holding Register -------- */
#define I2SC_THR_THR_Pos 0
#define I2SC_THR_THR_Msk (0xffffffffu << I2SC_THR_THR_Pos) /**< \brief (I2SC_THR) Transmitter Holding Register */
#define I2SC_THR_THR(value) ((I2SC_THR_THR_Msk & ((value) << I2SC_THR_THR_Pos)))
/* -------- I2SC_VERSION : (I2SC Offset: 0x28) Version Register -------- */
#define I2SC_VERSION_VERSION_Pos 0
#define I2SC_VERSION_VERSION_Msk (0xfffu << I2SC_VERSION_VERSION_Pos) /**< \brief (I2SC_VERSION) Version of the Hardware Module */
#define I2SC_VERSION_MFN_Pos 16
#define I2SC_VERSION_MFN_Msk (0x7u << I2SC_VERSION_MFN_Pos) /**< \brief (I2SC_VERSION) Metal Fix Number */

/*@}*/


#endif /* _SAMA5D2_I2SC_COMPONENT_ */
