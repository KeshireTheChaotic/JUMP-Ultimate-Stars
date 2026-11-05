
undefined4 FUN_0215bf40(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_10 [8];
  
  pcVar3 = local_10;
  iVar2 = (uint)*(byte *)(DAT_0216e77c + 0x14) * 3;
  cVar1 = *(char *)(DAT_0216e77c + 8 + iVar2);
  if ((cVar1 != '\0') && (cVar1 != ' ')) {
    return 1;
  }
  FUN_02051890(DAT_0216e77c + 8 + iVar2,local_10,3);
  iVar2 = 0;
  local_10[3] = 0;
  do {
    if (*pcVar3 != '\0') break;
    *pcVar3 = ' ';
    pcVar3 = pcVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = FUN_02005f14(local_10);
  if (iVar2 < param_1) {
    return 0;
  }
  return 1;
}

