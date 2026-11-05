
undefined4 FUN_0216cb04(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar2 = FUN_0203b404();
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar7;
  FUN_02010bb4(0,param_2[2],0);
  iVar2 = FUN_02151294();
  *(int *)(param_1 + 0xc) = iVar2;
  iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0xb0))(*(int **)(iVar2 + 4),0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_02151294();
  }
  local_18 = 0x8a000;
  FUN_021512bc(iVar2,&local_18);
  piVar3 = *(int **)(iVar2 + 4);
  if (*(int *)(DAT_02172968 + 4) == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(*(int *)(DAT_02172968 + 4) + 4));
  }
  uVar4 = (uint)*(byte *)(*param_2 + 0x34);
  if (uVar4 != 0) {
    if (*(char *)(*param_2 + 0x35) == -1) {
      FUN_02023738(*(undefined4 *)(iVar2 + 4),uVar4 * -0x100);
    }
    else {
      FUN_02023738(*(undefined4 *)(iVar2 + 4),uVar4 << 8);
    }
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_020839c0(param_1,iVar2);
  iVar5 = *param_2;
  iVar6 = *(int *)(iVar5 + 0x18);
  iVar2 = *(int *)(iVar5 + 0x10);
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x50);
  piVar3[3] = (*(int *)(iVar5 + 0xc) * (int)*(char *)(iVar5 + 0x35) + *(int *)(iVar5 + 0x14)) * 0x10
  ;
  piVar3[4] = (iVar6 + iVar2) * 0x10;
  piVar3[5] = 0;
  if (*(byte *)(piVar3 + 9) != (*(byte *)(piVar3 + 9) | 1)) {
    (**(code **)(*piVar3 + 0x18))();
  }
  *(byte *)(piVar3 + 9) = *(byte *)(piVar3 + 9) | 0x31;
  FUN_02083950(param_1,*(char *)(*param_2 + 0x35) == -1);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(*param_2 + 0x37);
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return 0;
}

