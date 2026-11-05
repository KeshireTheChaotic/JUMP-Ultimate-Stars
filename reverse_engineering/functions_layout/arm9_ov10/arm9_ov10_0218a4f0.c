
void FUN_0218a4f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0xc) != 7) {
    *(undefined4 *)(param_1 + 0xc) = 7;
    local_10 = param_1;
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_02001540(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),&local_10);
    FUN_020012a4(*(undefined4 *)(*(int *)(local_10 + 8) + 0x10),&local_10);
  }
  return;
}

