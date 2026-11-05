
undefined4 FUN_02152078(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(DAT_02172968 + 0x2e) & 1) != 0) {
    return 1;
  }
  iVar1 = *(int *)(DAT_02172968 + param_1 * 4 + 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(DAT_02172968 + 0x1c) = iVar1;
  *(char *)(DAT_02172968 + 0x30) = (char)param_1;
  *(undefined4 *)(DAT_02172968 + 0x20) = **(undefined4 **)(DAT_02172968 + 0x1c);
  *(undefined4 *)(DAT_02172968 + 0x24) = *(undefined4 *)(*(int *)(DAT_02172968 + 0x1c) + 4);
  return 1;
}

