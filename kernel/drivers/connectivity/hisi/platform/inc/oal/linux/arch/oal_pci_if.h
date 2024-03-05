/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : oal_pci_if.h
  版 本 号   : 初稿
  作    者   : zhangheng
  生成日期   : 2013年2月28日
  最近修改   :
  功能描述   : oal_pci_if.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年2月28日
    作    者   : zhangheng
    修改内容   : 创建文件

******************************************************************************/

#ifndef __OAL_LINUX_PCI_IF_H__
#define __OAL_LINUX_PCI_IF_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#if (_PRE_PRODUCT_ID == _PRE_PRODUCT_ID_HI1151)

#include "oal_types.h"
#include "oal_util.h"
#include "oal_hardware.h"

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_OAL_PCI_IF_H

/*****************************************************************************
  2 枚举定义
*****************************************************************************/

/*****************************************************************************
  3 全局变量声明
*****************************************************************************/

/*****************************************************************************
  4 宏定义
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern void (*arm_pm_restart)(char str, const char *cmd);

/*****************************************************************************
 函 数 名  : oal_pci_register_driver
 功能描述  : PCI驱动注册
 输入参数  : pst_drv: 指向要注册的驱动
 输出参数  : 无
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_register_driver(oal_pci_driver_stru *pst_drv)
{
    return pci_register_driver(pst_drv);
}

/*****************************************************************************
 函 数 名  : oal_pci_register_driver
 功能描述  : PCI驱动去注册
 输入参数  : pst_drv: 指向要去注册的驱动
 输出参数  : 无
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_void  oal_pci_unregister_driver(oal_pci_driver_stru *pst_drv)
{
    pci_unregister_driver(pst_drv);
}

/*****************************************************************************
 函 数 名  : oal_pci_enable_device
 功能描述  : 使能PCI设备
 输入参数  : pst_dev: PCI设备
 输出参数  : 无
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_enable_device(oal_pci_dev_stru *pst_dev)
{
    return pci_enable_device(pst_dev);
}

/*****************************************************************************
 函 数 名  : oal_pci_disable_device
 功能描述  : 禁止PCI设备
 输入参数  : 无
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_void  oal_pci_disable_device(oal_pci_dev_stru *pst_dev)
{
    pci_disable_device(pst_dev);
}

/*****************************************************************************
 函 数 名  : oal_pci_read_config_byte
 功能描述  : 从配置空间读取一个字节
 输入参数  : pst_dev : 指向PCI设备
             ul_where: 配置寄存器地址
 输出参数  : puc_val: 读取的值
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_read_config_byte(oal_pci_dev_stru *pst_dev, oal_int32 ul_where, oal_uint8 *puc_val)
{
    return pci_read_config_byte(pst_dev, ul_where, puc_val);
}

/*****************************************************************************
 函 数 名  : oal_pci_read_config_word
 功能描述  : 从配置空间读取一个字节
 输入参数  : pst_dev : 指向PCI设备
             ul_where: 配置寄存器地址
 输出参数  : pus_val : 读取的值
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_read_config_word(oal_pci_dev_stru *pst_dev, oal_int32 ul_where, oal_uint16 *pus_val)
{
    return pci_read_config_word(pst_dev, ul_where, pus_val);
}

/*****************************************************************************
 函 数 名  : oal_pci_read_config_dword
 功能描述  : 从配置空间读取一个字节
 输入参数  : pst_dev : 指向PCI设备
             ul_where: 配置寄存器地址
 输出参数  : pul_val : 读取的值
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_read_config_dword(oal_pci_dev_stru *pst_dev, oal_int32 ul_where, oal_uint32 *pul_val)
{
    return pci_read_config_dword(pst_dev, ul_where, pul_val);
}

/*****************************************************************************
 函 数 名  : oal_pci_write_config_byte
 功能描述  : 从配置空间读取一个字节
 输入参数  : pst_dev : 指向PCI设备
             ul_where: 配置寄存器地址
             uc_val  : 要写的值
 输出参数  : 无
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_write_config_byte(oal_pci_dev_stru *pst_dev, oal_int32 ul_where, oal_uint8 uc_val)
{
    return pci_write_config_byte(pst_dev, ul_where, uc_val);
}

/*****************************************************************************
 函 数 名  : oal_pci_write_config_word
 功能描述  : 从配置空间读取一个字节
 输入参数  : pst_dev : 指向PCI设备
             ul_where: 配置寄存器地址
             us_val  : 要写的值
 输出参数  : 无
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_write_config_word(oal_pci_dev_stru *pst_dev, oal_int32 ul_where, oal_uint16 us_val)
{
    return pci_write_config_word(pst_dev, ul_where, us_val);
}

/*****************************************************************************
 函 数 名  : oal_pci_write_config_dword
 功能描述  : 从配置空间读取一个字节
 输入参数  : pst_dev : 指向PCI设备
             ul_where: 配置寄存器地址
             ul_val  : 要写的值
 输出参数  : 无
 返 回 值  : Linux错误码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32  oal_pci_write_config_dword(oal_pci_dev_stru *pst_dev, oal_int32 ul_where, oal_uint32 ul_val)
{
    return pci_write_config_dword(pst_dev, ul_where, ul_val);
}

/*****************************************************************************
 函 数 名  : oal_pci_resource_start
 功能描述  : 读取PCI I/O空间首地址
 输入参数  : pst_dev: PCI设备
             l_bar  : PCI设备基地址寄存器编号，取值0~5
 输出参数  : 无
 返 回 值  : 地址
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_uint  oal_pci_resource_start(oal_pci_dev_stru *pst_dev, oal_int32 l_bar)
{
    return pci_resource_start(pst_dev, l_bar);
}

/*****************************************************************************
 函 数 名  : oal_pci_resource_start
 功能描述  : 读取PCI I/O空间最后一个可用地址
 输入参数  : pst_dev: PCI设备
             l_bar  : PCI设备基地址寄存器编号，取值0~5
 输出参数  : 无
 返 回 值  : 地址
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_uint  oal_pci_resource_end(oal_pci_dev_stru *pst_dev, oal_int32 l_bar)
{
    return pci_resource_end(pst_dev, l_bar);
}

/*****************************************************************************
 函 数 名  : oal_pci_resource_len
 功能描述  : PCI I/O空间大小
 输入参数  : pst_dev: PCI设备
             l_bar  : PCI设备基地址寄存器编号，取值0~5
 输出参数  : 无
 返 回 值  : 大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_uint32 oal_pci_resource_len(oal_pci_dev_stru *pst_dev, oal_int32 l_bar)
{
    return pci_resource_len(pst_dev, l_bar);
}

/*****************************************************************************
 函 数 名  : oal_pci_save_state
 功能描述  : PCI配置空间数据保存
 输入参数  : pst_dev: PCI设备
 输出参数  : 无
 返 回 值  : 大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/

OAL_STATIC OAL_INLINE oal_int32 oal_pci_save_state(oal_pci_dev_stru *pst_dev)
{
    return pci_save_state(pst_dev);

}

/*****************************************************************************
 函 数 名  : oal_pci_restore_state
 功能描述  : PCI配置空间数据恢复
 输入参数  : pst_dev: PCI设备
 输出参数  : 无
 返 回 值  : 大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/

OAL_STATIC OAL_INLINE oal_int32 oal_pci_restore_state(oal_pci_dev_stru *pst_dev)
{
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(3, 10, 44))
    pci_restore_state(pst_dev);
    return 0;
#else
    return pci_restore_state(pst_dev);
#endif
}

/*****************************************************************************
 函 数 名  : oal_pci_set_drvdata
 功能描述  : 设置PCI设备私有数据
 输入参数  : pst_dev: 指向设备
             p_data : 数据
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_void  oal_pci_set_drvdata(oal_pci_dev_stru *pst_dev, oal_void *p_data)
{
    pci_set_drvdata(pst_dev, p_data);
}

/*****************************************************************************
 函 数 名  : oal_pci_get_drvdata
 功能描述  : 读取PCI设备私有数据
 输入参数  : 无
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年2月22日
    作    者   : zhangheng
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE void *oal_pci_get_drvdata(oal_pci_dev_stru *pst_dev)
{
    return pci_get_drvdata(pst_dev);
}

#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of oal_pci_if.h */
