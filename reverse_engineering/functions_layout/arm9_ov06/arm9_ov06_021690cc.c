
undefined4 FUN_021690cc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  *(int *)(param_1 + 0x20) = *param_2;
  uStack_10 = param_4;
  FUN_020839c0(param_1,*(undefined4 *)(*param_2 + 8));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*param_2 + 0xc);
  iVar1 = param_2[3];
  piVar2 = *(int **)(*(int *)(*(int *)(*param_2 + 8) + 4) + 0x50);
  piVar2[3] = param_2[2] << 4;
  piVar2[4] = iVar1 << 4;
  piVar2[5] = 0;
  if (*(byte *)(piVar2 + 9) != (*(byte *)(piVar2 + 9) | 1)) {
    (**(code **)(*piVar2 + 0x18))();
  }
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) | 0x31;
  local_14 = 0x1000;
  FUN_02169194(*(undefined4 *)(*param_2 + 8),&local_14);
  local_18 = 0x1000;
  FUN_021691b0(*(undefined4 *)(*param_2 + 8),&local_18);
  return 0;
}

