
void FUN_0216ce6c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  puVar4 = (undefined4 *)puVar6[1];
  piVar1 = (int *)FUN_0216b740(*puVar6);
  iVar8 = *piVar1;
  iVar5 = puVar6[5];
  iVar3 = piVar1[1];
  iVar2 = puVar6[6];
  FUN_02166a1c(puVar6 + 5);
  uVar7 = 0;
  do {
    if (((*(byte *)((int)puVar4 + 6) & 1) != 0) && ((*(byte *)((int)puVar4 + 6) & 4) == 0)) {
      piVar1 = (int *)FUN_0216b740(*puVar4);
      FUN_0216caf0(*puVar4,*piVar1 + (iVar8 - iVar5),piVar1[1] + (iVar3 - iVar2));
    }
    uVar7 = uVar7 + 1;
    puVar4 = puVar4 + 2;
  } while (uVar7 < 0x20);
  return;
}

