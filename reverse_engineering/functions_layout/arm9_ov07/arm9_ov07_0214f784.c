
void FUN_0214f784(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x92;
  iVar2 = 0;
  if ((3 < param_2) && (param_2 < 7)) {
    iVar2 = 1;
  }
  if (iVar2 == 0) {
    if ((7 < param_2) && (param_2 < 0x10)) {
      iVar2 = (param_2 - 8) * 4;
      iVar1 = *(int *)(&DAT_02168a3c + iVar2);
      if ((param_2 == 0xc) && (*(char *)(param_1 + 0xac) != '\0')) {
        iVar1 = 4;
      }
    }
  }
  else {
    iVar1 = *(int *)(&DAT_02168a20 + (param_2 - 4) * 4);
  }
  if (iVar1 != 0x92) {
    func_0x021bd730(*(undefined4 *)(param_1 + 0x80),iVar1,0,iVar2,param_4);
  }
  return;
}

