
void FUN_0214e380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auStack_84 [64];
  undefined1 auStack_44 [28];
  undefined4 uStack_28;
  
  iVar6 = DAT_020b4114;
  uStack_28 = param_4;
  piVar2 = (int *)FUN_02033410(s_jgalaxy_jgalaxy_bin_0216bbb0,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  iVar10 = piVar2[7];
  iVar3 = (**(code **)(**(int **)(iVar10 + 4) + 0x2c))(*(int **)(iVar10 + 4),0);
  iVar3 = (**(code **)(**(int **)(iVar10 + 4) + 0x2c))
                    (*(int **)(iVar10 + 4),*(undefined4 *)(iVar3 + 0x14));
  uVar7 = 0x88;
  iVar3 = iVar6 * 0x88 + iVar3;
  bVar1 = false;
  iVar4 = (int)DAT_020aff27;
  uVar8 = 0;
  do {
    if (iVar4 <= (int)uVar8) {
      uVar8 = 0;
      if (DAT_020afee4 != '\0') {
        uVar8 = (uint)*(char *)(iVar3 + 0xd);
        uVar7 = 0xffffffff;
      }
      if ((DAT_020afee4 != '\0' && uVar8 != uVar7) &&
         (((&DAT_020b0ca4)[uVar8 >> 5] & 1 << (uVar8 & 0x1f)) == 0)) {
        FUN_02070c84(uVar8,auStack_84);
        func_0x021bac78(*(undefined4 *)(param_1 + 0x30),4,auStack_44,0,0,0,0,0,0);
        while (iVar6 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x30)), iVar6 == 0) {
          (*DAT_020a0e18)();
        }
        FUN_020718fc((int)*(char *)(iVar3 + 0xd));
      }
      (**(code **)(**(int **)(iVar10 + 4) + 0xc))();
      func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
      piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 4);
      (**(code **)(*piVar2 + 0x14c))(piVar2,8);
      return;
    }
    uVar5 = 1 << (uVar8 & 0xff);
    uVar7 = (uint)((uVar5 & (byte)(&DAT_020b4084)[iVar6]) != 0);
    if ((uVar7 == 0) && ((DAT_020aff28 & uVar5) != 0)) {
      (&DAT_020b4084)[iVar6] = (&DAT_020b4084)[iVar6] | (byte)uVar5 & 0x3f;
      FUN_02073114(iVar6 + 0x3dcc,1);
      iVar11 = uVar8 * 0x14 + iVar3;
      uVar5 = (uint)*(short *)(iVar11 + 0x12);
      if (uVar5 == 0xffffffff) {
        func_0x021bac28(*(undefined4 *)(param_1 + 0x30),1,*(undefined2 *)(iVar11 + 0x14),
                        *(undefined2 *)(iVar11 + 0x16),*(undefined2 *)(iVar11 + 0x18),
                        *(undefined2 *)(iVar11 + 0x1a),*(undefined2 *)(iVar11 + 0x1c),
                        *(undefined2 *)(iVar11 + 0x1e));
        iVar9 = 0;
        do {
          FUN_02072870(iVar9,*(undefined2 *)(iVar11 + iVar9 * 2 + 0x14));
          iVar9 = iVar9 + 1;
        } while (iVar9 < 6);
      }
      else {
        uVar7 = *(uint *)(&DAT_020b0bac + (uVar5 >> 5) * 4);
        if ((uVar7 & 1 << (uVar5 & 0x1f)) != 0) goto LAB_0214e58c;
        iVar9 = *(short *)(iVar11 + 0x12) * 0xc;
        func_0x021bac78(*(undefined4 *)(param_1 + 0x30),0,
                        *(int *)(param_1 + 0x1c) + iVar9 +
                        *(int *)(*(int *)(param_1 + 0x1c) + iVar9),0,0,0,0,0,0);
        FUN_02075f98(*(short *)(iVar11 + 0x12) * 0xc + *(int *)(param_1 + 0x24));
      }
      if (!bVar1) {
        FUN_0207342c(0x78,0xc);
        bVar1 = true;
      }
      while( true ) {
        uVar12 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x30));
        uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 != 0) break;
        (*DAT_020a0e18)();
      }
    }
LAB_0214e58c:
    uVar8 = uVar8 + 1;
  } while( true );
}

