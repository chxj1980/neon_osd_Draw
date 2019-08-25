/**
 * @file:   neon_intrinsics_test.h
 * @note:   2017-2030, <git.oschia.net/think3r>
 * @brief:  neon_intrinsics_test.c ��ͷ�ļ�
 * @author: think3r
 * @date    2019/8/18
 * @note:
 * @note \n History:
   1.��    ��: 2019/8/18
     ��    ��: think3r
     �޸���ʷ: �����ļ�
 */

#ifndef __NEON_INTRINSICS_TEST_H__
#define __NEON_INTRINSICS_TEST_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/*----------------------------------------------*/
/*                  ͷ�ļ�����                  */
/*----------------------------------------------*/
#include <stdint.h>

/*----------------------------------------------*/
/*                  �����Ͷ���                  */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                 �ṹ�嶨��                   */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                  ��������                    */
/*----------------------------------------------*/

/*----------------------------------------------*/
/*                  ȫ�ֱ���                    */
/*----------------------------------------------*/


extern void converI420ToNv21(uint32_t cnt, uint32_t width, uint32_t height,
                                    uint8_t * pSrcUAddr, uint8_t * pSrcVAddr, uint8_t * pDstLumaAddr);
extern void move_Y_test(uint32_t cnt, uint32_t width, uint32_t height, uint8_t * pSrcLumaAddr, uint8_t * pDstLumaAddr);
extern void neonTestFunc(void);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __NEON_INTRINSICS_TEST_H__ */
