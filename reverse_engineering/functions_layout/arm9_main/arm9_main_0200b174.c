
void FUN_0200b174(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (*(int *)param_1 << 0x1f < 0) {
    uVar1 = *(uint *)(param_1 + 4);
  }
  else {
    uVar1 = (uint)(*param_1 >> 1);
  }
  FUN_0200b19c(param_1,0,uVar1,param_2,param_3,0);
  return;
}

