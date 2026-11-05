
int FUN_02196028(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (uint)param_1[1] + (uint)*param_1 * 10;
  pbVar1 = param_1 + 2;
  if (param_2 == 0x17) {
    if (iVar2 - 0x210U < 0x32) {
      iVar2 = iVar2 + 0x5c0;
    }
    else {
      iVar2 = iVar2 + 0x55c;
    }
  }
  else {
    iVar2 = (iVar2 - 0x210U) * 100 + (uint)param_1[3] + (uint)*pbVar1 * 10 + -0x210;
    pbVar1 = param_1 + 4;
  }
  return iVar2 * 0x10000 + ((uint)pbVar1[1] + (uint)*pbVar1 * 10 + -0x210) * 0x100 +
         (uint)pbVar1[3] + (uint)pbVar1[2] * 10 + -0x210;
}

