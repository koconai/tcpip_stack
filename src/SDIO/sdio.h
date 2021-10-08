/**
 * MIT License

 * Copyright (c) 2021 Tung.V.Tran
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#ifndef __SDIO_H
#define __SDIO_H

/** @defgroup STM324x7I_EVAL_SDIO_SD_Exported_Types
  * @{
  */
typedef enum
{
    /**
     * @brief  SDIO specific error defines
     */
    SD_CMD_CRC_FAIL                    = (1), /*!< Command response received (but CRC check failed) */
    SD_DATA_CRC_FAIL                   = (2), /*!< Data bock sent/received (CRC check Failed) */
    SD_CMD_RSP_TIMEOUT                 = (3), /*!< Command response timeout */
    SD_DATA_TIMEOUT                    = (4), /*!< Data time out */
    SD_TX_UNDERRUN                     = (5), /*!< Transmit FIFO under-run */
    SD_RX_OVERRUN                      = (6), /*!< Receive FIFO over-run */
    SD_START_BIT_ERR                   = (7), /*!< Start bit not detected on all data signals in widE bus mode */
    SD_CMD_OUT_OF_RANGE                = (8), /*!< CMD's argument was out of range.*/
    SD_ADDR_MISALIGNED                 = (9), /*!< Misaligned address */
    SD_BLOCK_LEN_ERR                   = (10), /*!< Transferred block length is not allowed for the card or the number of transferred bytes does not match the block length */
    SD_ERASE_SEQ_ERR                   = (11), /*!< An error in the sequence of erase command occurs.*/
    SD_BAD_ERASE_PARAM                 = (12), /*!< An Invalid selection for erase groups */
    SD_WRITE_PROT_VIOLATION            = (13), /*!< Attempt to program a write protect block */
    SD_LOCK_UNLOCK_FAILED              = (14), /*!< Sequence or password error has been detected in unlock command or if there was an attempt to access a locked card */
    SD_COM_CRC_FAILED                  = (15), /*!< CRC check of the previous command failed */
    SD_ILLEGAL_CMD                     = (16), /*!< Command is not legal for the card state */
    SD_CARD_ECC_FAILED                 = (17), /*!< Card internal ECC was applied but failed to correct the data */
    SD_CC_ERROR                        = (18), /*!< Internal card controller error */
    SD_GENERAL_UNKNOWN_ERROR           = (19), /*!< General or Unknown error */
    SD_STREAM_READ_UNDERRUN            = (20), /*!< The card could not sustain data transfer in stream read operation. */
    SD_STREAM_WRITE_OVERRUN            = (21), /*!< The card could not sustain data programming in stream mode */
    SD_CID_CSD_OVERWRITE               = (22), /*!< CID/CSD overwrite error */
    SD_WP_ERASE_SKIP                   = (23), /*!< only partial address space was erased */
    SD_CARD_ECC_DISABLED               = (24), /*!< Command has been executed without using internal ECC */
    SD_ERASE_RESET                     = (25), /*!< Erase sequence was cleared before executing because an out of erase sequence command was received */
    SD_AKE_SEQ_ERROR                   = (26), /*!< Error in sequence of authentication. */
    SD_INVALID_VOLTRANGE               = (27),
    SD_ADDR_OUT_OF_RANGE               = (28),
    SD_SWITCH_ERROR                    = (29),
    SD_SDIO_DISABLED                   = (30),
    SD_SDIO_FUNCTION_BUSY              = (31),
    SD_SDIO_FUNCTION_FAILED            = (32),
    SD_SDIO_UNKNOWN_FUNCTION           = (33),
    /**
     * @brief  Standard error defines
     */
    SD_INTERNAL_ERROR,
    SD_NOT_CONFIGURED,
    SD_REQUEST_PENDING,
    SD_REQUEST_NOT_APPLICABLE,
    SD_INVALID_PARAMETER,
    SD_UNSUPPORTED_FEATURE,
    SD_UNSUPPORTED_HW,
    SD_ERROR,
    SD_OK = 0
} SD_ErrorCode;

#endif
