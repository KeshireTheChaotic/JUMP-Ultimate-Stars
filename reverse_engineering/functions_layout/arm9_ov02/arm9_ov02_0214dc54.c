
void FUN_0214dc54(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int unaff_r5;
  int iVar1;
  char *unaff_r7;
  char *unaff_r8;
  
  *unaff_r8 = (char)unaff_r5;
  iVar1 = unaff_r5;
  while (iVar1 < (int)(uint)*(byte *)(param_2 + 0x44)) {
    FUN_0214db0c();
    iVar1 = iVar1 + 1;
    *unaff_r8 = *unaff_r8 + param_5._1_1_;
    *unaff_r7 = *unaff_r7 + (char)param_5;
    if ((char)param_5 == -1) {
      unaff_r5 = 1;
    }
  }
  if (unaff_r5 != 0) {
    *unaff_r7 = -1;
  }
  return;
}

