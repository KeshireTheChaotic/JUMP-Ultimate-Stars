
void FUN_021cc49c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  auStack_1c[0] = DAT_021d02b4;
  uStack_18 = param_4;
  iVar1 = FUN_0200d338(*(int *)(iVar3 + 0x1c) * 16000,1000);
  FUN_0205c078(iVar3 + 0x6c);
  iVar2 = FUN_0205c018(iVar3 + 0x6c,*(undefined1 *)(iVar3 + 8),auStack_1c);
  if (iVar2 != 0) {
    FUN_0205bd40(iVar3 + 0x6c,0);
    for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(iVar3 + 8); iVar2 = iVar2 + 1) {
      FUN_0205bce8(iVar3 + 0x6c,iVar2,0);
    }
    *(undefined1 *)(iVar3 + 9) = 0;
    iVar1 = FUN_0205be28(iVar3 + 0x6c,1,*(undefined4 *)(iVar3 + 200),
                         (uint)*(byte *)(iVar3 + 8) * iVar1 * 2,0x41,2,0x21cc17d,iVar3);
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x21cc545);
    }
  }
  return;
}

