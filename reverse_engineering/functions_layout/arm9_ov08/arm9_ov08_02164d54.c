
void FUN_02164d54(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if ((*(int *)(DAT_0216e82c + iVar2 + 0x208) != 0) &&
       (psVar1 = (short *)(DAT_0216e82c + 0x100 + iVar3 * 0x44), iVar3 == 1)) {
      if (*(char *)(DAT_0216e82c + 0xa93) == '\x01') {
        if (*psVar1 != 0x10) {
          return;
        }
        *(int *)(DAT_0216e82c + 0xa94) = *(int *)(DAT_0216e82c + 0xa94) + 1;
        if (((*(uint *)(DAT_0216e82c + 0xa94) & 1) == 0) &&
           (*(short *)(DAT_0216e82c + 0x200) = *(short *)(DAT_0216e82c + 0x200) + 1,
           0x23 < *(ushort *)(DAT_0216e82c + 0x200))) {
          *(undefined2 *)(DAT_0216e82c + 0x200) = 0;
        }
      }
      else {
        *(undefined2 *)(DAT_0216e82c + 0x202) = 0xbc;
        if (*psVar1 == 0xbd) {
          *(undefined1 *)(DAT_0216e82c + 0xa93) = 1;
          *(undefined2 *)(DAT_0216e82c + 0x200) = 0;
          *(undefined4 *)(DAT_0216e82c + 0xa94) = 0;
        }
      }
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}

