
int FUN_0200da58(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  param_2 = param_2 + -1;
  iVar2 = 0;
  if (-1 < param_2) {
    do {
      iVar1 = iVar2 + param_2 >> 1;
      uVar3 = *(uint *)(param_1 + iVar1 * 0xc);
      iVar4 = param_1 + iVar1 * 0xc;
      if (param_3 < uVar3) {
        param_2 = iVar1 + -1;
      }
      else {
        if (param_3 <= uVar3 + (*(uint *)(iVar4 + 4) & 0xfffffffe)) {
          return iVar4;
        }
        iVar2 = iVar1 + 1;
      }
    } while (iVar2 <= param_2);
  }
  return 0;
}

