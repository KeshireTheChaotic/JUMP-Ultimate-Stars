
void FUN_0214dbe4(void)

{
  byte bVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar3;
  byte *unaff_r8;
  char *unaff_r9;
  int unaff_r10;
  int in_stack_00000000;
  int iStack00000004;
  int iStack00000008;
  
  do {
    if (unaff_r6 != 0) {
      *unaff_r9 = *unaff_r9 + '\x01';
    }
    unaff_r5 = unaff_r5 + 1;
    bVar1 = *(byte *)(unaff_r10 + 0x30);
    if ((int)(uint)bVar1 <= unaff_r5) {
      if (unaff_r4 != 0) {
        bVar1 = 0xff;
      }
      *unaff_r8 = bVar1;
      return;
    }
    iStack00000004 =
         (uint)*(byte *)(unaff_r10 + unaff_r5 + 0x31) * 0x88 + *(int *)(in_stack_00000000 + 0x3c);
    unaff_r6 = 1;
    if ((*(char *)(iStack00000004 + 4) != -1) &&
       (((&DAT_020b4084)[*(byte *)(unaff_r10 + *(char *)(iStack00000004 + 4) + 0x31)] & 1) == 0)) {
      unaff_r4 = 1;
    }
    iStack00000008 = -1;
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
      if ((*(short *)(iVar3 * 0x14 + iStack00000004 + 0x10) != iStack00000008) &&
         (iVar2 = FUN_0214dc1c(*(undefined1 *)(unaff_r10 + unaff_r5 + 0x31),iVar3), iVar2 == 0)) {
        unaff_r6 = 0;
        break;
      }
    }
  } while( true );
}

