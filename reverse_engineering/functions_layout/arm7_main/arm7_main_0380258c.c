
uint FUN_0380258c(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_037ff660();
  uVar1 = *(uint *)(param_1 + param_2 * 4 + 0x3c);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else if (uVar1 < 0x2000000) {
    uVar1 = param_1 + uVar1;
  }
  FUN_037ff65c();
  return uVar1;
}

