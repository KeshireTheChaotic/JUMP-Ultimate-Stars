
void FUN_02059d64(int param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_3 & 0xff);
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (ushort *)0x0) {
    return;
  }
  if ((*param_2 & uVar1) == 0) {
    return;
  }
  if ((param_2[1] & uVar1) == 0) {
    return;
  }
  FUN_02059d28(param_1,(uint)*param_2,param_2 + 2);
  return;
}

