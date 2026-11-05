
void FUN_02082330(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = CONCAT44(param_2,param_1);
  for (puVar6 = (undefined4 *)*param_2; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6)
  {
    bVar1 = false;
    puVar7 = (undefined4 *)*param_2;
    while (puVar7 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*puVar7;
      if (puVar6 != puVar7) {
        iVar5 = puVar7[2];
        iVar4 = puVar6[2];
        iVar10 = *(int *)(iVar5 + 8);
        iVar9 = *(int *)(iVar4 + 8);
        if (iVar4 == iVar5) {
          bVar1 = true;
        }
        if (iVar9 == iVar10) {
          uVar12 = CONCAT44(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar5 + 0xc));
        }
        iVar2 = (int)((ulonglong)uVar12 >> 0x20);
        iVar3 = *(int *)(iVar5 + 0xc);
        if (iVar9 == iVar10 && iVar2 == (int)uVar12) {
          bVar1 = true;
        }
        bVar11 = iVar9 == iVar3;
        if (bVar11) {
          iVar3 = *(int *)(iVar4 + 0xc);
        }
        uVar12 = CONCAT44(iVar2,iVar3);
        if (bVar11 && iVar3 == iVar10) {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_02037c24(param_2,puVar7,iVar4,iVar5,param_4);
          puVar7[2] = 0;
          uVar12 = FUN_02037b98(param_1 + 0xd8,puVar7);
        }
      }
      puVar7 = puVar8;
    }
  }
  return;
}

