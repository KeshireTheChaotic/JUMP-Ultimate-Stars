
/* WARNING: Removing unreachable block (ram,0x02150f10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov05 */

int ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int local_2c;
  int iStack_28;
  
  _DAT_021d5154 = 1;
  iStack_28 = param_4;
  iVar2 = ALWidgetBaseImp::Create(param_1,0xdf,0,0);
  FUN_0214d438();
  DAT_020a0dd0 = *(undefined4 *)(param_4 + 4);
  iVar3 = func_0x021caa0c(s_font_jskfont_aft_0216f9d8,0,0);
  FUN_02150104();
  iVar8 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    iVar4 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0xa01000,iVar8,0,0,0xdf);
    FUN_021509f8(auStack_64,0xfffffff2,0xfffffff8,0xb,8);
    func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4),iVar8 + 0x875f,auStack_64)
    ;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x2a);
  iVar8 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    iVar4 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,iVar8 + 6,0,0,0xdf);
    FUN_021509f8(auStack_5c,0xfffffff5,0xfffffff8,8,8);
    func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4),iVar8 + 0x8740,auStack_5c)
    ;
    uVar9 = 0xfffffff8;
    for (iVar4 = 0; iVar5 = FUN_0214e4fc(iVar8), iVar4 < iVar5; iVar4 = iVar4 + 1) {
      iVar5 = FUN_0203b3f4();
      iVar5 = FUN_0215e2d4(*(undefined4 *)(iVar5 + 0x88),0x810000,
                           (char)(&DAT_0216d5d0)[iVar8] + iVar4,0,0,0xdf,param_2,param_3,uVar9);
      FUN_021509f8(auStack_54,uVar9,uVar9,8,8);
      func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar5 + 4),
                      iVar4 + (uint)(ushort)(&DAT_0216f4e4)[iVar8],auStack_54);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  iVar8 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    iVar4 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,iVar8 + 0x12,0,0,0xdf);
    FUN_021509f8(auStack_4c,0xfffffff0,0xfffffff8,0x10,8);
    func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4),iVar8 + 0x8748,auStack_4c)
    ;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  iVar8 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    iVar4 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),0x800000,iVar8 + 0xe,0,0,0xdf);
    FUN_021509f8(auStack_44,0xfffffff4,0xfffffff8,0xc,8);
    func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4),iVar8 + 0x874d,auStack_44)
    ;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  iVar8 = FUN_0203b3f4();
  iVar8 = FUN_0215e2d4(*(undefined4 *)(iVar8 + 0x88),0x800000,0x37,0,0,0xdf);
  FUN_021509f8(auStack_3c,0,0xfffffff8,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar8 + 4),0x8752,auStack_3c);
  iVar8 = FUN_0203b3f4();
  iVar8 = FUN_0215e2d4(*(undefined4 *)(iVar8 + 0x88),0x800000,0x34,0,0,0xdf);
  FUN_021509f8(auStack_34,0,0xfffffff8,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar8 + 4),0x8753,auStack_34);
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  FUN_0214d4cc();
  iVar8 = *(int *)(param_1 + 0x3f0);
  FUN_0214d438();
  uVar9 = _DAT_021d5154;
  DAT_020a0dd0 = *(undefined4 *)(param_4 + 4);
  uVar7 = *(undefined4 *)(iVar2 + 4);
  iVar3 = thunk_FUN_0201a228(0x17c,s_ALWidgetImp_h_0216f4a4,s_Create_0216f434,0xb5);
  if (iVar3 != 0) {
    func_0x021acb3c(iVar3,uVar7,uVar9,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar3 = FUN_021504fc();
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0x165) = 0;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0x164) = 0;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0x114) = 1;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x144) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x13c) = 1;
  func_0x021b5898(*(undefined4 *)(iVar3 + 4));
  func_0x021b5900(*(undefined4 *)(iVar3 + 4),0xf0,0x90);
  local_68 = 0x18000;
  local_6c = 0;
  FUN_0214ce68(iVar3,&local_6c,&local_68);
  func_0x021ad6cc(*(undefined4 *)(iVar3 + 4),0x10);
  *(code **)(*(int *)(iVar3 + 4) + 0x14c) = FUN_021514e4;
  if (iVar8 == 0) {
    *(code **)(*(int *)(iVar3 + 4) + 0x178) = FUN_0215152c;
  }
  func_0x021b65e8(*(undefined4 *)(iVar3 + 4),4,FUN_021516b4);
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xb1) = 1;
  *(code **)(*(int *)(iVar3 + 4) + 0xe4) = FUN_02151650;
  func_0x021ac948(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0x1a8))(*(int **)(iVar3 + 4),1);
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  iVar8 = FUN_021504fc(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x160));
  piVar6 = *(int **)(*(int *)(iVar8 + 4) + 100);
  (**(code **)(*piVar6 + 0xa4))(piVar6,1);
  piVar6 = *(int **)(*(int *)(iVar8 + 4) + 100);
  (**(code **)(*piVar6 + 0xa8))(piVar6,6);
  FUN_0214d4cc();
  *(int *)(param_1 + 0x68) = iVar3;
  cVar1 = (&DAT_0216d53f)[*(int *)(param_1 + 0x3f0) * 8];
  for (iVar3 = 0; iVar3 < cVar1; iVar3 = iVar3 + 1) {
    iVar8 = (int)(char)(&DAT_0216d540)[iVar3 + *(int *)(param_1 + 0x3f0) * 8];
    if (iVar8 == 5) {
      iVar4 = FUN_0215e4e8(param_2,param_3,iRam0216f870 - iRam0216f86c,0,0,0x8f);
      uVar9 = FUN_0215e9e4(iVar2,0x216f86c,iVar4,0x8f,1);
    }
    else {
      iVar4 = FUN_0203b3f4();
      iVar5 = *(int *)(&DAT_0216f7b8 + iVar8 * 0x24);
      iVar4 = FUN_0215e2d4(*(undefined4 *)(iVar4 + 0x88),iVar5,
                           *(int *)(&DAT_0216f7bc + iVar8 * 0x24) - iVar5,0,0,0x9f);
      uVar9 = FUN_0215e9e4(iVar2,&DAT_0216f7b8 + iVar8 * 0x24,iVar4,0x9f,0);
    }
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x6c) = uVar9;
    if (iVar4 != 0) {
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    }
    if (iVar8 < 5) {
      local_2c = (iVar3 * -0x32 + 0x100) * 0x1000;
      FUN_02150a10(*(undefined4 *)(param_1 + iVar3 * 4 + 0x6c),&local_2c);
    }
    iVar4 = param_1 + iVar3 * 4;
    *(int *)(*(int *)(*(int *)(iVar4 + 0x6c) + 4) + 0x124) = iVar8;
    piVar6 = *(int **)(*(int *)(iVar4 + 0x6c) + 4);
    (**(code **)(*piVar6 + 0x24))(piVar6,param_1);
    iVar4 = param_1 + iVar3 * 4;
    *(undefined1 *)(*(int *)(*(int *)(iVar4 + 0x6c) + 4) + 0xb1) = 1;
    if (iVar8 == 6) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar4 + 0x6c);
    }
    else if (iVar8 == 3) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar4 + 0x6c);
    }
  }
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4),0x510000,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x6c) + 4) + 0x68) + 0x6c))();
    func_0x021b3f78(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4),0x510000);
    func_0x021b3fb0(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4),0x510000);
    func_0x021b3fc4(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4),0x510001);
  }
  return iVar2;
}

