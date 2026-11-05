
int FUN_02004cec(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_2;
    uVar2 = (uint)*param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (uVar2 != bVar1) break;
    if (uVar2 == 0) {
      return 0;
    }
    param_3 = param_3 + -1;
  }
  return uVar2 - bVar1;
}

