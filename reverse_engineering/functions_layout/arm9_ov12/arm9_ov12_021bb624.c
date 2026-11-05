
undefined4 FUN_021bb624(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  iVar2 = param_1 + 0xcf;
  do {
    if (*(int *)(param_1 + iVar4 * 4 + 0x80) != 0) {
      iVar5 = iVar3 * 0x2a;
      FUN_020517fc(iVar2 + iVar5,0,0x2a);
      thunk_FUN_0207400c(iVar2 + iVar5,(&PTR_DAT_021d3e80)[iVar4]);
      FUN_02074374(iVar2 + iVar5,*(undefined4 *)(param_1 + iVar4 * 4 + 0x80),3,0,param_4);
      thunk_FUN_020741c4(iVar2 + iVar5,FUN_021d3fa8);
      cVar1 = FUN_02074294(iVar2 + iVar5);
      iVar3 = iVar3 + 1;
      if (*(char *)(param_1 + 0x9f) < cVar1) {
        *(char *)(param_1 + 0x9f) = cVar1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  *(char *)(param_1 + 0x9e) = (char)iVar3;
  return 0;
}

