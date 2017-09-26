#include <ntddk.h>

/*创建文件*/
NTSTATUS FGCreateFile(IN PUNICODE_STRING filePath, OUT PHANDLE hFile, OUT PIO_STATUS_BLOCK pios);

/*创建文件夹：  需要优化循环创建过程*/
NTSTATUS FGCreateDirectory(IN PUNICODE_STRING directoryPath, OUT PHANDLE phFile, OUT PIO_STATUS_BLOCK pios);

/*写文件*/
NTSTATUS FGWriteFile(IN PUNICODE_STRING filePath, IN PUNICODE_STRING content, OUT PIO_STATUS_BLOCK pios);

/*读文件，堆分配，切记释放内存*/
NTSTATUS FGReadFile(IN PUNICODE_STRING filePath, OUT PUNICODE_STRING content, OUT PIO_STATUS_BLOCK pios);

/*拷贝文件*/
NTSTATUS FGCopyfile(IN PUNICODE_STRING src, IN PUNICODE_STRING dst, OUT PIO_STATUS_BLOCK pios);

/*删除文件*/
NTSTATUS FGDeleteFile(IN PUNICODE_STRING filePath, OUT PIO_STATUS_BLOCK pios);

/*剪切文件*/
NTSTATUS FGMovefile(IN PUNICODE_STRING src, IN PUNICODE_STRING dst, OUT PIO_STATUS_BLOCK pios);

