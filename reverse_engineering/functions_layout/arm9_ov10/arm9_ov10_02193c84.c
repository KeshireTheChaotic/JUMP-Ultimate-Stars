
void FUN_02193c84(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(iVar1 + 0x455) = 0;
  if (*(int *)(iVar1 + 0x824) != 0) {
    (*DAT_021a8528)();
  }
  *(undefined4 *)(iVar1 + 0x824) = 0;
  return;
}

