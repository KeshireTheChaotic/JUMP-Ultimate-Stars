
void FUN_0215edbc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  }
  iVar1 = FUN_0203b414(3);
  iVar1 = FUN_0214ec98(*(undefined4 *)(&DAT_021619ac + (uint)*(byte *)(param_1 + 0x6a) * 8),
                       (&PTR_s_ending_staff_back00_dig_021619b0)
                       [(uint)*(byte *)(param_1 + 0x6a) * 2],*(undefined4 *)(iVar1 + 0x88));
  FUN_0215101c(iVar1,0);
  iVar2 = FUN_02034db8();
  FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_ending_staff_back_y_ncl_02161a60);
  local_18 = 0;
  local_14 = 0xfff00000;
  FUN_0214f418(iVar1,&local_14,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(int *)(param_1 + 0x10) = iVar1;
  iVar1 = FUN_0203b424(3);
  iVar1 = FUN_0214ec98(*(undefined4 *)(&DAT_021619ac + (uint)*(byte *)(param_1 + 0x6b) * 8),
                       (&PTR_s_ending_staff_back00_dig_021619b0)
                       [(uint)*(byte *)(param_1 + 0x6b) * 2],*(undefined4 *)(iVar1 + 0x88));
  FUN_0215101c(iVar1,0);
  iVar2 = FUN_02034db8();
  FUN_0201710c(*(undefined4 *)(iVar2 + 4),s_ending_staff_back_b_ncl_02161a78);
  local_20 = 0;
  local_1c = 0x100000;
  FUN_0214f418(iVar1,&local_1c,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(int *)(param_1 + 0x1c) = iVar1;
  *(char *)(param_1 + 0x6a) = *(char *)(param_1 + 0x6a) + '\x01';
  *(char *)(param_1 + 0x6b) = *(char *)(param_1 + 0x6b) + '\x01';
  if (3 < *(byte *)(param_1 + 0x6a)) {
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  if (3 < *(byte *)(param_1 + 0x6b)) {
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  return;
}

