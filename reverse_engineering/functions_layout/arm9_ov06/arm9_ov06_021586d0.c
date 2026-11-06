
void FUN_021586d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  *(undefined2 *)(param_1 + 0xbc) = 0x100;
  iVar4 = param_1 + 0x7c;
  iVar1 = FUN_0203b404();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar2;
  iVar1 = 2;
  do {
    uVar2 = FUN_02159a30();
    *(undefined4 *)(iVar4 + 8) = uVar2;
    FUN_021544c8(uVar2,*(undefined4 *)(param_1 + 0x1bc));
    FUN_02023894(*(undefined4 *)(*(int *)(iVar4 + 8) + 4),0x2fd003,0);
    local_30 = 0x4c000;
    FUN_021512bc(*(undefined4 *)(iVar4 + 8),&local_30);
    piVar3 = *(int **)(*(int *)(iVar4 + 8) + 4);
    (**(code **)(*piVar3 + 0x94))(piVar3,1 << (uint)*(byte *)(param_1 + 0x1e0));
    piVar3 = *(int **)(*(int *)(iVar4 + 8) + 4);
    (**(code **)(*piVar3 + 0x24))(piVar3,param_1);
    piVar3 = *(int **)(*(int *)(iVar4 + 8) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    FUN_02028330(*(undefined4 *)(*(int *)(iVar4 + 8) + 4));
    iVar1 = iVar1 + -1;
    iVar4 = iVar4 + 0x18;
  } while (0 < iVar1);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x84) + 4),FUN_02159a60);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 4),FUN_02159af4);
  uVar2 = FUN_02159a30();
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  FUN_021544c8(uVar2,*(undefined4 *)(param_1 + 0x1bc));
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),0x220003,0);
  local_2c = 0x80000;
  FUN_021512bc(*(undefined4 *)(param_1 + 0xac),&local_2c);
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,1 << (uint)*(byte *)(param_1 + 0x1e0));
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),FUN_02159a60);
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar3 + 0x24))(piVar3,param_1);
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4));
  iVar1 = FUN_02159a30();
  *(int *)(param_1 + 0xb0) = iVar1;
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0xc) = 0x80000;
  *(undefined4 *)(iVar1 + 0x10) = 0x60000;
  FUN_0214f1cc(iVar1,1);
  local_28 = 0x80000;
  FUN_021512bc(*(undefined4 *)(param_1 + 0xb0),&local_28);
  piVar3 = *(int **)(*(int *)(param_1 + 0xb0) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,0x800);
  piVar3 = *(int **)(*(int *)(param_1 + 0xb0) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 4));
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0x5cd);
  *(code **)(param_1 + 0x7c) = FUN_02159258;
  *(code **)(param_1 + 0x94) = FUN_02159258;
  *(undefined2 *)(param_1 + 0x8e) = 0xffff;
  *(undefined2 *)(param_1 + 0xa6) = 0xffff;
  return;
}

