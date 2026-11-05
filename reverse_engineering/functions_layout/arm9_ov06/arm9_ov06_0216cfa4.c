
void FUN_0216cfa4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  puVar10 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  puVar6 = (undefined4 *)puVar10[1];
  piVar1 = (int *)FUN_0216b740(*puVar10);
  iVar11 = *piVar1;
  iVar8 = puVar10[5];
  iVar4 = piVar1[1];
  iVar2 = puVar10[6];
  FUN_02166a1c(puVar10 + 5);
  uVar9 = 0;
  do {
    if (((*(byte *)((int)puVar6 + 6) & 1) != 0) && ((*(byte *)((int)puVar6 + 6) & 4) == 0)) {
      piVar1 = (int *)FUN_0216b740(*puVar6);
      FUN_0216caf0(*puVar6,*piVar1 + (iVar11 - iVar8),piVar1[1] + (iVar4 - iVar2));
    }
    uVar9 = uVar9 + 1;
    puVar6 = puVar6 + 2;
  } while (uVar9 < 0x20);
  iVar5 = puVar10[0xe];
  iVar7 = 0;
  do {
    iVar3 = iVar7 * 0xc;
    iVar7 = iVar7 + 1;
    *(int *)(iVar5 + iVar3) = *(int *)(iVar5 + iVar3) + (iVar11 - iVar8);
    *(int *)(iVar5 + iVar3 + 4) = *(int *)(iVar5 + iVar3 + 4) + (iVar4 - iVar2);
  } while (iVar7 < 0x80);
  return;
}

