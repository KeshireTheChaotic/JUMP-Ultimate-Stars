
void FUN_0215b72c(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
  sVar1 = *(short *)(param_1 + 0x10c);
  *(short *)(iVar2 + 0x30) = *(short *)(iVar2 + 0x30) + *(short *)(param_1 + 0x10a);
  *(short *)(iVar2 + 0x32) = *(short *)(iVar2 + 0x32) + sVar1;
  FUN_02157450(param_1,0xc);
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(code **)(param_1 + 0xfc) = FUN_0215b784;
  return;
}

