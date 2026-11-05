
uint FUN_0200c99c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0x9e;
  if (-1 < (int)param_1) {
    iVar3 = LZCOUNT(param_1);
    param_1 = param_1 << iVar3;
    iVar3 = 0x9e - iVar3;
  }
  uVar1 = (param_1 & 0x7fffffff) >> 8;
  uVar2 = uVar1 | iVar3 << 0x17;
  if ((param_1 & 0xff) == 0) {
    return uVar2;
  }
  if ((param_1 & 0x80) == 0) {
    return uVar2;
  }
  if ((param_1 & 0x7f) != 0 || (uVar1 & 1) != 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

