
void FUN_02189a28(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  pbVar1 = DAT_021a64d0;
  if (0 < param_2) {
    do {
      *(byte *)(param_1 + iVar3) = *(byte *)(param_1 + iVar3) ^ *pbVar1;
      pbVar2 = pbVar1 + 1;
      if (pbVar1[1] == 0) {
        pbVar2 = DAT_021a64d0;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar2;
    } while (iVar3 < param_2);
  }
  return;
}

