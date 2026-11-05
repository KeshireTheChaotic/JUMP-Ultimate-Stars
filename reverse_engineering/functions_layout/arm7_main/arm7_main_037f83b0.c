
int FUN_037f83b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_037fd018(8);
  uVar2 = FUN_037fd004(8);
  iVar3 = FUN_037fd328(8,uVar2,uVar1,1);
  iVar4 = FUN_037fd018(8);
  FUN_037fe6f4(iVar3,0,iVar4 - iVar3);
  FUN_037fcf04(8,iVar3);
  uVar1 = FUN_037fd018(8);
  uVar2 = FUN_037fd004(8);
  iVar3 = FUN_037fd280(8,uVar2,uVar1);
  if (iVar3 < 0) {
    FUN_037fe538();
  }
  FUN_037fd3d0(8,iVar3);
  uVar5 = FUN_037fd0d0(8,iVar3);
  if (uVar5 < 0x2100) {
    FUN_037fe538();
  }
  return iVar3;
}

