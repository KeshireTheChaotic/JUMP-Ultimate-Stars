
void FUN_02154750(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = param_1 + iVar3 * 4;
    uVar1 = *(undefined2 *)(&DAT_021603f4 + iVar3 * 2 + param_2 * 6);
    *(undefined2 *)(*(int *)(iVar2 + 0x30) + 0x16) = uVar1;
    FUN_021547a0(*(undefined4 *)(iVar2 + 0x30),0,iVar2,uVar1,param_4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

