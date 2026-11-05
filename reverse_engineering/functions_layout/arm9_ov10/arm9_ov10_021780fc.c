
void FUN_021780fc(void)

{
  int iVar1;
  
  if (((DAT_021a75a4 != 0) && (*(int *)(DAT_021a75a4 + 0x18) != 0)) &&
     (iVar1 = FUN_0217575c(), iVar1 == 0)) {
    iVar1 = FUN_02177688();
    if ((iVar1 != 0) || (iVar1 = FUN_02189b3c(), iVar1 != 0)) {
      FUN_02189a5c();
    }
    if ((*(int **)(DAT_021a75a4 + 4) != (int *)0x0) && (**(int **)(DAT_021a75a4 + 4) != 0)) {
      iVar1 = FUN_02177de8();
      if (iVar1 != 0) {
        return;
      }
      if (((*(int *)(DAT_021a75a4 + 0x18) != 0) && (*(byte *)(DAT_021a75a4 + 0x1e) != 3)) &&
         (7 < *(uint *)(DAT_021a75a4 + 8))) {
        if (*(byte *)(DAT_021a75a4 + 0x1e) < 2) {
          FUN_02177c54(*(int *)(DAT_021a75a4 + 0x18),*(undefined4 *)(DAT_021a75a4 + 0x14));
        }
        if (*(int *)(DAT_021a75a4 + 0x14) <= (int)(uint)*(byte *)(DAT_021a75a4 + 0x1c)) {
          *(undefined1 *)(DAT_021a75a4 + 0x1e) = 3;
          *(char *)(DAT_021a75a4 + 0x1f) = *(char *)(DAT_021a75a4 + 0x1f) + '\x01';
        }
      }
    }
    if (1 < *(byte *)(DAT_021a75a4 + 0x1f)) {
      *(undefined1 *)(DAT_021a75a4 + 0x1f) = 0;
      FUN_02177c30();
    }
  }
  return;
}

