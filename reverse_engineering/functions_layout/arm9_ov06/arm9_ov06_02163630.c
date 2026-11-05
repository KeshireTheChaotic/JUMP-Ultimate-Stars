
undefined4 FUN_02163630(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(param_2 + 4);
  uStack_14 = param_4;
  iVar1 = FUN_0203b404();
  FUN_02163548(*(undefined4 *)(iVar1 + 0x88));
  FUN_02010bb4(0,0x401200,0);
  iVar1 = FUN_02151294();
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0xb0))(*(int **)(iVar1 + 4),0x31305053);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_02151294();
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x400);
  local_18 = 0x89000;
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_18);
  piVar2 = *(int **)(iVar1 + 4);
  if (*(int *)(DAT_02172968 + 4) == 0) {
    (**(code **)(*piVar2 + 0xd4))(piVar2,0);
  }
  else {
    (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(*(int *)(DAT_02172968 + 4) + 4));
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_020839c0(param_1,iVar1);
  FUN_02153324();
  iVar1 = *(int *)(iVar3 + 8);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x50);
  piVar2[3] = *(int *)(iVar3 + 4) << 4;
  piVar2[4] = iVar1 << 4;
  piVar2[5] = 0;
  if (*(byte *)(piVar2 + 9) != (*(byte *)(piVar2 + 9) | 1)) {
    (**(code **)(*piVar2 + 0x18))();
  }
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) | 0x31;
  return 0;
}

