
char FUN_02068390(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  cVar4 = '\0';
  iVar5 = 0;
  if (*(char *)(param_1 + 0xd12) != '\0') {
    pbVar2 = (byte *)(param_1 + 0x447);
    iVar1 = param_1;
    iVar3 = param_1;
    do {
      if ((*(char *)(iVar3 + 0x444) == '\0') && (*(ushort *)(iVar1 + 0x4a6) - 1 != (*pbVar2 & 0x7f))
         ) {
        *pbVar2 = *pbVar2 & 0x7f;
        cVar4 = cVar4 + '\x01';
      }
      else {
        *pbVar2 = *pbVar2 | 0x80;
      }
      iVar3 = iVar3 + 4;
      pbVar2 = pbVar2 + 4;
      iVar1 = iVar1 + 0xc0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0xd12));
  }
  return cVar4;
}

