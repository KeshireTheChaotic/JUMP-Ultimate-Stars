
void FUN_02057870(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_02056ae0();
  iVar4 = param_1 + 0x18;
  iVar5 = 0;
  do {
    iVar3 = param_1 + iVar5 * 8;
    iVar2 = *(int *)(iVar3 + 0x18);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
      if (iVar4 == *(int *)(iVar2 + 0x18)) {
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar3 + 0x1c);
        DC_StoreRange(iVar2,0x3c);
      }
      else {
        do {
          iVar2 = iVar1;
          if (iVar2 == 0) break;
          iVar1 = *(int *)(iVar2 + 4);
        } while (iVar4 != *(int *)(iVar2 + 4));
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + iVar5 * 8 + 0x1c);
        DC_StoreRange(iVar2,8);
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 8;
    if (3 < iVar5) {
      FUN_02056acc();
      return;
    }
  } while( true );
}

