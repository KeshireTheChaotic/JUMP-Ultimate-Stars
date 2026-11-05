
void FUN_02161468(byte *param_1,short *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = (ushort)*param_1 << 8;
  *param_2 = *param_2 + (ushort)param_1[1];
  param_2[1] = (ushort)param_1[2] << 8;
  param_2[1] = param_2[1] + (ushort)param_1[3];
  pbVar1 = param_1 + 4;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(byte *)((int)param_2 + iVar2 + 4) = *pbVar1;
    pbVar1 = pbVar1 + 1;
    iVar2 = iVar3;
  } while (iVar3 < 0x1fc);
  return;
}

