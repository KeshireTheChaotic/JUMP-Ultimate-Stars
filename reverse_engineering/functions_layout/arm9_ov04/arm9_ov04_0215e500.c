
void FUN_0215e500(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_020869b8(*(undefined4 *)(iVar2 + 0xc0));
  if (iVar1 != 0) {
    return;
  }
  if (*(char *)(iVar2 + 0xba) < '\0') {
    FUN_020869c8(*(undefined4 *)(iVar2 + 0xc0),1);
    FUN_02087214(0x1f1f,&DAT_021605a4,2);
    *(undefined1 *)(iVar2 + 0xba) = 1;
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_0215e480);
    return;
  }
  return;
}

