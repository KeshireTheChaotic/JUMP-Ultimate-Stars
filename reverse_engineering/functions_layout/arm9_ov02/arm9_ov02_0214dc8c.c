
void FUN_0214dc8c(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *unaff_r7;
  char *unaff_r8;
  int unaff_r9;
  char cStack00000000;
  char cStack00000001;
  
  while( true ) {
    unaff_r6 = unaff_r6 + 1;
    *unaff_r8 = *unaff_r8 + cStack00000001;
    *unaff_r7 = *unaff_r7 + cStack00000000;
    if (cStack00000000 == unaff_r4) {
      unaff_r5 = 1;
    }
    if ((int)(uint)*(byte *)(unaff_r9 + 0x44) <= unaff_r6) break;
    FUN_0214db0c();
  }
  if (unaff_r5 != 0) {
    *unaff_r7 = -1;
  }
  return;
}

