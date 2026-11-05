
int FUN_02044ee4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint extraout_r1;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  piVar2 = *(int **)(param_1 + 0x20);
  piVar9 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    param_3 = *(uint *)(param_1 + 0x6c);
    param_2 = DAT_02093be8;
  }
  if (piVar2 != (int *)0x0 && param_3 != param_2) {
    if (((piVar9[0x237] != 4) ||
        ((iVar3 = (**(code **)(*piVar2 + 0x20))(), iVar3 != 0x3147434e &&
         (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(), iVar3 != 0x3247434e)))) &&
       ((piVar9[0x237] != 8 ||
        ((iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(), iVar3 != 0x3831474e &&
         (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(), iVar3 != 0x3832474e)))))) {
      if (piVar9[0x237] == 4) {
        uVar4 = FUN_02016708(0x3147434e,*(undefined4 *)(param_1 + 0x20));
      }
      else {
        uVar4 = FUN_02016708(0x3831474e,*(undefined4 *)(param_1 + 0x20));
      }
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
      *(undefined4 *)(param_1 + 0x20) = uVar4;
    }
    iVar3 = (**(code **)(*piVar9 + 0x80))();
    if (((*(int *)(param_1 + 0x50) == *(int *)(iVar3 + 8)) &&
        (DAT_02093be8 <= *(int *)(param_1 + 0x6c) + 1U)) &&
       (iVar5 = (**(code **)(*piVar9 + 0xa4))(), iVar5 == 0)) {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
      FUN_02045664(iVar3,uVar4);
      param_2 = extraout_r1;
    }
    else {
      iVar5 = (*(int **)(param_1 + 0x20))[3];
      uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
      uVar10 = FUN_02045570(iVar3,iVar5,uVar4);
      param_2 = (uint)((ulonglong)uVar10 >> 0x20);
      *(int *)(param_1 + 0x50) = (int)uVar10;
    }
  }
  lVar11 = CONCAT44(param_2,*(int *)(param_1 + 0x30));
  if ((*(int *)(param_1 + 0x30) == 0) &&
     (lVar11 = (ulonglong)param_2 << 0x20, *(int **)(param_1 + 0x20) != (int *)0x0)) {
    lVar11 = (**(code **)(**(int **)(param_1 + 0x20) + 100))();
  }
  uVar7 = (uint)((ulonglong)lVar11 >> 0x20);
  iVar3 = (int)lVar11;
  uVar8 = 0;
  if (iVar3 != 0) {
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar8 = DAT_02093be8;
  }
  if (iVar3 != 0 && uVar7 != uVar8) {
    if (piVar9[0x254] == -1) {
      iVar5 = (**(code **)(*piVar9 + 0x7c))();
      if (iVar5 == 0) {
        iVar5 = DAT_020a0fa8;
      }
      else {
        iVar5 = DAT_020a0e14;
      }
    }
    else {
      iVar5 = (**(code **)(*piVar9 + 0x84))();
    }
    uVar8 = (uint)*(ushort *)(iVar3 + 10);
    if (uVar8 < 2) {
      iVar6 = -1;
      if (piVar9[0x254] == -1) {
        iVar6 = *(int *)(iVar5 + 8);
      }
      iVar1 = (*(ushort *)(iVar3 + 0xc) + 0xf & 0xfffffff0) * 2;
      iVar3 = *(int *)(iVar3 + 0x10);
      if (piVar9[0x254] != -1 || iVar6 != 0) {
        uVar4 = FUN_02045570(iVar5,iVar3 + (*(uint *)(param_1 + 0x34) & 0xfffffffe),iVar1);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
      else {
        FUN_02045664(iVar5,2);
        *(undefined4 *)(param_1 + 0x54) = 0;
        FUN_02045570(iVar5,iVar3 + ((*(uint *)(param_1 + 0x34) >> 1) + 1) * 2,iVar1 + -2);
      }
      DC_FlushRange(iVar3 + (*(uint *)(param_1 + 0x34) & 0xfffffffe),iVar1);
    }
    else {
      uVar7 = uVar8 & 0xfffffff0;
      iVar6 = ((*(ushort *)(iVar3 + 0xc) - uVar8) + 0xf & 0xfffffff0) << 1;
      iVar3 = *(int *)(iVar3 + 0x10);
      uVar4 = FUN_020455f4(iVar5,uVar7 << 1,
                           iVar3 + (*(int *)(param_1 + 0x34) + uVar7 * 2 & 0xfffffffe),iVar6);
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      DC_FlushRange(iVar3 + (*(int *)(param_1 + 0x34) + uVar7 * 2 & 0xfffffffe),iVar6);
    }
    *(uint *)(param_1 + 0x6c) = DAT_02093be8;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_1;
}

