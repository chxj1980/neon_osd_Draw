/**
 * @file:   cpu_osd.h
 * @note:   2017-2030, <git.oschia.net/think3r>
 * @brief:  cpu_osd.c ��ͷ�ļ�
 * @author: think3r
 * @date:   2019/8/18
 * @note:
 * @note \n History:
   1.��    ��: 2019/8/18
     ��    ��:  think3r
     �޸���ʷ: �����ļ�
 */


#ifndef __CPU_OSD_NEW_H__
#define __CPU_OSD_NEW_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/*----------------------------------------------*/
/*                 ����ͷ�ļ�                   */
/*----------------------------------------------*/
#include <stdint.h>

/*----------------------------------------------*/
/*                 �����Ͷ���                   */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                �ṹ�嶨��                    */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                 ��������                     */
/*----------------------------------------------*/
extern void cpu_DrawAscii( uint8_t *   pFont,
                                 uint16_t *  pDst,
                                 uint32_t    pitch,
                                 uint8_t     scale,
                                 uint16_t    color );

extern void cpu_DrawChinese(      uint8_t *   pFont,
                                    uint16_t *  pDst,
                                    uint32_t    pitch,
                                    uint8_t     scale,
                                    uint16_t    color );

/*----------------------------------------------*/
/*                 ȫ�ֱ���                     */
/*----------------------------------------------*/


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __CPU_OSD_NEW_H__ */
