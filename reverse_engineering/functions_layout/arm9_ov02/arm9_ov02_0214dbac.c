
void FUN_0214dbac(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  byte *unaff_r8;
  char *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  
  do {
    if ((*(short *)(unaff_r7 * param_2 + param_1 + 0x10) != param_7) &&
       (iVar2 = FUN_0214dc1c(*(undefined1 *)(unaff_r11 + 0x31),unaff_r7), iVar2 == 0)) {
      unaff_r6 = 0;
      goto FUN_0214dbe4;
    }
    unaff_r7 = unaff_r7 + 1;
    while (4 < unaff_r7) {
FUN_0214dbe4:
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
      unaff_r11 = unaff_r10 + unaff_r5;
      param_6 = (uint)*(byte *)(unaff_r11 + 0x31) * 0x88 + *(int *)(param_5 + 0x3c);
      unaff_r6 = 1;
      if ((*(char *)(param_6 + 4) != -1) &&
         (((&DAT_020b4084)[*(byte *)(unaff_r10 + *(char *)(param_6 + 4) + 0x31)] & 1) == 0)) {
        unaff_r4 = 1;
      }
      param_7 = -1;
      unaff_r7 = 0;
    }
    param_2 = 0x14;
    param_1 = param_6;
  } while( true );
}

