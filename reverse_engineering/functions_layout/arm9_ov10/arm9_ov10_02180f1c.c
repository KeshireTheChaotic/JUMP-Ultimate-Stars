
int FUN_02180f1c(uint param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if ((param_1 & 2) != 0) {
    iVar1 = 9;
  }
  if ((param_1 & 8) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x10) != 0) {
    iVar1 = iVar1 + 2;
  }
  if ((param_1 & 0x20) != 0) {
    iVar1 = iVar1 + 2;
  }
  return iVar1;
}

