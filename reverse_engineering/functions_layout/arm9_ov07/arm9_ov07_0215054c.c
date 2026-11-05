
void FUN_0215054c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_021504d4(iVar2,(int)*(char *)(iVar2 + 0xa4),param_3,param_4,param_4);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar2 + 0xa6) = 0xff;
    if (-1 < *(char *)(iVar2 + 0xa5)) {
      *(char *)(iVar2 + 0xa7) = *(char *)(iVar2 + 0xa5);
      FUN_021504b8(iVar2,(int)*(char *)(iVar2 + 0xa5),5);
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x21505a1);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x215052d);
  }
  return;
}

