
void FUN_02155100(int param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02152964(&local_10,*(undefined4 *)(iVar1 + 0x410));
  local_c = local_10 + -0x30000;
  FUN_02150070(*(undefined4 *)(iVar1 + 0x410),&local_c);
  FUN_02152964(&local_14,*(undefined4 *)(iVar1 + 0x410));
  if (local_14 < 0) {
    local_18 = 0;
    FUN_02150070(*(undefined4 *)(iVar1 + 0x410),&local_18);
    FUN_02155680(iVar1);
    *(undefined4 *)(iVar1 + 0x454) = 0;
    FUN_02154edc(iVar1);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x3d0) + 4),FUN_021551a0);
  }
  FUN_021556d8(iVar1,0);
  return;
}

