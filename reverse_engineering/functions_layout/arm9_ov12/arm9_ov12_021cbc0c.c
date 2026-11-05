
/* JUS-CLASS ALFont_021d4f60::vfunc_07 [class-virtual] slot 7 of vtable 021d4f60 (own slot, not
   inherited) */

int ALFont_021d4f60::vfunc_07(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined2 uVar8;
  short extraout_r1;
  short extraout_r1_00;
  short extraout_r1_01;
  uint uVar9;
  int extraout_r1_02;
  short sVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  short sStack_3c;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  undefined4 uStack_18;
  
  iVar13 = (param_2 * -0x72594cbd >> 0x10 & 0xff) * 4;
  uStack_18 = param_4;
  iVar1 = FUN_021cab0c(*(int *)(param_1 + 0x54) + iVar13,param_2 & 0xffff,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_021cb528(param_1);
    iVar11 = iVar1 * 8;
    uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x40) + iVar11);
    if (uVar9 != 0xffff) {
      FUN_021caabc(*(int *)(param_1 + 0x54) + (uVar9 * -0x72594cbd >> 0x10 & 0xff) * 4,
                   *(int *)(param_1 + 0x40) + iVar11,param_1);
    }
    *(short *)(*(int *)(param_1 + 0x40) + iVar11) = (short)param_2;
    *(undefined2 *)(*(int *)(param_1 + 0x40) + iVar11 + 2) = 1;
    FUN_021caa18(*(int *)(param_1 + 0x54) + iVar13,*(int *)(param_1 + 0x40) + iVar11,param_1);
    uVar12 = *(ushort *)(param_1 + 0x38);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x20))();
    uVar2 = FUN_0200d338(uVar2,(uint)uVar12);
    FUN_0200d338(iVar1,uVar2);
    iVar13 = extraout_r1_02 * (uint)uVar12;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x20))();
    uVar2 = FUN_0200d338(uVar2,*(undefined2 *)(param_1 + 0x38));
    iVar3 = FUN_0200d338(iVar1,uVar2);
    iVar3 = (uint)*(ushort *)(param_1 + 0x3a) * iVar3;
    *(short *)(*(int *)(param_1 + 0x6c) + iVar11) = (short)iVar13;
    *(short *)(*(int *)(param_1 + 0x6c) + iVar11 + 2) = (short)iVar3;
    *(undefined2 *)(*(int *)(param_1 + 0x6c) + iVar11 + 6) = *(undefined2 *)(param_1 + 0x3a);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(*(int **)(param_1 + 0x4c),param_2);
    if (iVar4 == 0) {
      uVar8 = *(undefined2 *)(param_1 + 0x38);
    }
    else {
      uVar8 = (undefined2)((int)(uint)*(ushort *)(param_1 + 0x38) >> 1);
    }
    *(undefined2 *)(*(int *)(param_1 + 0x6c) + iVar11 + 4) = uVar8;
    piVar5 = *(int **)(param_1 + *(int *)(param_1 + 100) * 4 + 0x28);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x40))(piVar5,0,&DAT_02093c3c);
    uVar9 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))(*(int **)(param_1 + 0x4c),param_2);
    uVar12 = *(ushort *)(param_1 + 0x38);
    uVar6 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))();
    if (uVar6 == 0) {
      sStack_3c = *(short *)(param_1 + 0x38);
      uVar2 = FUN_0200d338(*(undefined2 *)(*(int *)(param_1 + 0x30) + 8),sStack_3c);
      FUN_0200d338(uVar9,uVar2);
      sStack_3c = extraout_r1_01 * sStack_3c;
      sVar10 = *(short *)(param_1 + 0x3a);
      sStack_1e = FUN_0200d338(uVar9,uVar2);
      sStack_1e = sVar10 * sStack_1e;
    }
    else if (uVar9 < uVar6) {
      uVar12 = *(ushort *)(param_1 + 0x38);
      uVar2 = FUN_0200d338(*(undefined2 *)(*(int *)(param_1 + 0x30) + 8),(uint)uVar12);
      FUN_0200d338(uVar9 >> 1,uVar2);
      sStack_3c = (short)((uint)uVar12 * (uVar9 & 1) >> 1) + extraout_r1 * uVar12;
      sVar10 = *(short *)(param_1 + 0x3a);
      sStack_1e = FUN_0200d338(uVar9 >> 1,uVar2);
      sStack_1e = sVar10 * sStack_1e;
      uVar12 = uVar12 >> 1;
    }
    else {
      sStack_3c = *(short *)(param_1 + 0x38);
      iVar11 = uVar9 - (uVar6 >> 1);
      uVar2 = FUN_0200d338(*(undefined2 *)(*(int *)(param_1 + 0x30) + 8),sStack_3c);
      FUN_0200d338(iVar11,uVar2);
      sStack_3c = extraout_r1_00 * sStack_3c;
      sVar10 = *(short *)(param_1 + 0x3a);
      sStack_1e = FUN_0200d338(iVar11,uVar2);
      sStack_1e = sVar10 * sStack_1e;
    }
    sStack_20 = sStack_3c;
    sStack_1c = sStack_3c + uVar12;
    sStack_1a = sStack_1e + sVar10;
    (**(code **)(*piVar5 + 0x70))(piVar5,iVar13,iVar3,*(undefined4 *)(param_1 + 0x30),&sStack_20);
    piVar7 = *(int **)(param_1 + *(int *)(param_1 + 100) * 4 + 0x28);
    (**(code **)(*piVar7 + 0x4c))(piVar7,piVar5);
  }
  else {
    FUN_021cb590(param_1,iVar1);
    iVar1 = (iVar1 - *(int *)(param_1 + 0x40)) * 0x2000 >> 0x10;
  }
  return iVar1;
}

