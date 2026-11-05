
void FUN_021a1d18(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; *(short *)(param_2 + iVar1 * 2) != 0; iVar1 = iVar1 + 1) {
  }
  if (10 < iVar1) {
    iVar1 = 10;
  }
  FUN_020517fc(param_1 + 0x1c,0,0x14);
  FUN_02051890(param_2,param_1 + 0x1c,iVar1 << 1);
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 0x20;
  return;
}

