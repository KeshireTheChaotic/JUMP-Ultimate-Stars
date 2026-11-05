
void FUN_0215fd00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 2;
  *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + *(short *)(iVar1 + 0x16);
  *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + *(short *)(iVar1 + 0x16);
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(iVar1 + 0x16);
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + *(short *)(iVar1 + 0x16);
  return;
}

