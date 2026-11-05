
void FUN_0214dc00(uint param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int iVar4;
  undefined1 *unaff_r8;
  char *unaff_r9;
  int unaff_r10;
  char in_NG;
  char in_OV;
  int in_stack_00000000;
  int iStack00000004;
  int iStack00000008;
  
  do {
    uVar2 = (undefined1)param_1;
    if (in_NG == in_OV) {
      if (unaff_r4 != 0) {
        uVar2 = 0xff;
      }
      *unaff_r8 = uVar2;
      return;
    }
    iStack00000004 =
         (uint)*(byte *)(unaff_r10 + unaff_r5 + 0x31) * 0x88 + *(int *)(in_stack_00000000 + 0x3c);
    bVar1 = true;
    if ((*(char *)(iStack00000004 + 4) != -1) &&
       (((&DAT_020b4084)[*(byte *)(unaff_r10 + *(char *)(iStack00000004 + 4) + 0x31)] & 1) == 0)) {
      unaff_r4 = 1;
    }
    iStack00000008 = -1;
    for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
      if ((*(short *)(iVar4 * 0x14 + iStack00000004 + 0x10) != iStack00000008) &&
         (iVar3 = FUN_0214dc1c(*(undefined1 *)(unaff_r10 + unaff_r5 + 0x31),iVar4), iVar3 == 0)) {
        bVar1 = false;
        break;
      }
    }
    if (bVar1) {
      *unaff_r9 = *unaff_r9 + '\x01';
    }
    unaff_r5 = unaff_r5 + 1;
    param_1 = (uint)*(byte *)(unaff_r10 + 0x30);
    in_OV = SBORROW4(unaff_r5,param_1);
    in_NG = (int)(unaff_r5 - param_1) < 0;
  } while( true );
}

