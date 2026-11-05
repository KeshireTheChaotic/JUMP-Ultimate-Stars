
void FUN_0215bc54(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar5 = DAT_0216e77c + 8 + iVar3;
    iVar4 = 0;
    do {
      cVar1 = *(char *)(iVar5 + iVar4);
      if (((cVar1 != '0') && (cVar1 != ' ')) && (cVar1 != '\0')) break;
      if (iVar4 == 2) {
        uVar2 = 0x30;
      }
      else {
        uVar2 = 0x20;
      }
      *(undefined1 *)(iVar5 + iVar4) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar3 = iVar3 + 3;
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      FUN_0215bd98();
      return;
    }
  } while( true );
}

