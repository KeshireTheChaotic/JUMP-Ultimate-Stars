
void FUN_02067c44(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_020673ec(0x10);
  if (*param_1 == 5) {
    if (param_1[1] != 0) {
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 0xd) {
        *(undefined1 *)(iVar1 + 0xd14) = 1;
        return;
      }
      if (iVar2 == 0xf) {
        *(undefined1 *)(iVar1 + 0xd14) = 2;
        return;
      }
      if (iVar2 == 0x11) {
        *(undefined1 *)(iVar1 + 0xd14) = 3;
        return;
      }
      *(undefined1 *)(iVar1 + 0xd14) = 4;
      return;
    }
  }
  else if (*param_1 == 7) {
    FUN_02067b28(*(undefined4 *)(param_1 + 2));
  }
  return;
}

