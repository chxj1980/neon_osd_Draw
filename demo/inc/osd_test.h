/**
 * @file:   osd_test.h
 * @note:   2017-2030, <git.oschia.net/think3r>
 * @brief:  osd_test.c ��ͷ�ļ�
 * @author: think3r
 * @date:   2019/8/18
 * @note:
 * @note \n History:
   1.��    ��: 2019/8/18
     ��    ��: think3r
     �޸���ʷ: �����ļ�
 */

#ifndef __OSD_TEST_H__
#define __OSD_TEST_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/*----------------------------------------------*/
/*                  ͷ�ļ�����                  */
/*----------------------------------------------*/
#include <stdint.h>
#include "osd_base.h"

/*----------------------------------------------*/
/*                  �����Ͷ���                  */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                 �ṹ�嶨��                   */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                  ��������                    */
/*----------------------------------------------*/
extern uint32_t calcBeyondCompare_Pitch(uint32_t charNum, uint8_t scale, uint8_t charWidth);
extern uint32_t osdCreatDot_demo(void * pMem, uint8_t scale, uint8_t charWidth, bool beDraw_YUV);
extern void speadTest_CreatDot_u16(void * pMem, uint32_t charNum, uint8_t scale, uint8_t charWidth);
extern void osd_Spead_Test(void * pMem, uint32_t memSize);

extern uint32_t speadTest_CreatYuvDot(void * pMem, uint32_t charNum, uint8_t scale, uint8_t charWidth);


/*----------------------------------------------*/
/*                  ȫ�ֱ���                    */
/*----------------------------------------------*/

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __OSD_TEST_H__ */
