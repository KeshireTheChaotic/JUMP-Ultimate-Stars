
void FUN_0205e5d0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0xffffffff;
  bVar7 = (*(ushort *)(param_1 + 0x36) & 1) == 0;
  if (bVar7) {
    unaff_r5 = 1;
  }
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  if (!bVar7) {
    unaff_r5 = 0;
  }
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar5 = uVar4;
    do {
      uVar3 = *(uint *)(iVar2 + 4);
      uVar4 = ~(param_3 - 1U) & (uVar3 + iVar2 + 0x10) - param_2;
      if (((-1 < (int)(uVar4 - (iVar2 + 0x10))) && (uVar3 < uVar6)) &&
         ((iVar1 = iVar2, unaff_r5 != 0 || (uVar5 = uVar4, uVar6 = uVar3, uVar3 == param_2))))
      break;
      uVar4 = uVar5;
      iVar2 = *(int *)(iVar2 + 8);
      uVar5 = uVar4;
    } while (iVar2 != 0);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0205e74c(param_1 + 0x24,iVar1,uVar4);
  return;
}

