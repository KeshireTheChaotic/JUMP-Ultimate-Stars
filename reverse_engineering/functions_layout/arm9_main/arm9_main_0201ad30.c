
undefined4 * FUN_0201ad30(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 auStack_120 [256];
  
                    /* JUS-TAG strings=["%.2fK"] */
  uVar8 = 0;
  uVar1 = *(uint *)(param_1 + 0x40c);
  iVar9 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar12 = 0;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x404) + 4);
  uVar7 = *(uint *)(uVar1 + 4);
  while( true ) {
    uVar13 = *(uint *)(uVar7 + 4);
    if (uVar13 == 0) {
      uVar1 = *(uint *)(uVar6 + 4);
    }
    if (uVar13 == 0 && uVar1 == 0) break;
    if ((uVar6 == 0) || (uVar7 <= uVar6)) {
      uVar1 = *(uint *)(uVar7 + 0xc);
      iVar10 = iVar10 + 1;
      if (uVar8 < uVar1) {
        uVar8 = uVar1;
      }
      uVar7 = uVar13;
    }
    else {
      iVar9 = iVar9 + 1;
      uVar6 = *(uint *)(uVar6 + 4);
    }
  }
  uVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + uVar1 * 4 + 0x418);
    uVar1 = uVar1 + 1;
    if (iVar2 != 0) {
      iVar12 = iVar12 + (uint)*(ushort *)(iVar2 + 6);
    }
  } while (uVar1 < 0x20);
  for (puVar3 = *(undefined4 **)(param_1 + 0x4a0); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    iVar11 = iVar11 + 1;
  }
  if (param_2 != 0) {
    uVar4 = FUN_0200c954(*(int *)(param_1 + 0x400) - *(int *)(param_1 + 0x410));
    FUN_0200c5ac(uVar4,0x44800000);
    uVar14 = FUN_0200c85c();
    FUN_02003ce0(auStack_120,s___2fK_0209d93c,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar4 = FUN_0200c954(*(undefined4 *)(param_1 + 0x410));
    FUN_0200c5ac(uVar4,0x44800000);
    uVar14 = FUN_0200c85c();
    FUN_02003ce0(auStack_120,s___2fK_0209d93c,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar4 = FUN_0200c954(*(undefined4 *)(param_1 + 0x400));
    FUN_0200c5ac(uVar4,0x44800000);
    uVar14 = FUN_0200c85c();
    FUN_02003ce0(auStack_120,s___2fK_0209d93c,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar4 = FUN_0200c99c(uVar8);
    uVar4 = FUN_0200c9e4(0x42c80000,uVar4);
    uVar5 = FUN_0200c954(*(undefined4 *)(param_1 + 0x410));
    FUN_0200c5ac(uVar4,uVar5);
  }
  DAT_020a1790 = *(undefined4 *)(param_1 + 0x400);
  DAT_020a1794 = *(int *)(param_1 + 0x400) - *(int *)(param_1 + 0x410);
  DAT_020a1798 = iVar9 - iVar11;
  DAT_020a179c = *(undefined4 *)(param_1 + 0x410);
  DAT_020a17a0 = iVar10;
  DAT_020a17a4 = uVar8;
  DAT_020a17a8 = iVar12;
  return &DAT_020a1790;
}

