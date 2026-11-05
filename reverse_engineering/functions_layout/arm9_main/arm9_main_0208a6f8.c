
void FUN_0208a6f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_24 [4];
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(DAT_0214ccec + 0x1c);
  uStack_18 = param_4;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar3 = iVar1 * 4;
    iVar2 = *(int *)(*(int *)(DAT_0214ccec + 0x18) + iVar3);
    *(int *)(iVar2 + 0xc0) = *(int *)(iVar2 + 0xc0) + -1;
    iVar2 = *(int *)(*(int *)(DAT_0214ccec + 0x18) + iVar3);
    if (*(int *)(iVar2 + 0xc0) == 0) {
      if (*(int *)(DAT_0214ccec + 0x24) == 0) {
        FUN_0201b244();
      }
      else {
        ALObjectImp::PostMessage
                  (param_1,*(int *)(DAT_0214ccec + 0x24),0x70000001,
                   *(undefined4 *)(*(int *)(DAT_0214ccec + 0x18) + iVar3),iVar2 + 0x50,2);
      }
      iVar2 = DAT_0214ccec;
      iVar4 = *(int *)(DAT_0214ccec + 0x18) + iVar1 * 4;
      iStack_20 = iVar4;
      iStack_1c = iVar4;
      FUN_0200f69c(auStack_24,1);
      iVar3 = (*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x1c) * 4) - iVar4;
      FUN_02002450(iVar4,iVar4 + 4,(((int)(iVar3 + ((uint)(iVar3 >> 1) >> 0x1e)) >> 2) + -1) * 4);
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
    }
  }
  return;
}

