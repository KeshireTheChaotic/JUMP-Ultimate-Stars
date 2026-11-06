
uint FUN_0200238c(undefined2 *param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_02004b04(param_2);
  if (param_1 == (undefined2 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        if (*param_2 == '\0') {
          *param_1 = 0;
          return uVar3;
        }
        iVar2 = FUN_02002334(param_1,param_2,iVar1);
        param_1 = param_1 + 1;
        if (iVar2 < 1) {
          return 0xffffffff;
        }
        param_2 = param_2 + iVar2;
        iVar1 = iVar1 - iVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
  }
  return uVar3;
}

