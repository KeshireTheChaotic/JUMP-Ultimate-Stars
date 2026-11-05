
undefined4 FUN_021c00e0(void)

{
  int iVar1;
  
  *(undefined2 *)(DAT_021d5258 + 0x528) = 0;
  *(undefined2 *)(DAT_021d5258 + 0x52a) = 0;
  *(undefined2 *)(DAT_021d5258 + 0x526) = 0;
  *(undefined2 *)(DAT_021d5258 + 0x548) = 0;
  FUN_021bfd58(10);
  if (*(int *)(DAT_021d525c + 0x1320) != 0) {
    FUN_02058c74(*(undefined4 *)(DAT_021d5258 + 0x508));
    *(undefined1 *)(DAT_021d5258 + 0x50d) = 1;
    FUN_021c0fac();
    return 0;
  }
  do {
    iVar1 = FUN_020594b0(DAT_021d5254,*(undefined4 *)(DAT_021d5258 + 0x508),DAT_021d5250);
  } while (iVar1 == 4);
  if (iVar1 == 2) {
    FUN_02058c74(*(undefined4 *)(DAT_021d5258 + 0x508));
    *(undefined1 *)(DAT_021d5258 + 0x50d) = 1;
    return 0;
  }
  return 8;
}

