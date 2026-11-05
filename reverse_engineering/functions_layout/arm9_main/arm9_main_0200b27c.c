
int FUN_0200b27c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint local_20;
  uint local_1c;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  uStack_8 = param_3;
  local_c = param_2;
  puVar1 = &local_20;
  uVar2 = *(uint *)(param_1 + 8);
  if (0x3fffffff - uVar2 < param_2) {
    FUN_0200b30c();
  }
  if (uVar2 < 0x15555555) {
    local_1c = FUN_0200d338((uVar2 + 1) * 3,5);
    if (local_1c < local_c) {
      puVar1 = &local_c;
    }
    else {
      puVar1 = &local_1c;
    }
    return uVar2 + *puVar1;
  }
  if (0x2aaaaaa9 < uVar2) {
    return 0x3fffffff;
  }
  local_20 = uVar2 + 1 >> 1;
  if (local_20 < local_c) {
    puVar1 = &local_c;
  }
  return uVar2 + *puVar1;
}

