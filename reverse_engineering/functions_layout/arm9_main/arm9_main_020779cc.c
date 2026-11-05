
int FUN_020779cc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = *(byte *)(param_2 + 0xf) & 0xf;
  if ((*(byte *)(param_2 + 0xf) & 0xf) == 0) {
    return 0;
  }
  if (4 < uVar2) {
    return 0;
  }
  iVar3 = (uVar2 - 1) * 2;
  iVar4 = (*(byte *)(param_2 + 0xe) & 0xf) + (int)(char)(&DAT_02092e34)[iVar3];
  iVar3 = ((int)(*(byte *)(param_2 + 0xe) & 0xf0) >> 4) + (int)(char)(&DAT_02092e35)[iVar3];
  if ((-1 < iVar4) && (-1 < iVar3)) {
    bVar5 = SBORROW4(iVar4,5);
    iVar1 = iVar4 + -5;
    if (iVar4 < 5) {
      bVar5 = SBORROW4(iVar3,4);
      iVar1 = iVar3 + -4;
    }
    if (iVar1 < 0 != bVar5) {
      iVar3 = *(int *)(iVar3 * 0x14 + param_1 + iVar4 * 4 + 8);
      if (iVar3 == 0) {
        return 0;
      }
      if (*(char *)(iVar3 + 0x40) != '\0') {
        iVar3 = 0;
      }
      return iVar3;
    }
  }
  return 0;
}

