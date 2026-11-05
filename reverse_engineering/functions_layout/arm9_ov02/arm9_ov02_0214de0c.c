
bool FUN_0214de0c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x48 + *(int *)(param_1 + 0x34);
  switch(*(undefined1 *)(iVar4 + 0x43)) {
  case 0:
    return true;
  case 1:
    iVar3 = 0;
    bVar1 = true;
    do {
      if ((*(short *)(iVar4 + iVar3 * 2 + 0x30) != -1) &&
         (iVar2 = FUN_0214dedc(param_1), iVar2 == 0)) {
        bVar1 = false;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    if (bVar1) {
      return true;
    }
    break;
  case 2:
    return (*(uint *)(&DAT_020b0d34 + (((int)*(short *)(iVar4 + 0x30) & 0xffU) >> 5) * 4) &
           1 << ((int)*(short *)(iVar4 + 0x30) & 0x1fU)) != 0;
  case 3:
    iVar3 = FUN_02070f94();
    if (*(short *)(iVar4 + 0x30) < iVar3) {
      return true;
    }
  }
  return false;
}

