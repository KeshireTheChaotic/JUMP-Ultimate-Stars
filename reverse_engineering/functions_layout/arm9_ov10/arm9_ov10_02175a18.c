
void FUN_02175a18(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_021a73f4 != (undefined4 *)0x0) {
    if (*(short *)(DAT_021a73f4 + 1) == 2) {
      uVar1 = FUN_02067628();
      *DAT_021a73f4 = uVar1;
      return;
    }
    if (((*(short *)(DAT_021a73f4 + 1) == 4) && (*(short *)((int)DAT_021a73f4 + 6) != 0)) &&
       (iVar2 = FUN_02198ccc(), iVar2 != 9)) {
      *(undefined2 *)((int)DAT_021a73f4 + 6) = 0;
      *(undefined2 *)(DAT_021a73f4 + 1) = 6;
    }
  }
  return;
}

