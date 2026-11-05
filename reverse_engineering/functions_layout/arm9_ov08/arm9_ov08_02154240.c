
void FUN_02154240(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [12];
  
  bVar1 = (&DAT_0216a420)[*(byte *)(DAT_0216e688 + 0x17)];
  if (*(char *)(DAT_0216e688 + 0x18) == '\0') {
    iVar4 = 0;
    if (*(char *)(DAT_0216e688 + 0x16) != -1) {
      return;
    }
    if (bVar1 != 0) {
      do {
        FUN_02166868(&DAT_0216a428 +
                     (uint)(byte)(&DAT_0216a440)[iVar4 + (uint)*(byte *)(DAT_0216e688 + 0x17) * 2] *
                     4,&DAT_0216a41c,auStack_20);
        iVar2 = FUN_02166d70(auStack_20);
        if (iVar2 != 0) {
          if (*(int *)(DAT_0216e688 + 0x10) == 0) {
            bVar1 = (&DAT_0216a430)[iVar4 + (uint)*(byte *)(DAT_0216e688 + 0x17) * 2];
            iVar2 = iVar4 * 4;
            uVar3 = FUN_02165d64(*(undefined4 *)(DAT_0216e688 + iVar2),0);
            FUN_02166014(0,bVar1 + 1,uVar3);
            FUN_02165bc4(*(undefined4 *)(DAT_0216e688 + iVar2),0xffffffff,
                         *(undefined2 *)
                          (&DAT_0216a428 +
                          (uint)(byte)(&DAT_0216a440)
                                      [iVar4 + (uint)*(byte *)(DAT_0216e688 + 0x17) * 2] * 4),
                         (&DAT_0216a42a)
                         [(uint)(byte)(&DAT_0216a440)
                                      [iVar4 + (uint)*(byte *)(DAT_0216e688 + 0x17) * 2] * 2]);
            FUN_02165b80(*(undefined4 *)(DAT_0216e688 + iVar2),0xffffffff,1);
            uVar3 = FUN_02167814(0,0x2154119,0,0x6e);
            *(undefined4 *)(DAT_0216e688 + 0x10) = uVar3;
            *(char *)(DAT_0216e688 + 0x16) = (char)iVar4;
            return;
          }
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)bVar1);
    }
  }
  *(undefined1 *)(DAT_0216e688 + 0x16) = 0xff;
  return;
}

