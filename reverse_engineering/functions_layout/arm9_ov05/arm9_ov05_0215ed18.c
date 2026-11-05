
void FUN_0215ed18(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 == 0) {
    iVar1 = FUN_0203b3e4();
  }
  else {
    iVar1 = FUN_0203b3f4();
  }
  iVar1 = *(int *)(iVar1 + 0x88);
  FUN_0215ede4(iVar1,0,0);
  FUN_0215ede4(iVar1,1,0);
  iVar3 = 0;
  do {
    iVar2 = param_1 + iVar3 * 8;
    *(undefined2 *)(iVar2 + 2) = 0;
    *(undefined2 *)(param_1 + iVar3 * 8) = 0;
    *(undefined2 *)(iVar2 + 4) = 0;
    *(undefined2 *)(iVar2 + 6) = 0;
    FUN_0215ee0c(iVar1,iVar3);
    iVar2 = *(int *)(iVar1 + 4);
    *(undefined1 *)(iVar2 + 0x901) = 1;
    *(undefined4 *)(iVar2 + iVar3 * 4 + 0x8c8) = 0x1f;
    iVar2 = *(int *)(iVar1 + 4) + iVar3;
    *(undefined1 *)(*(int *)(iVar1 + 4) + 0x901) = 1;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x8fd) = 0;
  } while (iVar3 < 2);
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined1 *)(iVar3 + 0x901) = 1;
  *(undefined4 *)(iVar3 + 0x8d4) = param_3;
  iVar1 = *(int *)(iVar1 + 4);
  *(undefined1 *)(iVar1 + 0x8ff) = param_4;
  *(undefined1 *)(iVar1 + 0x901) = 1;
  return;
}

