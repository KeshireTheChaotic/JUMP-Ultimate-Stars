
void FUN_02154500(int param_1)

{
  int iVar1;
  int local_28 [3];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0214f068(&local_14,*(undefined4 *)(iVar1 + 0x10));
  local_10 = local_14 + 0x5000;
  FUN_02153684(*(undefined4 *)(iVar1 + 0x10),&local_10);
  if (*(int *)(iVar1 + 0x38) != 0) {
    FUN_0214f068(&local_1c);
    local_18 = local_1c + -0x5000;
    FUN_02153684(*(undefined4 *)(iVar1 + 0x38),&local_18);
  }
  FUN_0214f068(local_28 + 2,*(undefined4 *)(iVar1 + 0x10));
  if (0 < local_28[2]) {
    local_28[1] = 0;
    FUN_02153684(*(undefined4 *)(iVar1 + 0x10),local_28 + 1);
    if (*(int *)(iVar1 + 0x38) != 0) {
      local_28[0] = (uint)*(byte *)(iVar1 + 200) << 0xc;
      FUN_02153684(*(undefined4 *)(iVar1 + 0x38),local_28);
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),
                 (&PTR_FUN_02154648_1_02171f14)[*(char *)(iVar1 + 0xc9)]);
  }
  (*(code *)(&PTR_FUN_02154648_1_02171f14)[*(char *)(iVar1 + 0xc9)])(param_1);
  return;
}

