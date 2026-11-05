
int FUN_02162a80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_3 >> 0xc) * 0x40 + (param_2 >> 0xc);
  while( true ) {
    if (0xfff < iVar2) {
      return -1;
    }
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0x14) + iVar2 * 8);
    if ((iVar1 != -1) && (*(char *)(*(int *)(param_1 + 0x14) + iVar2 * 8 + 3) == '\0')) break;
    iVar2 = iVar2 + 0x40;
  }
  return iVar1;
}

