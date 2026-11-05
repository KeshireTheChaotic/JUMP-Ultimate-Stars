
uint FUN_02162ad4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (param_3 >> 0xc) * 0x40 + (param_2 >> 0xc);
  do {
    if (0xfff < iVar4) {
      return 0xffffffff;
    }
    sVar2 = *(short *)(*(int *)(param_1 + 0x14) + iVar4 * 8);
    if (sVar2 != -1) {
      iVar3 = *(int *)(param_1 + 0x14) + iVar4 * 8;
      bVar5 = *(char *)(iVar3 + 3) != '\0';
      cVar1 = '\0';
      if (bVar5) {
        cVar1 = *(char *)(iVar3 + 2);
      }
      if (!bVar5 || cVar1 == '\a') {
        FUN_02162980(param_4,sVar2 * 0x18 + *(int *)(param_1 + 0x18),iVar3,param_4,param_4);
        return (int)*(short *)(*(int *)(param_1 + 0x14) + iVar4 * 8) |
               (uint)*(byte *)(*(int *)(param_1 + 0x14) + iVar4 * 8 + 2) << 0x10;
      }
    }
    iVar4 = iVar4 + 0x40;
  } while( true );
}

