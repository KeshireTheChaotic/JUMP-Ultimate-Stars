
void FUN_0214e270(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    iVar1 = FUN_0203b3e4();
    FUN_0214e2d8(*(undefined4 *)(iVar1 + 0x88),0,0);
    return;
  }
  iVar1 = FUN_0203b3e4();
  FUN_0214e2d8(*(undefined4 *)(iVar1 + 0x88),9,0x3e);
  iVar1 = FUN_0203b3e4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined4 *)(iVar1 + 0x8c0) = 0xb;
  *(undefined4 *)(iVar1 + 0x8c4) = 5;
  *(undefined4 *)(iVar1 + 0x8f0) = 1;
  *(undefined1 *)(iVar1 + 0x902) = 1;
  return;
}

