
undefined4 FUN_0216e3d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar1 = FUN_0203b404();
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar3;
  FUN_02010bb4(0,*(undefined4 *)(param_2 + 0x14),0);
  iVar1 = FUN_02151294();
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0xb0))(*(int **)(iVar1 + 4),0x31305053);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_02151294();
  }
  FUN_021544c8(iVar1,*(undefined4 *)(DAT_02172968 + 4));
  local_20 = 0x8a000;
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  FUN_020839c0(param_1,iVar1);
  FUN_0216e538(&local_1c);
  local_1c = *(int *)(param_2 + 4) << 4;
  local_14 = 0;
  local_18 = *(int *)(param_2 + 8) << 4;
  FUN_0216e54c(iVar1,&local_1c);
  if ((*(uint *)(param_2 + 0x20) & 0x10) == 0) {
    FUN_02083950(param_1,*(undefined1 *)(param_2 + 0x1c));
  }
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x25);
  return 0;
}

