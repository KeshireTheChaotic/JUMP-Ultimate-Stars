
void FUN_0219cbd8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0219a328();
  iVar1 = FUN_0219a484();
  if (iVar1 != 2) {
    return;
  }
  iVar1 = 0;
  do {
    iVar4 = FUN_0219b4bc();
    if (iVar4 <= iVar1) {
      return;
    }
    iVar4 = FUN_0219caf4(iVar1);
    if (((iVar4 != 0xff) && (iVar2 = FUN_021766fc(), iVar4 != iVar2)) &&
       (iVar2 = FUN_02176654(iVar4), iVar2 != 0)) {
      FUN_0219b4f4(iVar4);
      iVar2 = FUN_021a1dc4();
      for (iVar5 = 0; iVar5 < *(int *)(DAT_0214ccf8 + 0x44); iVar5 = iVar5 + 1) {
        iVar3 = thunk_FUN_02069718(*(undefined4 *)(DAT_0214ccf8 + 0x14),
                                   *(int *)(DAT_0214ccf8 + 0x18) + iVar5 * 0xc);
        if (iVar2 == iVar3) {
          iVar2 = FUN_02069c1c(*(int *)(DAT_0214ccf8 + 0x18) + iVar5 * 0xc);
          if (iVar2 != 0) {
            *(char *)(DAT_0214ccf8 + iVar4 + 0x8e8) = (char)iVar5;
          }
          break;
        }
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

