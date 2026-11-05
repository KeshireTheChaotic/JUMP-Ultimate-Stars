
void FUN_0214eac8(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  pcVar2 = *(char **)(*(int *)(param_1 + 4) + 0x10);
  *pcVar2 = (&DAT_0215d444)[iVar1];
  pcVar2[1] = (char)iVar1;
  func_0x021b6214(*(undefined4 *)(*(int *)(pcVar2 + 0x20) + 4),0);
  func_0x021b6214(*(undefined4 *)(*(int *)(pcVar2 + 0x24) + 4),0);
  if ((byte)(*pcVar2 - 3U) < 2) {
    FUN_020703d8();
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(*(int *)(pcVar2 + 4) + 4),FUN_0214e6ec);
  return;
}

