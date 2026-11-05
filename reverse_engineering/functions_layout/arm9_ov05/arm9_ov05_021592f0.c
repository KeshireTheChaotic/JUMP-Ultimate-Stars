
void FUN_021592f0(int param_1)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02152964(&local_14,*(undefined4 *)(iVar1 + 0x44));
  local_10 = local_14 + -0x30000;
  FUN_02150070(*(undefined4 *)(iVar1 + 0x44),&local_10);
  FUN_02152964(&local_18,*(undefined4 *)(iVar1 + 0x44));
  FUN_0215ee88(iVar1 + 0x4b8,0,0,(int)(local_18 + ((uint)(local_18 >> 0xb) >> 0x14)) >> 0xc,0x100,
               0xc0);
  FUN_02152964(&local_1c,*(undefined4 *)(iVar1 + 0x44));
  if (local_1c < -0xc0000) {
    local_20 = 0xfff40000;
    FUN_02150070(*(undefined4 *)(iVar1 + 0x44),&local_20);
    *(undefined1 *)(iVar1 + 0x4e6) = 1;
    FUN_0215ee44(iVar1 + 0x4b8);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021592d4);
  }
  return;
}

