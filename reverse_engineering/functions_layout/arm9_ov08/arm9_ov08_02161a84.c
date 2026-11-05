
void FUN_02161a84(int param_1,int param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  char local_1c [8];
  
  FUN_020517fc(local_1c,0,4);
  iVar4 = 0;
  iVar5 = 0;
  local_20 = 0;
  do {
    FUN_02051890(param_1 + iVar5,local_1c,3);
    pcVar2 = local_1c;
    iVar3 = local_20;
    do {
      if (*pcVar2 != '\0') break;
      *pcVar2 = ' ';
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    uVar1 = FUN_02005f14(local_1c);
    *(undefined1 *)(param_2 + iVar4) = uVar1;
    iVar5 = iVar5 + 3;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}

