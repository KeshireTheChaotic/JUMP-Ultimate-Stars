
void FUN_0217d008(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 0x10);
  *(undefined1 *)(iVar1 + 0xe) = 0xff;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
  return;
}

