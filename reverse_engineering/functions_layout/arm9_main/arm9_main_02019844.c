
void FUN_02019844(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_02019874(param_2);
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  *(short *)(param_1 + 0x12) = (short)((int)(*param_2 + ((uint)(*param_2 >> 0xb) >> 0x14)) >> 0xc);
  return;
}

