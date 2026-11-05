
void FUN_021bbccc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0xa5) != '\0') {
    FUN_02073f24((&DAT_021d0115)[(uint)*(byte *)(iVar1 + 0x9a) * 2],0,
                 u_>__7__021d0128[*(char *)(iVar1 + 0x99)]);
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021bbd28);
  return;
}

