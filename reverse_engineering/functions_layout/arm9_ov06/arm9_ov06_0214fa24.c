
void FUN_0214fa24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 1;
  do {
    iVar1 = param_1 + iVar5 * 4;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + *(int *)(iVar1 + 0x9c);
    iVar2 = iVar2 + *(int *)(iVar1 + 0x6c);
    iVar3 = iVar3 + *(int *)(iVar1 + 0x8c);
  } while (iVar5 < 4);
  DAT_020aff1a = (undefined2)iVar4;
  DAT_020aff1c = (undefined2)iVar2;
  DAT_020aff1e = (undefined2)iVar3;
  DAT_020aff22 = FUN_0214f8e0(param_1);
  DAT_020aff20 = (short)*(undefined4 *)(param_1 + 0x6c);
  return;
}

