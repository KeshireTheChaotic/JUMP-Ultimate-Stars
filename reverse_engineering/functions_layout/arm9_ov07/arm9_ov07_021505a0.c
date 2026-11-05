
void FUN_021505a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_021504d4(iVar2,(int)*(char *)(iVar2 + 0xa5),param_3,param_4,param_4);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar2 + 0xa7) = 0xff;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x215052d);
  }
  return;
}

