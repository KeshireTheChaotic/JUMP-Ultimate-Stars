
void FUN_03802cb8(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (; (iVar1 < 0x10 && (param_1 != 0)); param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      FUN_037ff068(iVar1,param_2);
    }
    iVar1 = iVar1 + 1;
  }
  return;
}

