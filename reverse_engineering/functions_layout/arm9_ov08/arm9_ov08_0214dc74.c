
int FUN_0214dc74(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  pbVar2 = (byte *)(param_1 + param_2 + -1);
  iVar3 = 0;
  if (0 < param_2) {
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + -1;
      iVar4 = iVar4 * 0x100 + (uint)bVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return iVar4;
}

