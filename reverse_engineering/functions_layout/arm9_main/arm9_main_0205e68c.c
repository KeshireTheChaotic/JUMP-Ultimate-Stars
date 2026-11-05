
void FUN_0205e68c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_1 + 0x24);
  bVar7 = (*(ushort *)(param_1 + 0x36) & 1) == 0;
  if (bVar7) {
    unaff_r6 = 1;
  }
  iVar1 = 0;
  if (!bVar7) {
    unaff_r6 = 0;
  }
  uVar5 = 0;
  uVar2 = 0xffffffff;
  if (iVar3 != 0) {
    uVar6 = uVar5;
    do {
      uVar5 = ~(param_3 - 1U) & (param_3 - 1U) + iVar3 + 0x10;
      uVar4 = *(uint *)(iVar3 + 4);
      if (((param_2 + (uVar5 - (iVar3 + 0x10)) <= uVar4) && (uVar4 < uVar2)) &&
         ((iVar1 = iVar3, unaff_r6 != 0 || (uVar2 = uVar4, uVar6 = uVar5, uVar4 == param_2))))
      break;
      uVar5 = uVar6;
      iVar3 = *(int *)(iVar3 + 0xc);
      uVar6 = uVar5;
    } while (iVar3 != 0);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0205e74c((int *)(param_1 + 0x24),iVar1,uVar5);
  return;
}

