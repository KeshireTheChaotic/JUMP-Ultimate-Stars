
undefined4 FUN_0201fb7c(int *param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  
  (**(code **)(*param_1 + 0xd0))();
  iVar2 = FUN_0201e6d4();
  bVar1 = *(byte *)(iVar2 + 6);
  uVar7 = 0;
  do {
    if (bVar1 <= uVar7) {
      return 0;
    }
    iVar2 = *(int *)(param_1[0x17] + uVar7 * 4);
    for (iVar8 = 0; iVar8 < (int)(uint)*(ushort *)(iVar2 + 0x52); iVar8 = iVar8 + 1) {
      iVar4 = *(int *)(iVar2 + 0x4c);
      iVar6 = iVar4 + iVar8 * 0x10;
      puVar9 = *(ushort **)(iVar6 + 0xc);
      pcVar5 = *(code **)(**(int **)(iVar6 + 4) + 0x68);
      uVar3 = (*pcVar5)(*(int **)(iVar6 + 4),*(undefined4 *)(iVar4 + iVar8 * 0x10),pcVar5,iVar6,
                        param_4);
      iVar4 = (uVar3 >> 1) + 1;
      for (; param_2 < *puVar9; puVar9 = puVar9 + -iVar4) {
      }
      for (; puVar9[iVar4] <= param_2; puVar9 = puVar9 + iVar4) {
      }
      if (*puVar9 == param_2) {
        return 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

