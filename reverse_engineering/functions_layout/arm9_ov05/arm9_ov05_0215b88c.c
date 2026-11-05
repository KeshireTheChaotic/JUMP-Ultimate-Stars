
void FUN_0215b88c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x170);
    if (iVar2 == param_2) {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),iVar2 + 0x82001f,0);
    }
    else {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),iVar2 + 0x82001b,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

