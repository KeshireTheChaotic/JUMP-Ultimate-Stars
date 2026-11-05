
int FUN_021a1a60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = -1;
  while( true ) {
    if (0x3f < iVar4) {
      return iVar3;
    }
    iVar1 = (uint)*(byte *)(param_1 + 8) + iVar4;
    iVar2 = iVar1 >> 0x1f;
    iVar2 = (int)*(short *)(param_1 + (((uint)(iVar1 * 0x4000000 + iVar2) >> 0x1a | iVar2 << 6) -
                                      iVar2) * 8 + 0xc);
    if (iVar2 < 0) break;
    iVar4 = iVar4 + 1;
    iVar3 = iVar2;
  }
  return iVar3;
}

