
void FUN_021c3488(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  FUN_021bda7c(&local_1c,*(undefined4 *)(param_1 + 4));
  local_1c = local_1c + param_2 * 0x1000;
  iVar1 = (int)(local_1c + ((uint)(local_1c >> 0xb) >> 0x14)) >> 0xc;
  FUN_021bd8a4(&local_20,*(undefined4 *)(param_1 + 4));
  local_20 = local_20 + param_3 * 0x1000;
  local_28 = (int)(local_20 + ((uint)(local_20 >> 0xb) >> 0x14)) >> 0xc;
  if (*(short *)(param_1 + 0x9c) < iVar1) {
    iVar1 = (int)*(short *)(param_1 + 0x9c);
  }
  if (iVar1 < *(short *)(param_1 + 0xa0)) {
    iVar1 = (int)*(short *)(param_1 + 0xa0);
  }
  if (*(short *)(param_1 + 0x9e) < local_28) {
    local_28 = (int)*(short *)(param_1 + 0x9e);
  }
  if (local_28 < *(short *)(param_1 + 0xa2)) {
    local_28 = (int)*(short *)(param_1 + 0xa2);
  }
  local_24 = iVar1 << 0xc;
  FUN_021b956c(*(undefined4 *)(param_1 + 4),&local_24);
  local_28 = local_28 << 0xc;
  FUN_021bd884(*(undefined4 *)(param_1 + 4),&local_28);
  return;
}

