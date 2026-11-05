
void FUN_0218a6e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0xc) == 4) {
    local_c = param_2;
    local_8 = param_3;
    uStack_4 = param_4;
    FUN_0218c2e0(&local_c,&local_8);
    FUN_0218ad38(param_1,local_c,local_8);
    *(undefined4 *)(param_1 + 0xc) = 6;
  }
  return;
}

