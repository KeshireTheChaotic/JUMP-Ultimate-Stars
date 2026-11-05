
undefined4 FUN_021bef3c(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_1c;
  
  local_1c = 0xff;
  uVar2 = OS_DisableInterrupts();
  iVar3 = FUN_021bfbd4();
  if (iVar3 == 0) {
    OS_RestoreInterrupts(uVar2);
    return 0;
  }
  if (0x10 < *(byte *)(DAT_021d525c + 0x1524) + 1) {
    OS_RestoreInterrupts(uVar2);
    return 0;
  }
  uVar4 = 0;
  while( true ) {
    iVar3 = DAT_021d525c + uVar4 * 0x5d4;
    if (*(int *)(iVar3 + 0x1d40) == param_1) {
      OS_RestoreInterrupts(uVar2);
      return 0;
    }
    if (*(char *)(iVar3 + 0x1d52) == '\0') break;
    uVar4 = uVar4 + 1 & 0xff;
    if (0xf < uVar4) {
LAB_021befbc:
      if (uVar4 == 0x10) {
        OS_RestoreInterrupts(uVar2);
        return 0;
      }
      iVar5 = local_1c * 0x5d4;
      *(int *)(DAT_021d525c + iVar5 + 0x1d40) = param_1;
      iVar3 = DAT_021d525c + 0x1788 + iVar5;
      FUN_021beee0(iVar3,param_2);
      FUN_02051890(param_1 + 0x1c,iVar3 + 0xc4,0x20);
      iVar3 = FUN_021bed14(DAT_021d525c + 0x1d2c + iVar5,iVar3);
      if (iVar3 == 0) {
        OS_RestoreInterrupts(uVar2);
        return 0;
      }
      FUN_021bfad0(DAT_021d525c + 0x186c + iVar5,param_1,DAT_021d525c + 0x1300);
      *(char *)(DAT_021d525c + iVar5 + 0x1d21) = (char)local_1c;
      FUN_021bf99c(DAT_021d525c + 0x186c + iVar5);
      cVar1 = DAT_021d51ac + '\x01';
      *(char *)(DAT_021d525c + iVar5 + 0x1d1f) = DAT_021d51ac;
      DAT_021d51ac = cVar1;
      *(undefined2 *)(DAT_021d525c + iVar5 + 0x1d4e) = 1;
      *(int *)(DAT_021d525c + iVar5 + 0x1d44) = param_2;
      *(int *)(DAT_021d525c + iVar5 + 0x1d54) = param_2 + 0x1e8;
      *(int *)(DAT_021d525c + iVar5 + 0x1d58) = param_2 + 600;
      if ((*(int *)(*(int *)(DAT_021d525c + iVar5 + 0x1d54) + 0x6c) != 0) &&
         (iVar3 = FUN_021c12c4(), iVar3 == 0)) {
        FUN_021c12b8(DAT_021d525c + 0x7ce0);
        FUN_021c12d8(DAT_021d525c + 0x74e0,0x800);
      }
      *(undefined1 *)(DAT_021d525c + iVar5 + 0x1d52) = 1;
      *(char *)(DAT_021d525c + 0x1524) = *(char *)(DAT_021d525c + 0x1524) + '\x01';
      OS_RestoreInterrupts(uVar2);
      return 1;
    }
  }
  local_1c = uVar4;
  goto LAB_021befbc;
}

