#pragma once
#include "heads.h"


#define  �豸��  L"\\Device\\HZW"
#define  ������  L"\\??\\HZW"

NTSTATUS test_DispatchControlCode(PDEVICE_OBJECT pDeviceObject, PIRP pIrp);
NTSTATUS CreateDevice(IN PDRIVER_OBJECT pDriverObject);

NTSTATUS DispatchControlCode(IN PDEVICE_OBJECT DeviceObject, IN PIRP Irp);



#define IOCTL_UNKNOWN_BASE					    FILE_DEVICE_UNKNOWN
#define IOCTL_GET_EPROCESS					CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0800, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_GET_PROCESS_COMMANDLINE_BY_PEB		    CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0801, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_QUERYINFORMATIONPROCESS		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0802, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ENUMDRIVERS		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0803, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENUM_THREAD		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0804, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENUM_VAD		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0805, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENUM_MODULE_BYPEB		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0806, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_QUERYOBJECT_NAME		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0807, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENUM_MEMORY		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0808, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENUM_HANDLES		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0809, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_SUSPEND_PROCESS		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0810, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_RESUME_PROCESS		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0811, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_KISS_PROCESS		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0812, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_SUSPEND_THREAD		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0813, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_RESUME_THREAD		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0814, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_KISS_THREAD		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0815, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_FREE_MODULE		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0816, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_DUMP_BUFFER		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0817, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_HIDE_MODULE		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0818, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_CHANGGE_MEMOORY_PROTECTION		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0819, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_ALLOCATE_MEMORY		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0820, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_FREE_MEMORY		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0821, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 
#define IOCTL_MDL_WRITE_MEMORY		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0822, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_MDL_CHANGE_VAD_PROTECTION		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0823, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CREATETHREAD_EX		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0824, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_OPEN_THREAD		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0825, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENABLE_KERNEL_INJECT		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0826, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_SET_KERNEL_INJECT		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0827, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_UNLOAD_DRIVER		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0828, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ENUM_CALLBACK		CTL_CODE(IOCTL_UNKNOWN_BASE, 0x0829, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)