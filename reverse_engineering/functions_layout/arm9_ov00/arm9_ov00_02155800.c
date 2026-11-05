
void FUN_02155800(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 4);
  uStack_10 = param_4;
  if (param_2 == 0) {
    FUN_0207342c(0x78,3);
    local_20 = (int)*(short *)(iVar1 + 0xa2) << 0xc;
    local_1c = (int)*(short *)(iVar1 + 0xa0) << 0xc;
    FUN_0214f418(param_1,&local_1c,&local_20);
  }
  else {
    local_18 = (int)*(short *)(iVar1 + 0xa2) << 0xc;
    local_14 = (int)*(short *)(iVar1 + 0xa0) << 0xc;
    FUN_0214f418(param_1,&local_14,&local_18);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x44) != 0) {
    FUN_0214ed84();
  }
  return;
}

