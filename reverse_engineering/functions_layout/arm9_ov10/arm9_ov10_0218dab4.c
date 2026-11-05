
void FUN_0218dab4(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar1 = FUN_02001c20();
  if (iVar1 != 0) {
    DAT_021a8384 = 0;
    do {
      iVar3 = DAT_021a8384 * 4;
      puVar2 = *(undefined1 **)(*(int *)(iVar1 + 0xc) + iVar3);
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      *(undefined1 *)(&DAT_021a8388 + DAT_021a8384) = *puVar2;
      *(undefined1 *)((int)&DAT_021a8388 + iVar3 + 1) = puVar2[1];
      *(undefined1 *)((int)&DAT_021a8388 + iVar3 + 2) = puVar2[2];
      *(undefined1 *)((int)&DAT_021a8388 + iVar3 + 3) = puVar2[3];
      DAT_021a8384 = DAT_021a8384 + 1;
    } while (DAT_021a8384 < 5);
  }
  return;
}

