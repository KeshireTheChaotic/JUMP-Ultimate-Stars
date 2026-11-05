
void FUN_02173228(void)

{
  code *pcVar1;
  
  if (DAT_021a7348 != 0) {
    pcVar1 = *(code **)(DAT_021a7348 + 0x1210);
    if (*(int *)(DAT_021a7348 + 0x1314) != 0) {
      FUN_0217405c();
    }
    (*pcVar1)(s_FREE_DWCauth_021a3830,DAT_021a7348,0);
    DAT_021a7348 = 0;
  }
  return;
}

