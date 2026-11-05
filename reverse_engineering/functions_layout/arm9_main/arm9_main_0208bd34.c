
void FUN_0208bd34(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    FUN_0208a1e0(param_2 << 8 | uVar2 + 0x1c,uVar2 * 0xc + param_1,0xc,0xffff,param_4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  FUN_0208a1e0(param_2 << 8 | 0x22,param_1 + 0x48,4,0xffff,param_4);
  iVar1 = thunk_FUN_02057adc();
  if (iVar1 == 0 && param_2 == 0) {
    FUN_02070cf0(0,param_1);
  }
  if (param_3 < 1) {
    return;
  }
  FUN_0208bdc4(param_3);
  return;
}

