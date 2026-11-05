
void FUN_02150360(int param_1,int param_2,short param_3,undefined4 param_4)

{
  short *psVar1;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  psVar1 = *(short **)(*(int *)(param_2 + 4) + 0x10);
  psVar1[1] = param_3;
  local_10 = ((int)psVar1[1] + (int)*(short *)(param_1 + 0x22)) * 0x1000;
  local_c = ((int)*psVar1 + (int)*(short *)(param_1 + 0x20)) * 0x1000;
  uStack_8 = param_4;
  FUN_0214e1b8(param_2,&local_c,&local_10);
  return;
}

