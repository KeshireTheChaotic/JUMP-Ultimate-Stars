
void FUN_021bd800(int param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_021bd8a4(&local_14,*(undefined4 *)(iVar1 + 0x18));
  local_10 = local_14 + 0xf000;
  FUN_021bd884(*(undefined4 *)(iVar1 + 0x18),&local_10);
  FUN_021bd8a4(&local_1c,*(undefined4 *)(iVar1 + 0x3c));
  local_18 = local_1c + -0xc000;
  FUN_021bd884(*(undefined4 *)(iVar1 + 0x3c),&local_18);
  FUN_021bd8a4(&local_20,*(undefined4 *)(iVar1 + 0x18));
  if (0 < local_20) {
    local_24 = 0;
    FUN_021bd884(*(undefined4 *)(iVar1 + 0x18),&local_24);
    local_28 = 0x60000;
    FUN_021bd884(*(undefined4 *)(iVar1 + 0x3c),&local_28);
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21bd8b9);
  }
  FUN_021bda04(iVar1);
  return;
}

