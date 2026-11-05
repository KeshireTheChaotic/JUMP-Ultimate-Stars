
void FUN_021539e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = param_1 + iVar3 * 4;
    iVar1 = iVar3 * 4;
    *(undefined4 *)(param_2 + iVar3 * 4) = *(undefined4 *)(iVar2 + 0x43c);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_2 + iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x454);
  } while (iVar3 < 6);
  *(int *)(param_2 + 0x30) = (int)*(char *)(param_1 + 0x438);
  return;
}

