
void FUN_02152e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  if (*(char *)(iVar3 + 0x439) != '\0') {
    return;
  }
  uVar1 = uVar4 & 0xffff;
  uVar4 = (int)uVar4 >> 0x10 & 0xffff;
  bVar5 = SBORROW4(uVar1,0xb);
  iVar2 = uVar1 - 0xb;
  if (uVar1 < 0xb) {
    bVar5 = SBORROW4(uVar4,4);
    iVar2 = uVar4 - 4;
  }
  if (iVar2 < 0 == bVar5) {
    return;
  }
  FUN_02153af8(iVar3,(int)*(char *)(uVar4 * 0xb + iVar3 + uVar1 + 0x472),uVar4,uVar1,param_4);
  return;
}

