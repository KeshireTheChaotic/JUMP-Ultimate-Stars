
undefined4 FUN_0218a758(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_40 [36];
  undefined4 local_c;
  int local_8;
  undefined4 *puStack_4;
  
  local_c = param_2;
  local_8 = param_3;
  puStack_4 = param_4;
  FUN_0218c2e0(&local_c,&local_8);
  if (0 < local_8) {
    uVar1 = FUN_0217583c();
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    if (*(int *)(param_1 + 0x38) == 0) {
      return 1;
    }
    FUN_02002434(*(int *)(param_1 + 0x38),local_c,local_8);
    *(int *)(param_1 + 0x3c) = local_8;
  }
  if (param_4 != (undefined4 *)0x0) {
    uVar1 = param_4[1];
    *(undefined4 *)(param_1 + 0x28) = *param_4;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = param_4[3];
    *(undefined4 *)(param_1 + 0x30) = param_4[2];
    *(undefined4 *)(param_1 + 0x34) = uVar1;
  }
  FUN_02189c7c(auStack_40);
  FUN_02189bd4(param_1 + 0x68,auStack_40);
  FUN_0218ae80(param_1,auStack_40);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 0;
}

