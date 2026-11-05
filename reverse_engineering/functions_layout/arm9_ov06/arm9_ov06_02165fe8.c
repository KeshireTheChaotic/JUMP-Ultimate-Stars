
void FUN_02165fe8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar3 = *(int *)(param_1 + 0x30);
  uStack_10 = param_4;
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x78) & 0x400000) != 0) {
    (**(code **)(iVar3 + 0x18))(param_1,iVar3);
    return;
  }
  iVar1 = FUN_02165774();
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 8) != 0) {
      (**(code **)(iVar3 + 0x28))(param_1,iVar3);
      return;
    }
  }
  else {
    iVar1 = FUN_0216578c(param_1);
    if (iVar1 == 0) {
      (**(code **)(iVar3 + 0x14))(param_1,iVar3);
      FUN_0207cec8(*(undefined4 *)(param_1 + 0x10),0x10000000);
      FUN_0207d020(*(undefined4 *)(param_1 + 0x10),0xff);
      FUN_0207d0bc(*(undefined4 *)(param_1 + 0x10),0x10ff,0);
      return;
    }
    if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x150) & 0xffff00) != 0) {
      (**(code **)(iVar3 + 0x14))(param_1,iVar3);
      FUN_0207cec8(*(undefined4 *)(param_1 + 0x10),0x10000000);
      FUN_0207d020(*(undefined4 *)(param_1 + 0x10),0xff);
      FUN_0207d0bc(*(undefined4 *)(param_1 + 0x10),0x10ff,0);
      return;
    }
    FUN_0207d020(*(int *)(param_1 + 0x10),0xff);
    FUN_0207d0bc(*(undefined4 *)(param_1 + 0x10),0xff,0);
    FUN_02165ecc(param_1,iVar3,0);
  }
  iVar1 = FUN_021655cc(param_1);
  if (iVar1 != 0) {
    FUN_02083b74(param_1,FUN_021656ac,1);
    FUN_021650a4(param_1,0x20);
    FUN_02155998(&uStack_10,*(undefined4 *)(param_1 + 0xc),0);
    if (param_1 != 0) {
      FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),
                 *(int *)(iVar3 + 0x1c) - (uint)*(byte *)(iVar3 + 0x27),0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68);
    (**(code **)(*piVar2 + 0xb8))(piVar2,&uStack_10);
    *(uint *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) - (uint)*(byte *)(iVar3 + 0x27);
    FUN_0207cec8(*(undefined4 *)(param_1 + 0x10),0x10000000);
    FUN_0207d020(*(undefined4 *)(param_1 + 0x10),0xff);
    FUN_0207d0bc(*(undefined4 *)(param_1 + 0x10),0x10ff,0);
  }
  (**(code **)(iVar3 + 0x10))(param_1,iVar3);
  return;
}

