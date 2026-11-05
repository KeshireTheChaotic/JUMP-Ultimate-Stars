
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_027e6a68(uint param_1,undefined4 param_2,ushort *param_3,uint param_4,undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined2 uVar15;
  ushort uVar16;
  int iVar17;
  ushort *puVar18;
  int iVar19;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar20;
  bool bVar21;
  int iStack_54;
  int iStack_48;
  ushort auStack_c [6];
  
  iVar5 = DAT_027f97f0;
  if (param_4 == 0) {
    return;
  }
  if (*(ushort *)(DAT_027f97f0 + 0x3e) < param_4) {
    return;
  }
  if (param_1 == *(ushort *)(DAT_027f97f0 + 0x188)) {
    return;
  }
  if (0xf < param_1) {
    return;
  }
  if ((param_4 & 1) != 0) {
    return;
  }
  bVar4 = true;
  if ((int)param_4 < 1) {
    return;
  }
  iVar19 = DAT_027f97f0 + 0x1f8 + param_1 * 0x10;
  iStack_54 = 0x200;
  iStack_48 = 2;
  do {
    if (bVar4) {
      bVar4 = false;
      puVar18 = param_3;
      param_3 = auStack_c;
    }
    else {
      puVar18 = param_3 + 1;
      param_4 = param_4 - 2;
    }
    uVar16 = *param_3;
    iVar17 = (uVar16 & 0xff) << 1;
    if ((uVar16 & 0xff) == 0) {
      iVar17 = iStack_54;
    }
    bVar20 = (uVar16 & 0x1000) != 0;
    bVar21 = (uVar16 & 0x800) != 0;
    if (bVar20) {
      iVar7 = iStack_48;
    }
    else {
      iVar7 = 0;
    }
    if (bVar21) {
      iVar6 = iStack_48;
    }
    else {
      iVar6 = 0;
    }
    iVar7 = iVar17 + iVar6 + iVar7;
    param_4 = param_4 - iVar7;
    if ((int)param_4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x027e6bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    uVar12 = uVar16 & 0xf00;
    puVar13 = (ushort *)((int)puVar18 + iVar17);
    param_3 = (ushort *)((int)puVar18 + iVar7);
    puVar14 = puVar13;
    uVar16 = 0xffff;
    if (bVar21) {
      uVar8 = uVar12 >> 8 & 7;
      puVar9 = (ushort *)(iVar19 + uVar8 * 2);
      uVar1 = *(ushort *)(iVar19 + uVar8 * 2);
      puVar14 = puVar13 + 1;
      uVar2 = *puVar13;
      if ((uVar1 & 1) != 0) {
        *puVar9 = uVar2 << 1;
        uVar16 = uVar2;
        goto LAB_027e6c3c;
      }
      uVar16 = uVar2 * 2;
      if (0xff < (ushort)(uVar1 + uVar2 * -2)) {
        *puVar9 = uVar16;
        goto LAB_027e6c3c;
      }
    }
    else {
LAB_027e6c3c:
      if (((!bVar20) || (((uint)*puVar14 & 1 << (*(ushort *)(iVar5 + 0x188) & 0xff)) != 0)) &&
         (iVar17 != 0)) {
        puVar10 = (undefined2 *)FUN_03808074();
        *puVar10 = 0x82;
        puVar10[1] = 0;
        puVar10[2] = 0x15;
        puVar10[3] = (short)(uVar12 >> 8);
        *(undefined4 *)(puVar10 + 4) = param_5;
        *(ushort **)(puVar10 + 6) = puVar18;
        puVar10[8] = (short)iVar17;
        puVar10[9] = (short)param_1;
        puVar10[0x10] = *(undefined2 *)(iVar5 + 0x188);
        puVar10[0xd] = uVar16;
        uVar3 = *(undefined2 *)(iVar5 + 0x30);
        uVar15 = *(undefined2 *)(iVar5 + 0x32);
        if (*(short *)(iVar5 + 0x188) == 0) {
          uVar11 = uVar3;
        }
        else {
          uVar11 = uVar15;
        }
        puVar10[0x20] = uVar11;
        if (*(short *)(iVar5 + 0x188) != 0) {
          uVar15 = uVar3;
        }
        puVar10[0x21] = uVar15;
        FUN_038080d0();
      }
    }
    if ((int)param_4 < 1) {
      return;
    }
  } while( true );
}

