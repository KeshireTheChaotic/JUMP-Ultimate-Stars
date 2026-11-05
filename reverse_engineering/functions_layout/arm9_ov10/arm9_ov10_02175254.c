
void FUN_02175254(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(DAT_021a7364 + 0x110c);
  if (DAT_021a7370 != 0) {
    FUN_0217405c();
    (*pcVar1)(s_FREE_DWChttp_021a3d44,DAT_021a7370,0);
    DAT_021a7370 = 0;
  }
  FUN_02173228();
  if (DAT_021a7364 != 0) {
    if (*(int *)(DAT_021a7364 + 0x1114) != 0) {
      (*pcVar1)(s_FREE_DWCnetcheck_>body_302_021a3c1c,*(int *)(DAT_021a7364 + 0x1114),0);
      *(undefined4 *)(DAT_021a7364 + 0x1114) = 0;
    }
    if (*(int *)(DAT_021a7364 + 0x1118) != 0) {
      (*pcVar1)(s_FREE_DWCnetcheck_>body_wayport_021a3cd0,*(int *)(DAT_021a7364 + 0x1118),0);
      *(undefined4 *)(DAT_021a7364 + 0x1118) = 0;
    }
    (*pcVar1)(s_FREE_DWCnetcheck_021a3d54,DAT_021a7364,0);
    DAT_021a7364 = 0;
  }
  return;
}

