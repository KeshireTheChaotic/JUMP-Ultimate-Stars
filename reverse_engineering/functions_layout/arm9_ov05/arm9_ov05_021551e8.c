
void FUN_021551e8(int param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02152964(&local_10,*(undefined4 *)(iVar1 + 0x410));
  local_c = local_10 + 0x30000;
  FUN_02150070(*(undefined4 *)(iVar1 + 0x410),&local_c);
  FUN_02152964(&local_14,*(undefined4 *)(iVar1 + 0x410));
  if (0xc0000 < local_14) {
    local_18 = 0xc0000;
    FUN_02150070(*(undefined4 *)(iVar1 + 0x410),&local_18);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x3d0) + 4),FUN_02155274);
  }
  FUN_021556d8(iVar1,0);
  return;
}

