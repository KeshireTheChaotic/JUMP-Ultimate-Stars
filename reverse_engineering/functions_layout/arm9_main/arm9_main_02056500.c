
int FUN_02056500(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (((((99 < uVar4) || (uVar2 = param_1[1], uVar2 == 0)) || (0xc < uVar2)) ||
      ((uVar1 = param_1[2], uVar1 == 0 || (0x1f < uVar1)))) ||
     ((6 < (int)param_1[3] || ((uVar2 == 0 || (0xc < uVar2)))))) {
    return -1;
  }
  iVar3 = (uVar1 - 1) + (&DAT_0209dcf4)[uVar2];
  if ((2 < uVar2) && ((uVar4 & 3) == 0)) {
    iVar3 = iVar3 + 1;
  }
  return uVar4 * 0x16d + iVar3 + (uVar4 + 3 >> 2);
}

