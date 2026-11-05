
void FUN_020697d8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_410 [1028];
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  FUN_02050f40(auStack_410,0xedb88320);
  uVar1 = FUN_02050e5c(auStack_410,param_1,0x3c);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return;
}

