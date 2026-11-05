
int FUN_02042460(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_18;
  
  local_18 = param_4;
  local_18 = FUN_0201a228(0x3c);
  if (local_18 != 0) {
    *(undefined1 *)(local_18 + 8) = 0;
    *(undefined4 *)(local_18 + 0x10) = param_2;
    *(undefined4 *)(local_18 + 0xc) = param_2;
    *(undefined4 *)(local_18 + 0x18) = param_3;
    *(undefined4 *)(local_18 + 0x14) = param_3;
    *(int *)(local_18 + 0x20) = param_4;
    *(int *)(local_18 + 0x1c) = param_4;
    *(undefined4 *)(local_18 + 0x28) = 0;
    *(undefined4 *)(local_18 + 0x24) = 0;
    *(undefined4 *)(local_18 + 0x30) = 0;
    *(undefined4 *)(local_18 + 0x2c) = 0;
    *(undefined4 *)(local_18 + 0x34) = 0;
    *(undefined1 *)(local_18 + 0x38) = 0;
  }
  FUN_02030110(param_1 + 0x424,&local_18);
  DAT_020a0c3d = 1;
  DAT_020a0c36 = 1;
  return local_18;
}

