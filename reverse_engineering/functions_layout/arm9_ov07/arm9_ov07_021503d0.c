
void FUN_021503d0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_0214f1f0(*(undefined4 *)(iVar2 + 0x10));
  if ((uVar1 & 0x3c) != 0) {
    if (*(char *)(iVar2 + 0xa6) < '\0') {
      if (-1 < *(char *)(iVar2 + 0xa7)) {
        FUN_021504b8(iVar2,(int)*(char *)(iVar2 + 0xa5),6);
        *(undefined1 *)(iVar2 + 0xa7) = 0xff;
      }
    }
    else {
      FUN_021504b8(iVar2,(int)*(char *)(iVar2 + 0xa4),8);
      if (-1 < *(char *)(iVar2 + 0xa5)) {
        FUN_021504b8(iVar2,(int)*(char *)(iVar2 + 0xa5),6);
      }
      *(undefined1 *)(iVar2 + 0xa6) = 0xff;
    }
    if (*(int *)(iVar2 + 0xa0) != 0) {
      FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0xa0) + 4),0x215052d);
    }
  }
  return;
}

