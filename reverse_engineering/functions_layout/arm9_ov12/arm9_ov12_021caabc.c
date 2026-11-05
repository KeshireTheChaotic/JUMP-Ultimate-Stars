
void FUN_021caabc(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == param_2) {
    *param_1 = 0;
    return;
  }
  uVar2 = 0;
  while( true ) {
    if (*(ushort *)(piVar1 + 2) <= uVar2) {
      return;
    }
    if (*(int **)(*piVar1 + uVar2 * piVar1[1]) == param_2) break;
    uVar2 = uVar2 + 1;
  }
  FUN_02038010(piVar1,uVar2);
  puVar3 = (undefined4 *)*param_1;
  if (*(short *)(puVar3 + 2) != 1) {
    return;
  }
  iVar4 = *(int *)*puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0201b268();
    FUN_0201b244(puVar3);
  }
  *param_1 = iVar4;
  return;
}

