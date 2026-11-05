
uint FUN_0215e95c(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    param_2 = param_1 + 0x2f4;
  }
  uVar1 = param_2;
  while( true ) {
    uVar1 = uVar1 + 0x30;
    if (param_1 + 0x324U <= uVar1) {
      uVar1 = param_1 + 0x24;
    }
    bVar2 = *(int *)(uVar1 + 4) == param_3;
    if ((param_4 != 0) && (bVar2)) break;
    if ((param_4 == 0) && (!bVar2)) {
      return uVar1;
    }
    if (uVar1 == param_2) {
      return 0;
    }
  }
  return uVar1;
}

