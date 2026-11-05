
void FUN_02180938(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar2 = (int *)FUN_02180a74(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1a8));
  iVar7 = 0;
  piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x44);
  iVar8 = 0x7fffffff;
  if (piVar9 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    if (piVar9[6] == 0) {
      (**(code **)(*piVar9 + 0x14))();
    }
    iVar3 = piVar9[6];
  }
  for (puVar12 = *(undefined4 **)(*(int *)(*(int *)(iVar3 + 4) + 0x10) + 0x14);
      puVar12 != (undefined4 *)0x0; puVar12 = (undefined4 *)*puVar12) {
    iVar3 = puVar12[2];
    if ((iVar3 != 0) &&
       (cVar1 = *(char *)(iVar3 + 0x39), (cVar1 == '\x02' || cVar1 == '\b') || cVar1 == '\t')) {
      iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
      iVar10 = *(int *)(iVar6 + 0xc);
      iVar11 = iVar10 - *piVar2;
      if (iVar11 < 0) {
        iVar11 = -iVar11;
      }
      iVar5 = *(int *)(iVar6 + 0x10) - piVar2[1];
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar11 + iVar5 < iVar8) {
        local_30 = iVar10 + ((uint)(iVar10 < *piVar2) * 2 + -1) * 0x1000;
        local_2c = *(undefined4 *)(iVar6 + 0x10);
        iVar7 = iVar3;
        iVar8 = iVar11 + iVar5;
      }
    }
  }
  if (iVar7 == 0) {
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
  else {
    *(int *)(param_1 + 0xcc) = iVar7;
    *(undefined1 *)(param_1 + 0xd2) = 1;
    *(undefined1 *)(param_1 + 0xd3) = 0;
    uVar4 = FUN_02180a84(*(undefined4 *)(param_1 + 0x24));
    FUN_02176d64(uVar4,&local_30,0xffffffff);
  }
  return;
}

