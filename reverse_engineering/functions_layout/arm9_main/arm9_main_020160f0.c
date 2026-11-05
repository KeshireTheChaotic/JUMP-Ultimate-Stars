
void FUN_020160f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)param_1[1];
  if (*(int *)(piVar2[0xd] + 0x224) != 0) {
    return;
  }
  iVar1 = (**(code **)(*piVar2 + 0xec))();
  uVar3 = 0;
  while( true ) {
    if (*(ushort *)(iVar1 + 0x74) <= uVar3) {
      return;
    }
    if (*(int **)(*(int *)(iVar1 + 0x6c) + uVar3 * *(int *)(iVar1 + 0x70)) == piVar2) break;
    uVar3 = uVar3 + 1;
  }
  (**(code **)(*param_1 + 0xc))();
  FUN_02038010(iVar1 + 0x6c,uVar3);
  return;
}

