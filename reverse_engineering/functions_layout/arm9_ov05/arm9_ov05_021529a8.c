
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021529a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  _DAT_021d5154 = 5;
  uStack_28 = param_4;
  iVar1 = ALWidgetBaseImp::Create(param_1,0x1f,0,1);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_021533ac);
  local_2c = 0xfff00000;
  FUN_02150a10(iVar1,&local_2c);
  func_0x021b65d8(*(undefined4 *)(iVar1 + 4));
  iVar7 = 0;
  do {
    iVar8 = iVar7 * 0x2c + param_1;
    uVar6 = 0;
    do {
      uVar2 = FUN_0215e9e4(iVar1,&DAT_0216f528,0,0x1f,0);
      iVar4 = iVar8 + uVar6 * 4;
      *(undefined4 *)(iVar4 + 0xd0) = uVar2;
      local_34 = 0;
      local_30 = 0;
      FUN_0214ce68(*(undefined4 *)(iVar4 + 0xd0),&local_30,&local_34);
      iVar4 = iVar8 + uVar6 * 4;
      *(uint *)(*(int *)(*(int *)(iVar4 + 0xd0) + 4) + 0x124) = iVar7 << 0x10 | uVar6 & 0xffff;
      piVar3 = *(int **)(*(int *)(iVar4 + 0xd0) + 4);
      (**(code **)(*piVar3 + 0x24))(piVar3,param_1);
      iVar4 = iVar8 + uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(code **)(*(int *)(*(int *)(iVar4 + 0xd0) + 4) + 0xec) = FUN_02152c7c;
      *(code **)(*(int *)(*(int *)(iVar4 + 0xd0) + 4) + 0xdc) = FUN_02152e60;
      *(code **)(*(int *)(*(int *)(iVar4 + 0xd0) + 4) + 0xe4) = FUN_02152d9c;
      *(undefined1 *)(*(int *)(*(int *)(iVar4 + 0xd0) + 4) + 0xb1) = 1;
    } while ((int)uVar6 < 0xb);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    iVar8 = iVar7 * 0x2c + param_1;
    iVar4 = 0;
    do {
      iVar5 = iVar8 + iVar4 * 4;
      piVar3 = *(int **)(*(int *)(iVar5 + 0xd4) + 4);
      (**(code **)(*piVar3 + 0x160))(piVar3,8,*(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4));
      iVar5 = iVar8 + iVar4 * 4;
      piVar3 = *(int **)(*(int *)(iVar5 + 0xd0) + 4);
      (**(code **)(*piVar3 + 0x160))(piVar3,4,*(undefined4 *)(*(int *)(iVar5 + 0xd4) + 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    iVar8 = iVar7 * 0x2c + param_1;
    iVar4 = 0;
    do {
      iVar5 = iVar8 + iVar4 * 4;
      piVar3 = *(int **)(*(int *)(iVar5 + 0xfc) + 4);
      (**(code **)(*piVar3 + 0x160))(piVar3,1,*(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4));
      iVar5 = iVar8 + iVar4 * 4;
      piVar3 = *(int **)(*(int *)(iVar5 + 0xd0) + 4);
      (**(code **)(*piVar3 + 0x160))(piVar3,2,*(undefined4 *)(*(int *)(iVar5 + 0xfc) + 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xb);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = FUN_0215e9e4(iVar1,&DAT_0216f54c,0,0x1b,0);
  *(int *)(param_1 + 0x180) = iVar7;
  (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),param_1);
  func_0x021b7744(*(undefined4 *)(*(int *)(param_1 + 0x180) + 4),1);
  *(code **)(*(int *)(*(int *)(param_1 + 0x180) + 4) + 0xec) = FUN_02153070;
  *(code **)(*(int *)(*(int *)(param_1 + 0x180) + 4) + 0xdc) = FUN_021530f8;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x180) + 4) + 0xb1) = 1;
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0xd0) + 4));
  return iVar1;
}

