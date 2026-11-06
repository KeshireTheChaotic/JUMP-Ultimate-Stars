
undefined4 FUN_021ce124(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  longlong lVar13;
  
  bVar1 = true;
  iVar5 = param_3 * 0x94;
  piVar11 = (int *)(&DAT_021d57b8 + iVar5);
  iVar2 = FUN_021ce830(param_3);
  while( true ) {
    if (iVar2 == 0) {
      if (*(int *)(&DAT_021d57f4 + iVar5) != 0) {
        FUN_021cf870();
        *(undefined4 *)(&DAT_021d57f4 + iVar5) = 0;
      }
      return 0;
    }
    lVar13 = OS_GetTick();
    uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
    uVar3 = (uint)lVar13;
    iVar4 = FUN_021ce884(param_3);
    if (iVar4 == 0) break;
    uVar10 = *(uint *)(iVar4 + 0x46c);
    uVar9 = *(uint *)(iVar4 + 0x470);
    uVar6 = (uint)((ulonglong)(lVar13 + 0x34) >> 0x20);
    if (uVar6 <= uVar9 && (uint)(uVar10 <= (uint)(lVar13 + 0x34)) <= uVar6 - uVar9) {
      if ((*(int *)(iVar4 + 0x45c) != 0) || (*(int *)(&DAT_021d57f4 + iVar5) == 0)) {
        return 0;
      }
      *(int *)(&DAT_021d57d8 + iVar5) = *(int *)(&DAT_021d57d8 + iVar5) + 1;
      FUN_020517c4(*(undefined4 *)(*(int *)(&DAT_021d57f4 + iVar5) + 0x474),param_1,param_2);
      FUN_021cf870(*(undefined4 *)(&DAT_021d57f4 + iVar5));
      *(undefined4 *)(&DAT_021d57f4 + iVar5) = 0;
      if (param_4 != (uint *)0x0) {
        *param_4 = *param_4 | 1 << *(sbyte *)(iVar4 + 0x10);
      }
      return 1;
    }
    uVar9 = uVar9 + (0xffff74b3 < uVar10);
    bVar12 = uVar3 <= uVar10 + 0x8b4c;
    if (uVar7 < uVar9 || uVar9 - uVar7 < (uint)bVar12) {
      uVar7 = *(uint *)(&DAT_021d5810 + iVar5);
      if ((((uVar7 + 1 != *(uint *)(iVar4 + 0x18)) && (uVar7 != 0)) &&
          (uVar7 <= *(uint *)(iVar4 + 0x18))) && (*(int *)(iVar4 + 0x45c) == 0)) {
        *(int *)(&DAT_021d57cc + iVar5) = *(int *)(&DAT_021d57cc + iVar5) + 1;
      }
      *(undefined4 *)(&DAT_021d5810 + iVar5) = *(undefined4 *)(iVar4 + 0x18);
      if ((!bVar1) || (*(int *)(&DAT_021d5828 + iVar5) == 0)) {
        iVar8 = uVar3 - *(int *)(iVar4 + 0x464);
        iVar2 = *(int *)(&DAT_021d57e0 + iVar5);
        *(int *)(&DAT_021d57e0 + iVar5) = iVar8;
        iVar2 = *(int *)(&DAT_021d57e0 + iVar5) +
                ((uint)((iVar8 - iVar2) - *(int *)(&DAT_021d57e0 + iVar5)) >> 4);
        *(int *)(&DAT_021d57e4 + iVar5) = iVar2;
        *piVar11 = iVar2;
        FUN_020517c4(*(undefined4 *)(iVar4 + 0x474),param_1,param_2);
        FUN_021ceda8(piVar11,iVar4);
        if (param_4 != (uint *)0x0) {
          *param_4 = *param_4 | 1 << *(sbyte *)(iVar4 + 0x10);
        }
        return 1;
      }
      iVar2 = FUN_021ceda8(piVar11,iVar4);
      FUN_021ce884(param_3);
      *(int *)(&DAT_021d5828 + iVar5) = *(int *)(&DAT_021d5828 + iVar5) + -1;
    }
    else {
      *(undefined4 *)(&DAT_021d5810 + iVar5) = *(undefined4 *)(iVar4 + 0x18);
      iVar2 = FUN_021ceda8(piVar11,iVar4,(uVar9 - uVar7) - (uint)!bVar12);
      FUN_021ce884(param_3);
      bVar1 = false;
    }
  }
  *(int *)(&DAT_021d57c0 + iVar5) = iVar2;
  return 0;
}

