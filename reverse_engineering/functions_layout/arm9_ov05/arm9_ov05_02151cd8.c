
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02151cd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  _DAT_021d5154 = 2;
  piVar6 = &DAT_0216f6bc;
  uStack_28 = param_4;
  uVar1 = ALWidgetBaseImp::Create(param_1,0x8f,0,1);
  iVar7 = 0;
  do {
    iVar2 = FUN_0215e4e8(param_2,param_3,piVar6[1] - *piVar6,0,0,0x8f);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    iVar3 = FUN_0215e9e4(uVar1,piVar6,iVar2,0x8f,1);
    iVar5 = param_1 + iVar7 * 4;
    *(int *)(iVar5 + 0x94) = iVar3;
    *(int *)(*(int *)(iVar3 + 4) + 0x124) = iVar7;
    func_0x021b7744(*(undefined4 *)(*(int *)(iVar5 + 0x94) + 4),1);
    piVar4 = *(int **)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4);
    (**(code **)(*piVar4 + 0x24))(piVar4,param_1);
    iVar3 = param_1 + iVar7 * 4;
    *(code **)(*(int *)(*(int *)(iVar3 + 0x94) + 4) + 0xec) = FUN_0215201c;
    *(code **)(*(int *)(*(int *)(iVar3 + 0x94) + 4) + 0xe4) = FUN_02152094;
    *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x94) + 4) + 0xaa) = 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x94) + 4) + 0xb1) = 1;
    *(undefined1 *)(param_1 + iVar7 + 0x546) = 0;
    if ((1 < iVar7) && (iVar7 < 6)) {
      FUN_02151fcc(&local_30,iVar2,s_PatternNo_0216f9ec);
      FUN_020239a0(*(undefined4 *)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4));
      iVar3 = iVar7 + 0x80100e;
      FUN_0214d4bc(iVar2,iVar3 - *piVar6);
      FUN_02023c60(*(undefined4 *)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4),local_30,0,local_2c);
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4) + 0x68);
      (**(code **)(*piVar4 + 0xac))(piVar4,0);
      FUN_02023c70(*(undefined4 *)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4),iVar3);
      func_0x021b400c(*(undefined4 *)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4),iVar3);
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 9;
  } while (iVar7 < 7);
  iVar7 = 0;
  do {
    iVar2 = param_1 + iVar7 * 4;
    piVar6 = *(int **)(*(int *)(iVar2 + 0x98) + 4);
    (**(code **)(*piVar6 + 0x160))(piVar6,8,*(undefined4 *)(*(int *)(iVar2 + 0x94) + 4));
    iVar2 = param_1 + iVar7 * 4;
    piVar6 = *(int **)(*(int *)(iVar2 + 0x94) + 4);
    (**(code **)(*piVar6 + 0x160))(piVar6,4,*(undefined4 *)(*(int *)(iVar2 + 0x98) + 4));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  piVar6 = *(int **)(*(int *)(param_1 + 0x94) + 4);
  (**(code **)(*piVar6 + 0x160))(piVar6,8,*(undefined4 *)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4))
  ;
  piVar6 = *(int **)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4);
  (**(code **)(*piVar6 + 0x160))(piVar6,4,*(undefined4 *)(*(int *)(param_1 + 0x94) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x94) + 4),1);
  if (*(int *)(param_1 + 0x3f0) == 1) {
    iVar7 = 2;
    do {
      piVar6 = *(int **)(*(int *)(param_1 + iVar7 * 4 + 0x94) + 4);
      (**(code **)(*piVar6 + 0x148))(piVar6,8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
  }
  return uVar1;
}

