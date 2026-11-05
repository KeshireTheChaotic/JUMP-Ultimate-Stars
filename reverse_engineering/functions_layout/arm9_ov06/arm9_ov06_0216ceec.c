
void FUN_0216ceec(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  puVar6 = (undefined4 *)puVar5[1];
  piVar1 = (int *)FUN_0216b740(*puVar5);
  iVar8 = *piVar1 - puVar5[5];
  FUN_02166a1c(puVar5 + 5);
  piVar1 = (int *)FUN_0216b740(*(undefined4 *)puVar5[0xe]);
  uVar7 = 0;
  do {
    if (((*(byte *)((int)puVar6 + 6) & 1) != 0) && ((*(byte *)((int)puVar6 + 6) & 4) == 0)) {
      piVar2 = (int *)FUN_0216b740(*puVar6);
      iVar3 = *piVar1 - *piVar2;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar8 < 0) {
        iVar4 = -iVar8;
      }
      else {
        iVar4 = iVar8;
      }
      if (iVar4 < iVar3) {
        FUN_0216caf0(*puVar6,*piVar2 + iVar8);
      }
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 2;
  } while (uVar7 < 0x20);
  return;
}

