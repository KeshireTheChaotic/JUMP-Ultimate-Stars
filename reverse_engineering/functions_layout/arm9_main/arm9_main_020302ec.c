
void FUN_020302ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_02030110(param_1 + 0x10,&uStack_c);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}

