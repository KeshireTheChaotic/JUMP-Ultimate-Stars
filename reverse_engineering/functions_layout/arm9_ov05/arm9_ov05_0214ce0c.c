
void FUN_0214ce0c(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  *(undefined2 *)(param_1 + 0x58) = param_2;
  *(undefined2 *)(param_1 + 0x5a) = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_10 = ((int)*(short *)(param_1 + 0x56) + (int)*(short *)(param_1 + 0x5a)) * 0x1000;
    local_c = ((int)*(short *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0x58)) * 0x1000;
    uStack_8 = param_4;
    FUN_0214ce68(*(int *)(param_1 + 0x10),&local_c,&local_10);
  }
  return;
}

